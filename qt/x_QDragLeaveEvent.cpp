//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qevent.h>

class x_QDragLeaveEvent : public QDragLeaveEvent {
public:
    static void x_0(Smoke::Stack x) {
	// QDragLeaveEvent()
	x_QDragLeaveEvent* xret = new x_QDragLeaveEvent();
	x[0].s_class = (void*)xret;
    }
    x_QDragLeaveEvent() : QDragLeaveEvent() {
    }
    ~x_QDragLeaveEvent() {}
};
void xcall_QDragLeaveEvent(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDragLeaveEvent *xself = (x_QDragLeaveEvent*)obj;
    switch(xi) {
	case 0: x_QDragLeaveEvent::x_0(args);	break;
	case 1: delete (QDragLeaveEvent*)xself;	break;
    }
}
