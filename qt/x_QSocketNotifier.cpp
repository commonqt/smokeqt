//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qsocketnotifier.h>

class x_QSocketNotifier : public QSocketNotifier {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QSocketNotifier::Read;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QSocketNotifier::Write;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QSocketNotifier::Exception;
    }
    static void x_3(Smoke::Stack x) {
	// QSocketNotifier(int, QSocketNotifier::Type, QObject*, const char*)
	x_QSocketNotifier* xret = new x_QSocketNotifier((int)x[1].s_int,*(QSocketNotifier::Type *)x[2].s_class,(QObject*)x[3].s_class,(const char*)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSocketNotifier(int x1, QSocketNotifier::Type x2, QObject* x3, const char* x4) : QSocketNotifier(x1, x2, x3, x4) {
    }
    static void x_4(Smoke::Stack x) {
	// QSocketNotifier(int, QSocketNotifier::Type, QObject*)
	x_QSocketNotifier* xret = new x_QSocketNotifier((int)x[1].s_int,*(QSocketNotifier::Type *)x[2].s_class,(QObject*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSocketNotifier(int x1, QSocketNotifier::Type x2, QObject* x3) : QSocketNotifier(x1, x2, x3) {
    }
    static void x_5(Smoke::Stack x) {
	// QSocketNotifier(int, QSocketNotifier::Type)
	x_QSocketNotifier* xret = new x_QSocketNotifier((int)x[1].s_int,*(QSocketNotifier::Type *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSocketNotifier(int x1, QSocketNotifier::Type x2) : QSocketNotifier(x1, x2) {
    }
    void x_6(Smoke::Stack x) const {
	// socket()
	int xret = this->QSocketNotifier::socket();
	x[0].s_int = (int)xret;
    }
    void x_7(Smoke::Stack x) const {
	// type()
	QSocketNotifier::Type xret = this->QSocketNotifier::type();
	x[0].s_class = (void*)new QSocketNotifier::Type(xret);
    }
    void x_8(Smoke::Stack x) const {
	// isEnabled()
	bool xret = this->QSocketNotifier::isEnabled();
	x[0].s_bool = (bool)xret;
    }
    void x_9(Smoke::Stack x) {
	// setEnabled(bool)
	this->QSocketNotifier::setEnabled((bool)x[1].s_bool);
    }
    void x_10(Smoke::Stack x) {
	// activated(int)
	this->QSocketNotifier::activated((int)x[1].s_int);
    }
    void x_11(Smoke::Stack x) {
	// event(QEvent*)
	bool xret = this->QSocketNotifier::event((QEvent*)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->callMethod(5470, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5466, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5468, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5467, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5469, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(7108, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QSocketNotifier::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->callMethod(5406, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5428, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5442, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5429, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(7106, (void*)this, x)) return;
	this->QSocketNotifier::setEnabled(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5411, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(5441, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5465, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QSocketNotifier() {}
};
void xcall_QSocketNotifier(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSocketNotifier *xself = (x_QSocketNotifier*)obj;
    switch(xi) {
	case 0: x_QSocketNotifier::x_0(args);	break;
	case 1: x_QSocketNotifier::x_1(args);	break;
	case 2: x_QSocketNotifier::x_2(args);	break;
	case 3: x_QSocketNotifier::x_3(args);	break;
	case 4: x_QSocketNotifier::x_4(args);	break;
	case 5: x_QSocketNotifier::x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: delete (QSocketNotifier*)xself;	break;
    }
}
