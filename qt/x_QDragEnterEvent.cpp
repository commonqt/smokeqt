//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qevent.h>
#include <qcstring.h>

class x_QDragEnterEvent : public QDragEnterEvent {
public:
    static void x_0(Smoke::Stack x) {
	// QDragEnterEvent(const QPoint&)
	x_QDragEnterEvent* xret = new x_QDragEnterEvent(*(const QPoint *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDragEnterEvent(const QPoint& x1) : QDragEnterEvent(x1) {
    }
    virtual QByteArray encodedData(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(2349, (void*)this, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_class;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDropEvent::encodedData(x1);
    }
    virtual const char* format(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(2347, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QDropEvent::format(x1);
    }
    virtual bool provides(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(2350, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDropEvent::provides(x1);
    }
    ~x_QDragEnterEvent() {}
};
void xcall_QDragEnterEvent(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDragEnterEvent *xself = (x_QDragEnterEvent*)obj;
    switch(xi) {
	case 0: x_QDragEnterEvent::x_0(args);	break;
	case 1: delete (QDragEnterEvent*)xself;	break;
    }
}
