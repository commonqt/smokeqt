//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qwmatrix.h>
#include <qpointarray.h>
#include <qrect.h>

class x_QPointArray : public QPointArray {
public:
    static void x_0(Smoke::Stack x) {
	// QPointArray()
	x_QPointArray* xret = new x_QPointArray();
	x[0].s_class = (void*)xret;
    }
    x_QPointArray() : QPointArray() {
    }
    static void x_1(Smoke::Stack x) {
	// QPointArray(int)
	x_QPointArray* xret = new x_QPointArray((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QPointArray(int x1) : QPointArray(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QPointArray(const QPointArray&)
	x_QPointArray* xret = new x_QPointArray(*(const QPointArray *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QPointArray(const QPointArray& x1) : QPointArray(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QPointArray(const QRect&, bool)
	x_QPointArray* xret = new x_QPointArray(*(const QRect *)x[1].s_voidp,(bool)x[2].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QPointArray(const QRect& x1, bool x2) : QPointArray(x1, x2) {
    }
    static void x_4(Smoke::Stack x) {
	// QPointArray(const QRect&)
	x_QPointArray* xret = new x_QPointArray(*(const QRect *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QPointArray(const QRect& x1) : QPointArray(x1) {
    }
    static void x_5(Smoke::Stack x) {
	// QPointArray(int, const QCOORD*)
	x_QPointArray* xret = new x_QPointArray((int)x[1].s_int,(const QCOORD*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QPointArray(int x1, const QCOORD* x2) : QPointArray(x1, x2) {
    }
    void x_6(Smoke::Stack x) {
	// operator=(const QPointArray&)
	QPointArray& xret = this->QPointArray::operator=(*(const QPointArray *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_7(Smoke::Stack x) const {
	// copy()
	QPointArray xret = this->QPointArray::copy();
	x[0].s_class = (void*)new QPointArray(xret);
    }
    void x_8(Smoke::Stack x) {
	// translate(int, int)
	this->QPointArray::translate((int)x[1].s_int,(int)x[2].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_9(Smoke::Stack x) const {
	// boundingRect()
	QRect xret = this->QPointArray::boundingRect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_10(Smoke::Stack x) const {
	// point(uint, int*, int*)
	this->QPointArray::point((uint)x[1].s_uint,(int*)x[2].s_voidp,(int*)x[3].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_11(Smoke::Stack x) const {
	// point(uint)
	QPoint xret = this->QPointArray::point((uint)x[1].s_uint);
	x[0].s_class = (void*)new QPoint(xret);
    }
    void x_12(Smoke::Stack x) {
	// setPoint(uint, int, int)
	this->QPointArray::setPoint((uint)x[1].s_uint,(int)x[2].s_int,(int)x[3].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) {
	// setPoint(uint, const QPoint&)
	this->QPointArray::setPoint((uint)x[1].s_uint,*(const QPoint *)x[2].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_14(Smoke::Stack x) {
	// setPoints(int, const QCOORD*)
	bool xret = this->QPointArray::setPoints((int)x[1].s_int,(const QCOORD*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_15(Smoke::Stack x) {
	// putPoints(int, int, const QCOORD*)
	bool xret = this->QPointArray::putPoints((int)x[1].s_int,(int)x[2].s_int,(const QCOORD*)x[3].s_voidp);
	x[0].s_bool = xret;
    }
    void x_16(Smoke::Stack x) {
	// putPoints(int, int, const QPointArray&, int)
	bool xret = this->QPointArray::putPoints((int)x[1].s_int,(int)x[2].s_int,*(const QPointArray *)x[3].s_voidp,(int)x[4].s_int);
	x[0].s_bool = xret;
    }
    void x_17(Smoke::Stack x) {
	// putPoints(int, int, const QPointArray&)
	bool xret = this->QPointArray::putPoints((int)x[1].s_int,(int)x[2].s_int,*(const QPointArray *)x[3].s_voidp);
	x[0].s_bool = xret;
    }
    void x_18(Smoke::Stack x) {
	// makeArc(int, int, int, int, int, int)
	this->QPointArray::makeArc((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int,(int)x[6].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_19(Smoke::Stack x) {
	// makeEllipse(int, int, int, int)
	this->QPointArray::makeEllipse((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_20(Smoke::Stack x) {
	// makeArc(int, int, int, int, int, int, const QWMatrix&)
	this->QPointArray::makeArc((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int,(int)x[6].s_int,*(const QWMatrix *)x[7].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_21(Smoke::Stack x) const {
	// cubicBezier()
	QPointArray xret = this->QPointArray::cubicBezier();
	x[0].s_class = (void*)new QPointArray(xret);
    }
    void x_22(Smoke::Stack x) const {
	// shortPoints(int, int)
	void* xret = this->QPointArray::shortPoints((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_voidp = (void*)xret;
    }
    void x_23(Smoke::Stack x) const {
	// shortPoints(int)
	void* xret = this->QPointArray::shortPoints((int)x[1].s_int);
	x[0].s_voidp = (void*)xret;
    }
    void x_24(Smoke::Stack x) const {
	// shortPoints()
	void* xret = this->QPointArray::shortPoints();
	x[0].s_voidp = (void*)xret;
    }
    static void x_25(Smoke::Stack x) {
	// cleanBuffers()
	QPointArray::cleanBuffers();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    ~x_QPointArray() {}
};
void xcall_QPointArray(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QPointArray *xself = (x_QPointArray*)obj;
    switch(xi) {
	case 0: x_QPointArray::x_0(args);	break;
	case 1: x_QPointArray::x_1(args);	break;
	case 2: x_QPointArray::x_2(args);	break;
	case 3: x_QPointArray::x_3(args);	break;
	case 4: x_QPointArray::x_4(args);	break;
	case 5: x_QPointArray::x_5(args);	break;
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
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
	case 25: x_QPointArray::x_25(args);	break;
	case 26: delete (QPointArray*)xself;	break;
    }
}
