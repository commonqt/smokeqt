//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qdns.h>
#include <qhostaddress.h>
#include <qstring.h>
#include <qstringlist.h>

class x_QDns : public QDns {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QDns::None;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QDns::A;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QDns::Aaaa;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QDns::Mx;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QDns::Srv;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QDns::Cname;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_enum = (long)QDns::Ptr;
    }
    static void x_7(Smoke::Stack x) {
	x[0].s_enum = (long)QDns::Txt;
    }
    void x_8(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QDns::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_9(Smoke::Stack x) const {
	// className()
	const char* xret = this->QDns::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_10(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QDns::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_11(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QDns::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_12(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QDns::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_13(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QDns::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_14(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QDns::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_15(Smoke::Stack x) {
	// QDns()
	x_QDns* xret = new x_QDns();
	x[0].s_class = (void*)xret;
    }
    x_QDns() : QDns() {
    }
    static void x_16(Smoke::Stack x) {
	// QDns(const QString&, QDns::RecordType)
	x_QDns* xret = new x_QDns(*(const QString *)x[1].s_voidp,(QDns::RecordType)x[2].s_enum);
	x[0].s_class = (void*)xret;
    }
    x_QDns(const QString& x1, QDns::RecordType x2) : QDns(x1, x2) {
    }
    static void x_17(Smoke::Stack x) {
	// QDns(const QString&)
	x_QDns* xret = new x_QDns(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QDns(const QString& x1) : QDns(x1) {
    }
    static void x_18(Smoke::Stack x) {
	// QDns(const QHostAddress&, QDns::RecordType)
	x_QDns* xret = new x_QDns(*(const QHostAddress *)x[1].s_class,(QDns::RecordType)x[2].s_enum);
	x[0].s_class = (void*)xret;
    }
    x_QDns(const QHostAddress& x1, QDns::RecordType x2) : QDns(x1, x2) {
    }
    static void x_19(Smoke::Stack x) {
	// QDns(const QHostAddress&)
	x_QDns* xret = new x_QDns(*(const QHostAddress *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDns(const QHostAddress& x1) : QDns(x1) {
    }
    void x_20(Smoke::Stack x) {
	// setLabel(const QString&)
	this->QDns::setLabel(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_21(Smoke::Stack x) {
	// setLabel(const QHostAddress&)
	this->QDns::setLabel(*(const QHostAddress *)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_22(Smoke::Stack x) const {
	// label()
	QString xret = this->QDns::label();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_23(Smoke::Stack x) {
	// setRecordType(QDns::RecordType)
	this->QDns::setRecordType((QDns::RecordType)x[1].s_enum);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_24(Smoke::Stack x) {
	// setRecordType()
	this->QDns::setRecordType();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_25(Smoke::Stack x) const {
	// recordType()
	QDns::RecordType xret = this->QDns::recordType();
	x[0].s_enum = xret;
    }
    void x_26(Smoke::Stack x) const {
	// isWorking()
	bool xret = this->QDns::isWorking();
	x[0].s_bool = xret;
    }
    void x_27(Smoke::Stack x) const {
	// addresses()
	QValueList<QHostAddress> xret = this->QDns::addresses();
	x[0].s_voidp = (void*)new QValueList<QHostAddress>(xret);
    }
    void x_28(Smoke::Stack x) const {
	// mailServers()
	QValueList<MailServer> xret = this->QDns::mailServers();
	x[0].s_voidp = (void*)new QValueList<MailServer>(xret);
    }
    void x_29(Smoke::Stack x) const {
	// servers()
	QValueList<Server> xret = this->QDns::servers();
	x[0].s_voidp = (void*)new QValueList<Server>(xret);
    }
    void x_30(Smoke::Stack x) const {
	// hostNames()
	QStringList xret = this->QDns::hostNames();
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_31(Smoke::Stack x) const {
	// texts()
	QStringList xret = this->QDns::texts();
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_32(Smoke::Stack x) const {
	// canonicalName()
	QString xret = this->QDns::canonicalName();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_33(Smoke::Stack x) const {
	// qualifiedNames()
	QStringList xret = this->QDns::qualifiedNames();
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_34(Smoke::Stack x) {
	// resultsReady()
	this->QDns::resultsReady();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_35(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QDns::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_36(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QDns::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_37(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QDns::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_38(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QDns::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_39(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QDns::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_40(Smoke::Stack x) {
	// connectNotify(const char*)
	this->QDns::connectNotify((const char*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6496, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6492, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2221, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QDns::className();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(2253, (void*)this, x)) return;
	this->QDns::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6493, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6495, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6426, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6427, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6449, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2220, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QDns::metaObject();
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6463, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void* qt_cast(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(2222, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QDns::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(2224, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDns::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(2223, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDns::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(2225, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDns::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6450, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setLabel(const QHostAddress& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2234, (void*)this, x)) return;
	this->QDns::setLabel(x1);
    }
    virtual void setLabel(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2233, (void*)this, x)) return;
	this->QDns::setLabel(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6432, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6462, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setRecordType(QDns::RecordType x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(2236, (void*)this, x)) return;
	this->QDns::setRecordType(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6491, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 150: //QDns::RecordType
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QDns::RecordType;
		break;
	      case Smoke::EnumDelete:
		delete (QDns::RecordType*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QDns::RecordType*)xdata = (QDns::RecordType)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QDns::RecordType*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QDns() { qt_Smoke->binding->deleted(71, (void*)this); }
};
void xenum_QDns(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QDns::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QDns(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDns *xself = (x_QDns*)obj;
    switch(xi) {
	case 0: x_QDns::x_0(args);	break;
	case 1: x_QDns::x_1(args);	break;
	case 2: x_QDns::x_2(args);	break;
	case 3: x_QDns::x_3(args);	break;
	case 4: x_QDns::x_4(args);	break;
	case 5: x_QDns::x_5(args);	break;
	case 6: x_QDns::x_6(args);	break;
	case 7: x_QDns::x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: x_QDns::x_15(args);	break;
	case 16: x_QDns::x_16(args);	break;
	case 17: x_QDns::x_17(args);	break;
	case 18: x_QDns::x_18(args);	break;
	case 19: x_QDns::x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: xself->x_27(args);	break;
	case 28: xself->x_28(args);	break;
	case 29: xself->x_29(args);	break;
	case 30: xself->x_30(args);	break;
	case 31: xself->x_31(args);	break;
	case 32: xself->x_32(args);	break;
	case 33: xself->x_33(args);	break;
	case 34: xself->x_34(args);	break;
	case 35: x_QDns::x_35(args);	break;
	case 36: x_QDns::x_36(args);	break;
	case 37: x_QDns::x_37(args);	break;
	case 38: x_QDns::x_38(args);	break;
	case 39: x_QDns::x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: delete (QDns*)xself;	break;
    }
}
