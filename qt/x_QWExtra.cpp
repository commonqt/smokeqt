//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qwidget.h>

class x_QWExtra : public QWExtra {
public:
    static void x_0(Smoke::Stack x) {
	// QWExtra()
	x_QWExtra* xret = new x_QWExtra();
	x[0].s_class = (void*)xret;
    }
    x_QWExtra() : QWExtra() {
    }
    static void x_1(Smoke::Stack x) {
	// QWExtra(QWExtra&)
	x_QWExtra* xret = new x_QWExtra(*(QWExtra *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QWExtra(QWExtra& x1) : QWExtra(x1) {
    }
    ~x_QWExtra() { qt_Smoke->binding->deleted(351, (void*)this); }
};
void xcall_QWExtra(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QWExtra *xself = (x_QWExtra*)obj;
    switch(xi) {
	case 0: x_QWExtra::x_0(args);	break;
	case 1: x_QWExtra::x_1(args);	break;
	case 2: delete (QWExtra*)xself;	break;
    }
}
