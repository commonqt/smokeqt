//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qkeysequence.h>
#include <qstring.h>

class x_QKeySequence : public QKeySequence {
public:
    static void x_0(Smoke::Stack x) {
	// QKeySequence()
	x_QKeySequence* xret = new x_QKeySequence();
	x[0].s_class = (void*)xret;
    }
    x_QKeySequence() : QKeySequence() {
    }
    static void x_1(Smoke::Stack x) {
	// QKeySequence(const QString&)
	x_QKeySequence* xret = new x_QKeySequence(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QKeySequence(const QString& x1) : QKeySequence(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QKeySequence(int)
	x_QKeySequence* xret = new x_QKeySequence((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QKeySequence(int x1) : QKeySequence(x1) {
    }
    void x_3(Smoke::Stack x) const {
	// operator QString()
	this->QKeySequence::operator QString();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_4(Smoke::Stack x) const {
	// operator int()
	this->QKeySequence::operator int();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_5(Smoke::Stack x) {
	// QKeySequence(const QKeySequence&)
	x_QKeySequence* xret = new x_QKeySequence(*(const QKeySequence *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QKeySequence(const QKeySequence& x1) : QKeySequence(x1) {
    }
    void x_6(Smoke::Stack x) {
	// operator=(const QKeySequence&)
	QKeySequence& xret = this->QKeySequence::operator=(*(const QKeySequence *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_7(Smoke::Stack x) const {
	// operator==(const QKeySequence&)
	bool xret = this->QKeySequence::operator==(*(const QKeySequence *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_8(Smoke::Stack x) const {
	// operator!=(const QKeySequence&)
	bool xret = this->QKeySequence::operator!=(*(const QKeySequence *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    ~x_QKeySequence() {}
};
void xcall_QKeySequence(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QKeySequence *xself = (x_QKeySequence*)obj;
    switch(xi) {
	case 0: x_QKeySequence::x_0(args);	break;
	case 1: x_QKeySequence::x_1(args);	break;
	case 2: x_QKeySequence::x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: x_QKeySequence::x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: delete (QKeySequence*)xself;	break;
    }
}
