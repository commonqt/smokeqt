//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qsound.h>
#include <qstring.h>

class x_QAuServer : public QAuServer {
public:
    static void x_0(Smoke::Stack x) {
	// QAuServer(QObject*, const char*)
	x_QAuServer* xret = new x_QAuServer((QObject*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QAuServer(QObject* x1, const char* x2) : QAuServer(x1, x2) {
    }
    void x_1(Smoke::Stack x) {
	// init(QSound*)
	this->QAuServer::init((QSound*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_2(Smoke::Stack x) {
	// play(const QString&)
	this->QAuServer::play(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_3(Smoke::Stack x) {
	// setBucket(QSound*, QAuBucket*)
	this->QAuServer::setBucket((QSound*)x[1].s_voidp,(QAuBucket*)x[2].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_4(Smoke::Stack x) {
	// bucket(QSound*)
	QAuBucket* xret = this->QAuServer::bucket((QSound*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_5(Smoke::Stack x) {
	// decLoop(QSound*)
	int xret = this->QAuServer::decLoop((QSound*)x[1].s_voidp);
	x[0].s_int = xret;
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->callMethod(5470, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5466, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5468, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5467, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5469, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5405, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->callMethod(5406, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void init(QSound* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(221, (void*)this, x)) return;
	this->QAuServer::init(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5428, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual bool okay() {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(225, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual void play(QSound* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	qt_Smoke->callMethod(223, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual void play(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(222, (void*)this, x)) return;
	this->QAuServer::play(x1);
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
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
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5429, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5411, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->callMethod(5441, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void stop(QSound* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	qt_Smoke->callMethod(224, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5465, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QAuServer() {}
};
void xcall_QAuServer(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QAuServer *xself = (x_QAuServer*)obj;
    switch(xi) {
	case 0: x_QAuServer::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: delete (QAuServer*)xself;	break;
    }
}
