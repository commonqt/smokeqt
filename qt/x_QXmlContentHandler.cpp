//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qxml.h>

class x_QXmlContentHandler : public QXmlContentHandler {
public:
    static void x_0(Smoke::Stack x) {
	// QXmlContentHandler()
	x_QXmlContentHandler* xret = new x_QXmlContentHandler();
	x[0].s_class = (void*)xret;
    }
    x_QXmlContentHandler() : QXmlContentHandler() {
    }
    virtual bool characters(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	qt_Smoke->callMethod(9995, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool endDocument() {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(9990, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool endElement(const QString& x1, const QString& x2, const QString& x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	qt_Smoke->callMethod(9994, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool endPrefixMapping(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	qt_Smoke->callMethod(9992, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual QString errorString() {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(9999, (void*)this, x, true /*pure virtual*/);
	QString *xptr = (QString *)x[0].s_class;
	QString xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual bool ignorableWhitespace(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	qt_Smoke->callMethod(9996, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool processingInstruction(const QString& x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	qt_Smoke->callMethod(9997, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual void setDocumentLocator(QXmlLocator* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	qt_Smoke->callMethod(9988, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual bool skippedEntity(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	qt_Smoke->callMethod(9998, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool startDocument() {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(9989, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool startElement(const QString& x1, const QString& x2, const QString& x3, const QXmlAttributes& x4) {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	x[4].s_class = (void*)&x4;
	qt_Smoke->callMethod(9993, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool startPrefixMapping(const QString& x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	qt_Smoke->callMethod(9991, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    ~x_QXmlContentHandler() {}
};
void xcall_QXmlContentHandler(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QXmlContentHandler *xself = (x_QXmlContentHandler*)obj;
    switch(xi) {
	case 0: x_QXmlContentHandler::x_0(args);	break;
	case 1: delete (QXmlContentHandler*)xself;	break;
    }
}
