//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpointarray.h>
#include <qpolygonscanner.h>

class x_QPolygonScanner : public QPolygonScanner {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QPolygonScanner::Left;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QPolygonScanner::Right;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QPolygonScanner::Top;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QPolygonScanner::Bottom;
    }
    void x_4(Smoke::Stack x) {
	// scan(const QPointArray&, bool, int, int)
	this->QPolygonScanner::scan(*(const QPointArray *)x[1].s_class,(bool)x[2].s_bool,(int)x[3].s_int,(int)x[4].s_int);
    }
    void x_5(Smoke::Stack x) {
	// scan(const QPointArray&, bool, int)
	this->QPolygonScanner::scan(*(const QPointArray *)x[1].s_class,(bool)x[2].s_bool,(int)x[3].s_int);
    }
    void x_6(Smoke::Stack x) {
	// scan(const QPointArray&, bool)
	this->QPolygonScanner::scan(*(const QPointArray *)x[1].s_class,(bool)x[2].s_bool);
    }
    void x_7(Smoke::Stack x) {
	// scan(const QPointArray&, bool, int, int, bool)
	this->QPolygonScanner::scan(*(const QPointArray *)x[1].s_class,(bool)x[2].s_bool,(int)x[3].s_int,(int)x[4].s_int,(bool)x[5].s_bool);
    }
    void x_8(Smoke::Stack x) {
	// scan(const QPointArray&, bool, int, int, QPolygonScanner::Edge)
	this->QPolygonScanner::scan(*(const QPointArray *)x[1].s_class,(bool)x[2].s_bool,(int)x[3].s_int,(int)x[4].s_int,*(QPolygonScanner::Edge *)x[5].s_class);
    }
    static void x_9(Smoke::Stack x) {
	// QPolygonScanner()
	x_QPolygonScanner* xret = new x_QPolygonScanner();
	x[0].s_class = (void*)xret;
    }
    x_QPolygonScanner() : QPolygonScanner() {
    }
    virtual void processSpans(int x1, QPoint* x2, int* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = (int)x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	qt_Smoke->callMethod(6033, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    ~x_QPolygonScanner() {}
};
void xcall_QPolygonScanner(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QPolygonScanner *xself = (x_QPolygonScanner*)obj;
    switch(xi) {
	case 0: x_QPolygonScanner::x_0(args);	break;
	case 1: x_QPolygonScanner::x_1(args);	break;
	case 2: x_QPolygonScanner::x_2(args);	break;
	case 3: x_QPolygonScanner::x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: x_QPolygonScanner::x_9(args);	break;
	case 10: delete (QPolygonScanner*)xself;	break;
    }
}
