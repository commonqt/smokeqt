#ifndef SMOKE_H
#define SMOKE_H

/*
 *   Copyright (C) 2002, Ashley Winters <qaqortog@nwlink.com>
 */

class Smoke {
public:
    union StackItem; // defined below
    typedef StackItem* Stack;

    typedef short Index;
    typedef void (*ClassFn)(Index method, void* obj, Stack args); // was Stack * (DF)
    typedef void* (*CastFn)(void* obj, Index from, Index to);
    typedef void (*DestructorCallbackFn)(void* obj);

    /**
     * Describe one class.
     */
    struct Class {
	const char *className;	// Name of the class
	Index parents;		// Index into inheritanceList
	ClassFn classFn;	// Calls any method in the class
    };

    enum MethodFlags {
        mf_static = 0x01,
        mf_const = 0x02
    };
    /**
     * Describe one method of one class.
     */
    struct Method {
	Index classId;		// Index into classes
	Index name;		// Index into methodNames; real name
	Index args;		// Index into argumentList
	unsigned char numArgs;	// Number of arguments
	unsigned char flags;	// MethodFlags (const/static/etc...)
	Index ret;		// Index into types for the return type
	Index method;		// Passed to Class.classFn, to call method
    };

    /**
     * One MethodMap entry maps the munged method prototype
     * to the Method entry.
     *
     * The munging works this way:
     * $ is a plain scalar
     * # is an object
     * ? is a non-scalar (reference to array or hash, undef)
     *
     * e.g. QApplication(int &, char **) becomes QApplication$?
     */
    struct MethodMap {
	Index classId;		// Index into classes
	Index name;		// Index into methodNames; munged name
	Index method;		// Index into methods
    };

    enum TypeFlags {
	// Always only one of the next three flags should be set
	tf_stack = 0x01, 	// Stored on the stack, 'type'
	tf_ptr = 0x02,   	// Pointer, 'type*'
	tf_ref = 0x03,   	// Reference, 'type&'
	// Can | whatever ones of these apply
	tf_class = 0x04, 	// is class
	tf_enum = 0x08,  	// is enum
	tf_copy = 0x10   	// use new allocated copy (pass by value)
    };
    /**
     * One Type entry is one argument type needed by a method.
     * Type entries are shared, there is only one entry for "int" etc.
     */
    struct Type {
	const char *name;	// Stringified type name
	Index classId;		// Index into classes. -1 for none
        unsigned short flags;   // TypeFlags
    };

    // We could just pass everything around using void* (pass-by-reference)
    // I don't want to, though. -aw
    union StackItem {
	bool s_bool;
	char s_char;
	unsigned char s_uchar;
	short s_short;
	unsigned short s_ushort;
	int s_int;
	unsigned int s_uint;
	long s_long;
	unsigned long s_ulong;
	float s_float;
	double s_double;
	void* s_voidp;
    };
    enum {
	t_void,
	t_bool,
	t_char,
	t_uchar,
	t_short,
	t_ushort,
	t_int,
	t_uint,
	t_long,
	t_ulong,
	t_float,
	t_double,
	t_last		// number of pre-defined types
    };

    // Passed to constructor
    /**
     * The classes array defines every class for this module
     */
    Class *classes;
    Index numClasses;

    /**
     * The methods array defines every method in every class for this module
     */
    Method *methods;
    Index numMethods;

    /**
     * methodMaps maps the munged method prototypes
     * to the methods entries.
     */
    MethodMap *methodMaps;
    Index numMethodMaps;

    /**
     * Array of method names, for Method.name and MethodMap.name
     */
    const char **methodNames;
    Index numMethodNames;

    /**
     * List of all types needed by the methods (arguments and return values)
     */
    Type *types;
    Index numTypes;

    /**
     * Groups of class IDs (-1 separated) used as super class lists.
     * For classes with super classes: Class.parents = index into this array.
     */
    Index *inheritanceList;
    /**
     * Groups of type IDs (-1 separated), describing the types of argument for a method.
     * Method.args = index into this array.
     */
    Index *argumentList;
    /**
     * Groups of method prototypes with the same number of arguments, but different types.
     * Used to resolve overloading.
     */
    Index *ambiguousMethodList;
    /**
     * Function used for casting from/to the classes defined by this module.
     */
    CastFn castFn;

    // Not passed to constructor
    DestructorCallbackFn destructorCallbackFn;

    /**
     * Constructor
     */
    Smoke(Class *_classes, Index _numClasses,
	  Method *_methods, Index _numMethods,
	  MethodMap *_methodMaps, Index _numMethodMaps,
	  const char **_methodNames, Index _numMethodNames,
	  Type *_types, Index _numTypes,
	  Index *_inheritanceList,
	  Index *_argumentList,
	  Index *_ambiguousMethodList,
	  CastFn _castFn) :
		classes(_classes), numClasses(_numClasses),
		methods(_methods), numMethods(_numMethods),
		methodMaps(_methodMaps), numMethodMaps(_numMethodMaps),
		methodNames(_methodNames), numMethodNames(_numMethodNames),
		types(_types), numTypes(_numTypes),
		inheritanceList(_inheritanceList),
		argumentList(_argumentList),
		ambiguousMethodList(_ambiguousMethodList),
		castFn(_castFn),

		destructorCallbackFn(0)
		{}

    // TODO: Come up with semi-consistent error codes

    inline int leg(Index a, Index b) {  // ala Perl's <=>
	if(a == b) return 0;
	return (a > b) ? 1 : -1;
    }

    inline Index idClass(const char *m) {
	Index imax = numClasses;
	Index imin = 0;
	Index icur = -1;
	int icmp = -1;

	while(imax >= imin) {
	    icur = (imin + imax) / 2;
	    icmp = strcmp(classes[icur].className, m);
	    if(!icmp) break;
	    if(icmp > 0)
		imax = icur - 1;
	    else
		imin = icur + 1;
	}

	return (!icmp) ? icur : 0;
    }
    
    inline Index idMethodName(const char *m) {
	Index imax = numMethodNames;
	Index imin = 0;
	Index icur = -1;
	int icmp = -1;

	while(imax >= imin) {
	    icur = (imin + imax) / 2;
	    icmp = strcmp(methodNames[icur], m);
	    if(!icmp) break;
	    if(icmp > 0)
		imax = icur - 1;
	    else
		imin = icur + 1;
	}

	return (!icmp) ? icur : -1;
    }
 
    inline Index idMethod(Index c, Index name) {
	if(c == 0 || name < 0) return -1;
	Index imax = numMethods;
	Index imin = 0;
	Index icur = -1;
	int icmp = -1;

	while(imax >= imin) {
	    icur = (imin + imax) / 2;
	    icmp = leg(methodMaps[icur].classId, c);
	    if(!icmp) {
		icmp = leg(methodMaps[icur].name, name);
		if(!icmp) break;
	    }
	    if(icmp > 0)
		imax = icur - 1;
	    else
		imin = icur + 1;
	}

	return (!icmp) ? icur : -1;
    }

    inline Index findMethod(Index c, Index name) {
	// TODO: If method is in a parent module, forward the call from here
	if(c == 0 || name < 0) return -1;
	Index mid = idMethod(c, name);
	if(mid != -1) return mid;
	if(classes[c].parents == -1) return -1;
	for(int p = classes[c].parents; inheritanceList[p] >= 0; p++) {
	    mid = findMethod(inheritanceList[p], name);
	    if(mid != -1) return mid;
	}
	return -1;
    }

    inline Index findMethod(const char *c, const char *name) {
	if(!c || !name) return -1;
	Index idc = idClass(c);
	Index idname = idMethodName(name);
	return findMethod(idc, idname);
    }
};

//// TODO
bool call_method(void*, int, Smoke::Stack);
void call_method_abstract(void*, int, Smoke::Stack);


#endif
