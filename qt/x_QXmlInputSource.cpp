//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qfile.h>
#include <qtextstream.h>
#include <qcstring.h>
#include <qstring.h>
#include <qxml.h>

class x_QXmlInputSource : public QXmlInputSource {
public:
    static void x_0(Smoke::Stack x) {
	// QXmlInputSource()
	x_QXmlInputSource* xret = new x_QXmlInputSource();
	x[0].s_class = (void*)xret;
    }
    x_QXmlInputSource() : QXmlInputSource() {
    }
    static void x_1(Smoke::Stack x) {
	// QXmlInputSource(QIODevice*)
	x_QXmlInputSource* xret = new x_QXmlInputSource((QIODevice*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QXmlInputSource(QIODevice* x1) : QXmlInputSource(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QXmlInputSource(QFile&)
	x_QXmlInputSource* xret = new x_QXmlInputSource(*(QFile *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QXmlInputSource(QFile& x1) : QXmlInputSource(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QXmlInputSource(QTextStream&)
	x_QXmlInputSource* xret = new x_QXmlInputSource(*(QTextStream *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QXmlInputSource(QTextStream& x1) : QXmlInputSource(x1) {
    }
    void x_4(Smoke::Stack x) {
	// setData(const QString&)
	this->QXmlInputSource::setData(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_5(Smoke::Stack x) {
	// setData(const QByteArray&)
	this->QXmlInputSource::setData(*(const QByteArray *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_6(Smoke::Stack x) {
	// fetchData()
	this->QXmlInputSource::fetchData();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_7(Smoke::Stack x) {
	// data()
	QString xret = this->QXmlInputSource::data();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_8(Smoke::Stack x) {
	// next()
	QChar xret = this->QXmlInputSource::next();
	x[0].s_class = (void*)new QChar(xret);
    }
    void x_9(Smoke::Stack x) {
	// reset()
	this->QXmlInputSource::reset();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_10(Smoke::Stack x) {
	// fromRawData(const QByteArray&, bool)
	QString xret = this->QXmlInputSource::fromRawData(*(const QByteArray *)x[1].s_voidp,(bool)x[2].s_bool);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_11(Smoke::Stack x) {
	// fromRawData(const QByteArray&)
	QString xret = this->QXmlInputSource::fromRawData(*(const QByteArray *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    virtual QString data() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(10056, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QXmlInputSource::data();
    }
    virtual void fetchData() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(10055, (void*)this, x)) return;
	this->QXmlInputSource::fetchData();
    }
    virtual QString fromRawData(const QByteArray& x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_bool = x2;
	if(qt_Smoke->callMethod(10059, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QXmlInputSource::fromRawData(x1, x2);
    }
    virtual QChar next() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(10057, (void*)this, x)) {
	    QChar *xptr = (QChar *)x[0].s_class;
	    QChar xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QXmlInputSource::next();
    }
    virtual void reset() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(10058, (void*)this, x)) return;
	this->QXmlInputSource::reset();
    }
    virtual void setData(const QByteArray& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(10054, (void*)this, x)) return;
	this->QXmlInputSource::setData(x1);
    }
    virtual void setData(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(10053, (void*)this, x)) return;
	this->QXmlInputSource::setData(x1);
    }
    ~x_QXmlInputSource() {}
};
void xcall_QXmlInputSource(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QXmlInputSource *xself = (x_QXmlInputSource*)obj;
    switch(xi) {
	case 0: x_QXmlInputSource::x_0(args);	break;
	case 1: x_QXmlInputSource::x_1(args);	break;
	case 2: x_QXmlInputSource::x_2(args);	break;
	case 3: x_QXmlInputSource::x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: delete (QXmlInputSource*)xself;	break;
    }
}
