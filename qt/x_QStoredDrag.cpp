//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qvariant.h>
#include <qstring.h>
#include <qcstring.h>
#include <qdragobject.h>
#include <qpixmap.h>

class x_QStoredDrag : public QStoredDrag {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QStoredDrag::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QStoredDrag::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QStoredDrag::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QStoredDrag::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QStoredDrag::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QStoredDrag::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QStoredDrag::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QStoredDrag(const char*, QWidget*, const char*)
	x_QStoredDrag* xret = new x_QStoredDrag((const char*)x[1].s_voidp,(QWidget*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QStoredDrag(const char* x1, QWidget* x2, const char* x3) : QStoredDrag(x1, x2, x3) {
    }
    static void x_8(Smoke::Stack x) {
	// QStoredDrag(const char*, QWidget*)
	x_QStoredDrag* xret = new x_QStoredDrag((const char*)x[1].s_voidp,(QWidget*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStoredDrag(const char* x1, QWidget* x2) : QStoredDrag(x1, x2) {
    }
    static void x_9(Smoke::Stack x) {
	// QStoredDrag(const char*)
	x_QStoredDrag* xret = new x_QStoredDrag((const char*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QStoredDrag(const char* x1) : QStoredDrag(x1) {
    }
    void x_10(Smoke::Stack x) {
	// setEncodedData(const QByteArray&)
	this->QStoredDrag::setEncodedData(*(const QByteArray *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_11(Smoke::Stack x) const {
	// format(int)
	const char* xret = this->QStoredDrag::format((int)x[1].s_int);
	x[0].s_voidp = (void*)xret;
    }
    void x_12(Smoke::Stack x) const {
	// encodedData(const char*)
	QByteArray xret = this->QStoredDrag::encodedData((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QByteArray(xret);
    }
    static void x_13(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QStoredDrag::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_14(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QStoredDrag::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_15(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QStoredDrag::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_16(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QStoredDrag::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_17(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QStoredDrag::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
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
	if(qt_Smoke->binding->callMethod(9121, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QStoredDrag::className();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6494, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
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
    virtual bool drag(QDragObject::DragMode x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(2803, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDragObject::drag(x1);
    }
    virtual QByteArray encodedData(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(9133, (void*)this, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_class;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QStoredDrag::encodedData(x1);
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
    virtual const char* format(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(9132, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QStoredDrag::format(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6449, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(9120, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QStoredDrag::metaObject();
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
    virtual bool provides(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6059, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QMimeSource::provides(x1);
    }
    virtual void* qt_cast(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(9122, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QStoredDrag::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(9124, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QStoredDrag::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(9123, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QStoredDrag::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(9125, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QStoredDrag::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6450, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setEncodedData(const QByteArray& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(9131, (void*)this, x)) return;
	this->QStoredDrag::setEncodedData(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6432, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual void setPixmap(QPixmap x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2791, (void*)this, x)) return;
	this->QDragObject::setPixmap(x1);
    }
    virtual void setPixmap(QPixmap x1, const QPoint& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2792, (void*)this, x)) return;
	this->QDragObject::setPixmap(x1, x2);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6462, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6491, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QStoredDrag() { qt_Smoke->binding->deleted(293, (void*)this); }
};
void xcall_QStoredDrag(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QStoredDrag *xself = (x_QStoredDrag*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QStoredDrag::x_7(args);	break;
	case 8: x_QStoredDrag::x_8(args);	break;
	case 9: x_QStoredDrag::x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: x_QStoredDrag::x_13(args);	break;
	case 14: x_QStoredDrag::x_14(args);	break;
	case 15: x_QStoredDrag::x_15(args);	break;
	case 16: x_QStoredDrag::x_16(args);	break;
	case 17: x_QStoredDrag::x_17(args);	break;
	case 18: delete (QStoredDrag*)xself;	break;
    }
}
