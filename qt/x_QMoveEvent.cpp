//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qevent.h>

class x_QMoveEvent : public QMoveEvent {
public:
    static void x_0(Smoke::Stack x) {
	// QMoveEvent(const QPoint&, const QPoint&)
	x_QMoveEvent* xret = new x_QMoveEvent(*(const QPoint *)x[1].s_class,*(const QPoint *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QMoveEvent(const QPoint& x1, const QPoint& x2) : QMoveEvent(x1, x2) {
    }
    void x_1(Smoke::Stack x) const {
	// pos()
	const QPoint& xret = this->QMoveEvent::pos();
	x[0].s_class = (void*)&xret;
    }
    void x_2(Smoke::Stack x) const {
	// oldPos()
	const QPoint& xret = this->QMoveEvent::oldPos();
	x[0].s_class = (void*)&xret;
    }
    ~x_QMoveEvent() {}
};
void xcall_QMoveEvent(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QMoveEvent *xself = (x_QMoveEvent*)obj;
    switch(xi) {
	case 0: x_QMoveEvent::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: delete (QMoveEvent*)xself;	break;
    }
}
