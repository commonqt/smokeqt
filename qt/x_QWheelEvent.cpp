//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qevent.h>
#include <qnamespace.h>

class x_QWheelEvent : public QWheelEvent {
public:
    static void x_0(Smoke::Stack x) {
	// QWheelEvent(const QPoint&, int, int, Qt::Orientation)
	x_QWheelEvent* xret = new x_QWheelEvent(*(const QPoint *)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int,*(Qt::Orientation *)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QWheelEvent(const QPoint& x1, int x2, int x3, Qt::Orientation x4) : QWheelEvent(x1, x2, x3, x4) {
    }
    static void x_1(Smoke::Stack x) {
	// QWheelEvent(const QPoint&, int, int)
	x_QWheelEvent* xret = new x_QWheelEvent(*(const QPoint *)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QWheelEvent(const QPoint& x1, int x2, int x3) : QWheelEvent(x1, x2, x3) {
    }
    static void x_2(Smoke::Stack x) {
	// QWheelEvent(const QPoint&, const QPoint&, int, int, Qt::Orientation)
	x_QWheelEvent* xret = new x_QWheelEvent(*(const QPoint *)x[1].s_class,*(const QPoint *)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int,*(Qt::Orientation *)x[5].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QWheelEvent(const QPoint& x1, const QPoint& x2, int x3, int x4, Qt::Orientation x5) : QWheelEvent(x1, x2, x3, x4, x5) {
    }
    static void x_3(Smoke::Stack x) {
	// QWheelEvent(const QPoint&, const QPoint&, int, int)
	x_QWheelEvent* xret = new x_QWheelEvent(*(const QPoint *)x[1].s_class,*(const QPoint *)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QWheelEvent(const QPoint& x1, const QPoint& x2, int x3, int x4) : QWheelEvent(x1, x2, x3, x4) {
    }
    void x_4(Smoke::Stack x) const {
	// delta()
	int xret = this->QWheelEvent::delta();
	x[0].s_int = (int)xret;
    }
    void x_5(Smoke::Stack x) const {
	// pos()
	const QPoint& xret = this->QWheelEvent::pos();
	x[0].s_class = (void*)&xret;
    }
    void x_6(Smoke::Stack x) const {
	// globalPos()
	const QPoint& xret = this->QWheelEvent::globalPos();
	x[0].s_class = (void*)&xret;
    }
    void x_7(Smoke::Stack x) const {
	// x()
	int xret = this->QWheelEvent::x();
	x[0].s_int = (int)xret;
    }
    void x_8(Smoke::Stack x) const {
	// y()
	int xret = this->QWheelEvent::y();
	x[0].s_int = (int)xret;
    }
    void x_9(Smoke::Stack x) const {
	// globalX()
	int xret = this->QWheelEvent::globalX();
	x[0].s_int = (int)xret;
    }
    void x_10(Smoke::Stack x) const {
	// globalY()
	int xret = this->QWheelEvent::globalY();
	x[0].s_int = (int)xret;
    }
    void x_11(Smoke::Stack x) const {
	// state()
	Qt::ButtonState xret = this->QWheelEvent::state();
	x[0].s_class = (void*)new Qt::ButtonState(xret);
    }
    void x_12(Smoke::Stack x) const {
	// orientation()
	Qt::Orientation xret = this->QWheelEvent::orientation();
	x[0].s_class = (void*)new Qt::Orientation(xret);
    }
    void x_13(Smoke::Stack x) const {
	// isAccepted()
	bool xret = this->QWheelEvent::isAccepted();
	x[0].s_bool = (bool)xret;
    }
    void x_14(Smoke::Stack x) {
	// accept()
	this->QWheelEvent::accept();
    }
    void x_15(Smoke::Stack x) {
	// ignore()
	this->QWheelEvent::ignore();
    }
    ~x_QWheelEvent() {}
};
void xcall_QWheelEvent(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QWheelEvent *xself = (x_QWheelEvent*)obj;
    switch(xi) {
	case 0: x_QWheelEvent::x_0(args);	break;
	case 1: x_QWheelEvent::x_1(args);	break;
	case 2: x_QWheelEvent::x_2(args);	break;
	case 3: x_QWheelEvent::x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: delete (QWheelEvent*)xself;	break;
    }
}
