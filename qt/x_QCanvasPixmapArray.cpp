//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qpointarray.h>
#include <qcanvas.h>

class x_QCanvasPixmapArray : public QCanvasPixmapArray {
public:
    static void x_0(Smoke::Stack x) {
	// QCanvasPixmapArray()
	x_QCanvasPixmapArray* xret = new x_QCanvasPixmapArray();
	x[0].s_class = (void*)xret;
    }
    x_QCanvasPixmapArray() : QCanvasPixmapArray() {
    }
    static void x_1(Smoke::Stack x) {
	// QCanvasPixmapArray(const QString&, int)
	x_QCanvasPixmapArray* xret = new x_QCanvasPixmapArray(*(const QString *)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasPixmapArray(const QString& x1, int x2) : QCanvasPixmapArray(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QCanvasPixmapArray(const QString&)
	x_QCanvasPixmapArray* xret = new x_QCanvasPixmapArray(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasPixmapArray(const QString& x1) : QCanvasPixmapArray(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QCanvasPixmapArray(QPtrList<QPixmap>, QPtrList<QPoint>)
	x_QCanvasPixmapArray* xret = new x_QCanvasPixmapArray(*(QPtrList<QPixmap> *)x[1].s_voidp,*(QPtrList<QPoint> *)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasPixmapArray(QPtrList<QPixmap> x1, QPtrList<QPoint> x2) : QCanvasPixmapArray(x1, x2) {
    }
    static void x_4(Smoke::Stack x) {
	// QCanvasPixmapArray(QValueList<QPixmap>, QPointArray)
	x_QCanvasPixmapArray* xret = new x_QCanvasPixmapArray(*(QValueList<QPixmap> *)x[1].s_voidp,*(QPointArray *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasPixmapArray(QValueList<QPixmap> x1, QPointArray x2) : QCanvasPixmapArray(x1, x2) {
    }
    static void x_5(Smoke::Stack x) {
	// QCanvasPixmapArray(QValueList<QPixmap>)
	x_QCanvasPixmapArray* xret = new x_QCanvasPixmapArray(*(QValueList<QPixmap> *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasPixmapArray(QValueList<QPixmap> x1) : QCanvasPixmapArray(x1) {
    }
    void x_6(Smoke::Stack x) {
	// readPixmaps(const QString&, int)
	bool xret = this->QCanvasPixmapArray::readPixmaps(*(const QString *)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_bool = xret;
    }
    void x_7(Smoke::Stack x) {
	// readPixmaps(const QString&)
	bool xret = this->QCanvasPixmapArray::readPixmaps(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_8(Smoke::Stack x) {
	// readCollisionMasks(const QString&)
	bool xret = this->QCanvasPixmapArray::readCollisionMasks(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_9(Smoke::Stack x) {
	// operator!()
	bool xret = this->QCanvasPixmapArray::operator!();
	x[0].s_bool = xret;
    }
    void x_10(Smoke::Stack x) const {
	// isValid()
	bool xret = this->QCanvasPixmapArray::isValid();
	x[0].s_bool = xret;
    }
    void x_11(Smoke::Stack x) const {
	// image(int)
	QCanvasPixmap* xret = this->QCanvasPixmapArray::image((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    void x_12(Smoke::Stack x) {
	// setImage(int, QCanvasPixmap*)
	this->QCanvasPixmapArray::setImage((int)x[1].s_int,(QCanvasPixmap*)x[2].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) const {
	// count()
	uint xret = this->QCanvasPixmapArray::count();
	x[0].s_uint = xret;
    }
    static void x_14(Smoke::Stack x) {
	// QCanvasPixmapArray(QCanvasPixmapArray&)
	x_QCanvasPixmapArray* xret = new x_QCanvasPixmapArray(*(QCanvasPixmapArray *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasPixmapArray(QCanvasPixmapArray& x1) : QCanvasPixmapArray(x1) {
    }
    ~x_QCanvasPixmapArray() { qt_Smoke->binding->deleted(25, (void*)this); }
};
void xcall_QCanvasPixmapArray(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCanvasPixmapArray *xself = (x_QCanvasPixmapArray*)obj;
    switch(xi) {
	case 0: x_QCanvasPixmapArray::x_0(args);	break;
	case 1: x_QCanvasPixmapArray::x_1(args);	break;
	case 2: x_QCanvasPixmapArray::x_2(args);	break;
	case 3: x_QCanvasPixmapArray::x_3(args);	break;
	case 4: x_QCanvasPixmapArray::x_4(args);	break;
	case 5: x_QCanvasPixmapArray::x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: x_QCanvasPixmapArray::x_14(args);	break;
	case 15: delete (QCanvasPixmapArray*)xself;	break;
    }
}
