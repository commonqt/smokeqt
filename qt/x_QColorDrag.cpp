//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qvariant.h>
#include <qcolor.h>
#include <qcstring.h>
#include <qdragobject.h>
#include <qpixmap.h>

class x_QColorDrag : public QColorDrag {
public:
    static void x_0(Smoke::Stack x) {
	// QColorDrag(const QColor&, QWidget*, const char*)
	x_QColorDrag* xret = new x_QColorDrag(*(const QColor *)x[1].s_voidp,(QWidget*)x[2].s_voidp,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QColorDrag(const QColor& x1, QWidget* x2, const char* x3) : QColorDrag(x1, x2, x3) {
    }
    static void x_1(Smoke::Stack x) {
	// QColorDrag(const QColor&, QWidget*)
	x_QColorDrag* xret = new x_QColorDrag(*(const QColor *)x[1].s_voidp,(QWidget*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QColorDrag(const QColor& x1, QWidget* x2) : QColorDrag(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QColorDrag(const QColor&)
	x_QColorDrag* xret = new x_QColorDrag(*(const QColor *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QColorDrag(const QColor& x1) : QColorDrag(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QColorDrag(QWidget*, const char*)
	x_QColorDrag* xret = new x_QColorDrag((QWidget*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QColorDrag(QWidget* x1, const char* x2) : QColorDrag(x1, x2) {
    }
    static void x_4(Smoke::Stack x) {
	// QColorDrag(QWidget*)
	x_QColorDrag* xret = new x_QColorDrag((QWidget*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QColorDrag(QWidget* x1) : QColorDrag(x1) {
    }
    static void x_5(Smoke::Stack x) {
	// QColorDrag()
	x_QColorDrag* xret = new x_QColorDrag();
	x[0].s_class = (void*)xret;
    }
    x_QColorDrag() : QColorDrag() {
    }
    void x_6(Smoke::Stack x) {
	// setColor(const QColor&)
	this->QColorDrag::setColor(*(const QColor *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_7(Smoke::Stack x) {
	// canDecode(QMimeSource*)
	bool xret = QColorDrag::canDecode((QMimeSource*)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    static void x_8(Smoke::Stack x) {
	// decode(QMimeSource*, QColor&)
	bool xret = QColorDrag::decode((QMimeSource*)x[1].s_voidp,*(QColor *)x[2].s_voidp);
	x[0].s_bool = xret;
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
    virtual bool drag(QDragObject::DragMode x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->callMethod(2326, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDragObject::drag(x1);
    }
    virtual QByteArray encodedData(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(7674, (void*)this, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_class;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QStoredDrag::encodedData(x1);
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
    virtual const char* format(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(7673, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QStoredDrag::format(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5428, (void*)this, x)) return;
	this->QObject::insertChild(x1);
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
    virtual bool provides(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5113, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QMimeSource::provides(x1);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5429, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setEncodedData(const QByteArray& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(7672, (void*)this, x)) return;
	this->QStoredDrag::setEncodedData(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5411, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual void setPixmap(QPixmap x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(2319, (void*)this, x)) return;
	this->QDragObject::setPixmap(x1);
    }
    virtual void setPixmap(QPixmap x1, const QPoint& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->callMethod(2320, (void*)this, x)) return;
	this->QDragObject::setPixmap(x1, x2);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->callMethod(5441, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5465, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QColorDrag() {}
};
void xcall_QColorDrag(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QColorDrag *xself = (x_QColorDrag*)obj;
    switch(xi) {
	case 0: x_QColorDrag::x_0(args);	break;
	case 1: x_QColorDrag::x_1(args);	break;
	case 2: x_QColorDrag::x_2(args);	break;
	case 3: x_QColorDrag::x_3(args);	break;
	case 4: x_QColorDrag::x_4(args);	break;
	case 5: x_QColorDrag::x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QColorDrag::x_7(args);	break;
	case 8: x_QColorDrag::x_8(args);	break;
	case 9: delete (QColorDrag*)xself;	break;
    }
}
