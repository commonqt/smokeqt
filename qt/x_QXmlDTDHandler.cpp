//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qxml.h>

class x_QXmlDTDHandler : public QXmlDTDHandler {
public:
    static void x_0(Smoke::Stack x) {
	// QXmlDTDHandler()
	x_QXmlDTDHandler* xret = new x_QXmlDTDHandler();
	x[0].s_class = (void*)xret;
    }
    x_QXmlDTDHandler() : QXmlDTDHandler() {
    }
    virtual QString errorString() {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(10003, (void*)this, x, true /*pure virtual*/);
	QString *xptr = (QString *)x[0].s_class;
	QString xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual bool notationDecl(const QString& x1, const QString& x2, const QString& x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	qt_Smoke->callMethod(10001, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool unparsedEntityDecl(const QString& x1, const QString& x2, const QString& x3, const QString& x4) {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_voidp = (void*)&x4;
	qt_Smoke->callMethod(10002, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    ~x_QXmlDTDHandler() {}
};
void xcall_QXmlDTDHandler(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QXmlDTDHandler *xself = (x_QXmlDTDHandler*)obj;
    switch(xi) {
	case 0: x_QXmlDTDHandler::x_0(args);	break;
	case 1: delete (QXmlDTDHandler*)xself;	break;
    }
}
