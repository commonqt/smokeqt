//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qevent.h>
#include <qnamespace.h>
#include <qstring.h>

class x_QKeyEvent : public QKeyEvent {
public:
    static void x_0(Smoke::Stack x) {
	// QKeyEvent(QEvent::Type, int, int, int, const QString&, bool, ushort)
	x_QKeyEvent* xret = new x_QKeyEvent((QEvent::Type)x[1].s_enum,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,*(const QString *)x[5].s_voidp,(bool)x[6].s_bool,(ushort)x[7].s_ushort);
	x[0].s_class = (void*)xret;
    }
    x_QKeyEvent(QEvent::Type x1, int x2, int x3, int x4, const QString& x5, bool x6, ushort x7) : QKeyEvent(x1, x2, x3, x4, x5, x6, x7) {
    }
    static void x_1(Smoke::Stack x) {
	// QKeyEvent(QEvent::Type, int, int, int, const QString&, bool)
	x_QKeyEvent* xret = new x_QKeyEvent((QEvent::Type)x[1].s_enum,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,*(const QString *)x[5].s_voidp,(bool)x[6].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QKeyEvent(QEvent::Type x1, int x2, int x3, int x4, const QString& x5, bool x6) : QKeyEvent(x1, x2, x3, x4, x5, x6) {
    }
    static void x_2(Smoke::Stack x) {
	// QKeyEvent(QEvent::Type, int, int, int, const QString&)
	x_QKeyEvent* xret = new x_QKeyEvent((QEvent::Type)x[1].s_enum,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,*(const QString *)x[5].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QKeyEvent(QEvent::Type x1, int x2, int x3, int x4, const QString& x5) : QKeyEvent(x1, x2, x3, x4, x5) {
    }
    static void x_3(Smoke::Stack x) {
	// QKeyEvent(QEvent::Type, int, int, int)
	x_QKeyEvent* xret = new x_QKeyEvent((QEvent::Type)x[1].s_enum,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QKeyEvent(QEvent::Type x1, int x2, int x3, int x4) : QKeyEvent(x1, x2, x3, x4) {
    }
    void x_4(Smoke::Stack x) const {
	// key()
	int xret = this->QKeyEvent::key();
	x[0].s_int = xret;
    }
    void x_5(Smoke::Stack x) const {
	// ascii()
	int xret = this->QKeyEvent::ascii();
	x[0].s_int = xret;
    }
    void x_6(Smoke::Stack x) const {
	// state()
	Qt::ButtonState xret = this->QKeyEvent::state();
	x[0].s_enum = xret;
    }
    void x_7(Smoke::Stack x) const {
	// stateAfter()
	Qt::ButtonState xret = this->QKeyEvent::stateAfter();
	x[0].s_enum = xret;
    }
    void x_8(Smoke::Stack x) const {
	// isAccepted()
	bool xret = this->QKeyEvent::isAccepted();
	x[0].s_bool = xret;
    }
    void x_9(Smoke::Stack x) const {
	// text()
	QString xret = this->QKeyEvent::text();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_10(Smoke::Stack x) const {
	// isAutoRepeat()
	bool xret = this->QKeyEvent::isAutoRepeat();
	x[0].s_bool = xret;
    }
    void x_11(Smoke::Stack x) const {
	// count()
	int xret = this->QKeyEvent::count();
	x[0].s_int = xret;
    }
    void x_12(Smoke::Stack x) {
	// accept()
	this->QKeyEvent::accept();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) {
	// ignore()
	this->QKeyEvent::ignore();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    ~x_QKeyEvent() {}
};
void xcall_QKeyEvent(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QKeyEvent *xself = (x_QKeyEvent*)obj;
    switch(xi) {
	case 0: x_QKeyEvent::x_0(args);	break;
	case 1: x_QKeyEvent::x_1(args);	break;
	case 2: x_QKeyEvent::x_2(args);	break;
	case 3: x_QKeyEvent::x_3(args);	break;
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
	case 14: delete (QKeyEvent*)xself;	break;
    }
}
