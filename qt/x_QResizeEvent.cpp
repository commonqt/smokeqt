//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qevent.h>
#include <qsize.h>

class x_QResizeEvent : public QResizeEvent {
public:
    static void x_0(Smoke::Stack x) {
	// QResizeEvent(const QSize&, const QSize&)
	x_QResizeEvent* xret = new x_QResizeEvent(*(const QSize *)x[1].s_voidp,*(const QSize *)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QResizeEvent(const QSize& x1, const QSize& x2) : QResizeEvent(x1, x2) {
    }
    void x_1(Smoke::Stack x) const {
	// size()
	const QSize& xret = this->QResizeEvent::size();
	x[0].s_voidp = (void*)&xret;
    }
    void x_2(Smoke::Stack x) const {
	// oldSize()
	const QSize& xret = this->QResizeEvent::oldSize();
	x[0].s_voidp = (void*)&xret;
    }
    ~x_QResizeEvent() {}
};
void xcall_QResizeEvent(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QResizeEvent *xself = (x_QResizeEvent*)obj;
    switch(xi) {
	case 0: x_QResizeEvent::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: delete (QResizeEvent*)xself;	break;
    }
}
