//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qevent.h>

class x_QTimerEvent : public QTimerEvent {
public:
    static void x_0(Smoke::Stack x) {
	// QTimerEvent(int)
	x_QTimerEvent* xret = new x_QTimerEvent((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QTimerEvent(int x1) : QTimerEvent(x1) {
    }
    void x_1(Smoke::Stack x) const {
	// timerId()
	int xret = this->QTimerEvent::timerId();
	x[0].s_int = xret;
    }
    ~x_QTimerEvent() {}
};
void xcall_QTimerEvent(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTimerEvent *xself = (x_QTimerEvent*)obj;
    switch(xi) {
	case 0: x_QTimerEvent::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: delete (QTimerEvent*)xself;	break;
    }
}
