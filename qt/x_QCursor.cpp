//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qcursor.h>
#include <qpixmap.h>
#include <qbitmap.h>

class x_QCursor : public QCursor {
public:
    static void x_0(Smoke::Stack x) {
	// QCursor()
	x_QCursor* xret = new x_QCursor();
	x[0].s_class = (void*)xret;
    }
    x_QCursor() : QCursor() {
    }
    static void x_1(Smoke::Stack x) {
	// QCursor(int)
	x_QCursor* xret = new x_QCursor((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QCursor(int x1) : QCursor(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QCursor(const QBitmap&, const QBitmap&, int, int)
	x_QCursor* xret = new x_QCursor(*(const QBitmap *)x[1].s_voidp,*(const QBitmap *)x[2].s_voidp,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QCursor(const QBitmap& x1, const QBitmap& x2, int x3, int x4) : QCursor(x1, x2, x3, x4) {
    }
    static void x_3(Smoke::Stack x) {
	// QCursor(const QBitmap&, const QBitmap&, int)
	x_QCursor* xret = new x_QCursor(*(const QBitmap *)x[1].s_voidp,*(const QBitmap *)x[2].s_voidp,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QCursor(const QBitmap& x1, const QBitmap& x2, int x3) : QCursor(x1, x2, x3) {
    }
    static void x_4(Smoke::Stack x) {
	// QCursor(const QBitmap&, const QBitmap&)
	x_QCursor* xret = new x_QCursor(*(const QBitmap *)x[1].s_voidp,*(const QBitmap *)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QCursor(const QBitmap& x1, const QBitmap& x2) : QCursor(x1, x2) {
    }
    static void x_5(Smoke::Stack x) {
	// QCursor(const QPixmap&, int, int)
	x_QCursor* xret = new x_QCursor(*(const QPixmap *)x[1].s_voidp,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QCursor(const QPixmap& x1, int x2, int x3) : QCursor(x1, x2, x3) {
    }
    static void x_6(Smoke::Stack x) {
	// QCursor(const QPixmap&, int)
	x_QCursor* xret = new x_QCursor(*(const QPixmap *)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QCursor(const QPixmap& x1, int x2) : QCursor(x1, x2) {
    }
    static void x_7(Smoke::Stack x) {
	// QCursor(const QPixmap&)
	x_QCursor* xret = new x_QCursor(*(const QPixmap *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QCursor(const QPixmap& x1) : QCursor(x1) {
    }
    static void x_8(Smoke::Stack x) {
	// QCursor(const QCursor&)
	x_QCursor* xret = new x_QCursor(*(const QCursor *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QCursor(const QCursor& x1) : QCursor(x1) {
    }
    void x_9(Smoke::Stack x) {
	// operator=(const QCursor&)
	QCursor& xret = this->QCursor::operator=(*(const QCursor *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_10(Smoke::Stack x) const {
	// shape()
	int xret = this->QCursor::shape();
	x[0].s_int = xret;
    }
    void x_11(Smoke::Stack x) {
	// setShape(int)
	this->QCursor::setShape((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_12(Smoke::Stack x) const {
	// bitmap()
	const QBitmap* xret = this->QCursor::bitmap();
	x[0].s_voidp = (void*)xret;
    }
    void x_13(Smoke::Stack x) const {
	// mask()
	const QBitmap* xret = this->QCursor::mask();
	x[0].s_voidp = (void*)xret;
    }
    void x_14(Smoke::Stack x) const {
	// hotSpot()
	QPoint xret = this->QCursor::hotSpot();
	x[0].s_class = (void*)new QPoint(xret);
    }
    static void x_15(Smoke::Stack x) {
	// pos()
	QPoint xret = QCursor::pos();
	x[0].s_class = (void*)new QPoint(xret);
    }
    static void x_16(Smoke::Stack x) {
	// setPos(int, int)
	QCursor::setPos((int)x[1].s_int,(int)x[2].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_17(Smoke::Stack x) {
	// setPos(const QPoint&)
	QCursor::setPos(*(const QPoint *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_18(Smoke::Stack x) {
	// pos()
	QPoint xret = QCursor::pos();
	x[0].s_class = (void*)new QPoint(xret);
    }
    static void x_19(Smoke::Stack x) {
	// setPos(int, int)
	QCursor::setPos((int)x[1].s_int,(int)x[2].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_20(Smoke::Stack x) {
	// setPos(const QPoint&)
	QCursor::setPos(*(const QPoint *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_21(Smoke::Stack x) {
	// initialize()
	QCursor::initialize();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_22(Smoke::Stack x) {
	// cleanup()
	QCursor::cleanup();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    ~x_QCursor() {}
};
void xcall_QCursor(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCursor *xself = (x_QCursor*)obj;
    switch(xi) {
	case 0: x_QCursor::x_0(args);	break;
	case 1: x_QCursor::x_1(args);	break;
	case 2: x_QCursor::x_2(args);	break;
	case 3: x_QCursor::x_3(args);	break;
	case 4: x_QCursor::x_4(args);	break;
	case 5: x_QCursor::x_5(args);	break;
	case 6: x_QCursor::x_6(args);	break;
	case 7: x_QCursor::x_7(args);	break;
	case 8: x_QCursor::x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: x_QCursor::x_15(args);	break;
	case 16: x_QCursor::x_16(args);	break;
	case 17: x_QCursor::x_17(args);	break;
	case 18: x_QCursor::x_18(args);	break;
	case 19: x_QCursor::x_19(args);	break;
	case 20: x_QCursor::x_20(args);	break;
	case 21: x_QCursor::x_21(args);	break;
	case 22: x_QCursor::x_22(args);	break;
	case 23: delete (QCursor*)xself;	break;
    }
}
