//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpen.h>
#include <qpointarray.h>
#include <qbrush.h>
#include <qrect.h>
#include <qpainter.h>
#include <qcanvas.h>

class x_QCanvasPolygonalItem : public QCanvasPolygonalItem {
public:
    static void x_0(Smoke::Stack x) {
	// QCanvasPolygonalItem(QCanvas*)
	x_QCanvasPolygonalItem* xret = new x_QCanvasPolygonalItem((QCanvas*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasPolygonalItem(QCanvas* x1) : QCanvasPolygonalItem(x1) {
    }
    void x_1(Smoke::Stack x) const {
	// collidesWith(const QCanvasItem*)
	bool xret = this->QCanvasPolygonalItem::collidesWith((const QCanvasItem*)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_2(Smoke::Stack x) {
	// setPen(QPen)
	this->QCanvasPolygonalItem::setPen(*(QPen *)x[1].s_class);
    }
    void x_3(Smoke::Stack x) {
	// setBrush(QBrush)
	this->QCanvasPolygonalItem::setBrush(*(QBrush *)x[1].s_class);
    }
    void x_4(Smoke::Stack x) const {
	// pen()
	QPen xret = this->QCanvasPolygonalItem::pen();
	x[0].s_class = (void*)new QPen(xret);
    }
    void x_5(Smoke::Stack x) const {
	// brush()
	QBrush xret = this->QCanvasPolygonalItem::brush();
	x[0].s_class = (void*)new QBrush(xret);
    }
    void x_6(Smoke::Stack x) const {
	// areaPointsAdvanced()
	QPointArray xret = this->QCanvasPolygonalItem::areaPointsAdvanced();
	x[0].s_class = (void*)new QPointArray(xret);
    }
    void x_7(Smoke::Stack x) const {
	// boundingRect()
	QRect xret = this->QCanvasPolygonalItem::boundingRect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_8(Smoke::Stack x) const {
	// rtti()
	int xret = this->QCanvasPolygonalItem::rtti();
	x[0].s_int = (int)xret;
    }
    void x_9(Smoke::Stack x) {
	// draw(QPainter&)
	this->QCanvasPolygonalItem::draw(*(QPainter *)x[1].s_class);
    }
    void x_10(Smoke::Stack x) const {
	// winding()
	bool xret = this->QCanvasPolygonalItem::winding();
	x[0].s_bool = (bool)xret;
    }
    void x_11(Smoke::Stack x) {
	// setWinding(bool)
	this->QCanvasPolygonalItem::setWinding((bool)x[1].s_bool);
    }
    virtual void advance(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(546, (void*)this, x)) return;
	this->QCanvasItem::advance(x1);
    }
    virtual QPointArray areaPoints() const {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(619, (void*)this, x, true /*pure virtual*/);
	QPointArray *xptr = (QPointArray *)x[0].s_class;
	QPointArray xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual QPointArray areaPointsAdvanced() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(620, (void*)this, x)) {
	    QPointArray *xptr = (QPointArray *)x[0].s_class;
	    QPointArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasPolygonalItem::areaPointsAdvanced();
    }
    virtual QRect boundingRect() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(621, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasPolygonalItem::boundingRect();
    }
    virtual QRect boundingRectAdvanced() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(567, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasItem::boundingRectAdvanced();
    }
    virtual bool collidesWith(const QCanvasItem* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(614, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QCanvasPolygonalItem::collidesWith(x1);
    }
    virtual void draw(QPainter& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(623, (void*)this, x)) return;
	this->QCanvasPolygonalItem::draw(x1);
    }
    virtual void drawShape(QPainter& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	qt_Smoke->callMethod(624, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual void moveBy(double x1, double x2) {
	Smoke::StackItem x[3];
	x[1].s_double = (double)x1;
	x[2].s_double = (double)x2;
	if(qt_Smoke->callMethod(534, (void*)this, x)) return;
	this->QCanvasItem::moveBy(x1, x2);
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(622, (void*)this, x)) return (int)x[0].s_int;
	return this->QCanvasPolygonalItem::rtti();
    }
    virtual void setActive(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(559, (void*)this, x)) return;
	this->QCanvasItem::setActive(x1);
    }
    virtual void setAnimated(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(540, (void*)this, x)) return;
	this->QCanvasItem::setAnimated(x1);
    }
    virtual void setBrush(QBrush x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(616, (void*)this, x)) return;
	this->QCanvasPolygonalItem::setBrush(x1);
    }
    virtual void setCanvas(QCanvas* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(549, (void*)this, x)) return;
	this->QCanvasItem::setCanvas(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(557, (void*)this, x)) return;
	this->QCanvasItem::setEnabled(x1);
    }
    virtual void setPen(QPen x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(615, (void*)this, x)) return;
	this->QCanvasPolygonalItem::setPen(x1);
    }
    virtual void setSelected(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(555, (void*)this, x)) return;
	this->QCanvasItem::setSelected(x1);
    }
    virtual void setVelocity(double x1, double x2) {
	Smoke::StackItem x[3];
	x[1].s_double = (double)x1;
	x[2].s_double = (double)x2;
	if(qt_Smoke->callMethod(541, (void*)this, x)) return;
	this->QCanvasItem::setVelocity(x1, x2);
    }
    virtual void setVisible(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(553, (void*)this, x)) return;
	this->QCanvasItem::setVisible(x1);
    }
    ~x_QCanvasPolygonalItem() {}
};
void xcall_QCanvasPolygonalItem(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCanvasPolygonalItem *xself = (x_QCanvasPolygonalItem*)obj;
    switch(xi) {
	case 0: x_QCanvasPolygonalItem::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: delete (QCanvasPolygonalItem*)xself;	break;
    }
}
