//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qxml.h>

class x_QXmlReader : public QXmlReader {
public:
    static void x_0(Smoke::Stack x) {
	// QXmlReader()
	x_QXmlReader* xret = new x_QXmlReader();
	x[0].s_class = (void*)xret;
    }
    x_QXmlReader() : QXmlReader() {
    }
    virtual QXmlDTDHandler* DTDHandler() const {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(10108, (void*)this, x, true /*pure virtual*/);
	return (QXmlDTDHandler*)x[0].s_class;
	// ABSTRACT
    }
    virtual QXmlContentHandler* contentHandler() const {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(10110, (void*)this, x, true /*pure virtual*/);
	return (QXmlContentHandler*)x[0].s_class;
	// ABSTRACT
    }
    virtual QXmlDeclHandler* declHandler() const {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(10116, (void*)this, x, true /*pure virtual*/);
	return (QXmlDeclHandler*)x[0].s_class;
	// ABSTRACT
    }
    virtual QXmlEntityResolver* entityResolver() const {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(10106, (void*)this, x, true /*pure virtual*/);
	return (QXmlEntityResolver*)x[0].s_class;
	// ABSTRACT
    }
    virtual QXmlErrorHandler* errorHandler() const {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(10112, (void*)this, x, true /*pure virtual*/);
	return (QXmlErrorHandler*)x[0].s_class;
	// ABSTRACT
    }
    virtual bool feature(const QString& x1, bool* x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	qt_Smoke->callMethod(10097, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool hasFeature(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	qt_Smoke->callMethod(10100, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool hasProperty(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	qt_Smoke->callMethod(10104, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual QXmlLexicalHandler* lexicalHandler() const {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(10114, (void*)this, x, true /*pure virtual*/);
	return (QXmlLexicalHandler*)x[0].s_class;
	// ABSTRACT
    }
    virtual bool parse(const QXmlInputSource& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	qt_Smoke->callMethod(10117, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool parse(const QXmlInputSource* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	qt_Smoke->callMethod(10118, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual void* property(const QString& x1, bool* x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	qt_Smoke->callMethod(10101, (void*)this, x, true /*pure virtual*/);
	return (void*)x[0].s_voidp;
	// ABSTRACT
    }
    virtual void setContentHandler(QXmlContentHandler* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	qt_Smoke->callMethod(10109, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual void setDTDHandler(QXmlDTDHandler* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	qt_Smoke->callMethod(10107, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual void setDeclHandler(QXmlDeclHandler* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	qt_Smoke->callMethod(10115, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual void setEntityResolver(QXmlEntityResolver* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	qt_Smoke->callMethod(10105, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual void setErrorHandler(QXmlErrorHandler* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	qt_Smoke->callMethod(10111, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual void setFeature(const QString& x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_bool = (bool)x2;
	qt_Smoke->callMethod(10099, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual void setLexicalHandler(QXmlLexicalHandler* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	qt_Smoke->callMethod(10113, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual void setProperty(const QString& x1, void* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	qt_Smoke->callMethod(10103, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    ~x_QXmlReader() {}
};
void xcall_QXmlReader(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QXmlReader *xself = (x_QXmlReader*)obj;
    switch(xi) {
	case 0: x_QXmlReader::x_0(args);	break;
	case 1: delete (QXmlReader*)xself;	break;
    }
}
