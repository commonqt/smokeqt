//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qsignalslotimp.h>

class x_QConnectionListIt : public QConnectionListIt {
public:
    static void x_0(Smoke::Stack x) {
	// QConnectionListIt(const QConnectionList&)
	x_QConnectionListIt* xret = new x_QConnectionListIt(*(const QConnectionList *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QConnectionListIt(const QConnectionList& x1) : QConnectionListIt(x1) {
    }
    void x_1(Smoke::Stack x) {
	// operator=(const QConnectionListIt&)
	QConnectionListIt& xret = this->QConnectionListIt::operator=(*(const QConnectionListIt *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    ~x_QConnectionListIt() {}
};
void xcall_QConnectionListIt(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QConnectionListIt *xself = (x_QConnectionListIt*)obj;
    switch(xi) {
	case 0: x_QConnectionListIt::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: delete (QConnectionListIt*)xself;	break;
    }
}
