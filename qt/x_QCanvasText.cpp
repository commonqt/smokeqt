//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcolor.h>
#include <qfont.h>
#include <qstring.h>
#include <qrect.h>
#include <qpainter.h>
#include <qcanvas.h>

class x_QCanvasText : public QCanvasText {
public:
    static void x_0(Smoke::Stack x) {
	// QCanvasText(QCanvas*)
	x_QCanvasText* xret = new x_QCanvasText((QCanvas*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasText(QCanvas* x1) : QCanvasText(x1) {
    }
    static void x_1(Smoke::Stack x) {
	// QCanvasText(const QString&, QCanvas*)
	x_QCanvasText* xret = new x_QCanvasText(*(const QString *)x[1].s_voidp,(QCanvas*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasText(const QString& x1, QCanvas* x2) : QCanvasText(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QCanvasText(const QString&, QFont, QCanvas*)
	x_QCanvasText* xret = new x_QCanvasText(*(const QString *)x[1].s_voidp,*(QFont *)x[2].s_class,(QCanvas*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasText(const QString& x1, QFont x2, QCanvas* x3) : QCanvasText(x1, x2, x3) {
    }
    void x_3(Smoke::Stack x) {
	// setText(const QString&)
	this->QCanvasText::setText(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_4(Smoke::Stack x) {
	// setFont(const QFont&)
	this->QCanvasText::setFont(*(const QFont *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_5(Smoke::Stack x) {
	// setColor(const QColor&)
	this->QCanvasText::setColor(*(const QColor *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_6(Smoke::Stack x) const {
	// text()
	QString xret = this->QCanvasText::text();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_7(Smoke::Stack x) const {
	// font()
	QFont xret = this->QCanvasText::font();
	x[0].s_class = (void*)new QFont(xret);
    }
    void x_8(Smoke::Stack x) const {
	// color()
	QColor xret = this->QCanvasText::color();
	x[0].s_class = (void*)new QColor(xret);
    }
    void x_9(Smoke::Stack x) {
	// moveBy(double, double)
	this->QCanvasText::moveBy((double)x[1].s_double,(double)x[2].s_double);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_10(Smoke::Stack x) const {
	// textFlags()
	int xret = this->QCanvasText::textFlags();
	x[0].s_int = xret;
    }
    void x_11(Smoke::Stack x) {
	// setTextFlags(int)
	this->QCanvasText::setTextFlags((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_12(Smoke::Stack x) const {
	// boundingRect()
	QRect xret = this->QCanvasText::boundingRect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_13(Smoke::Stack x) const {
	// collidesWith(const QCanvasItem*)
	bool xret = this->QCanvasText::collidesWith((const QCanvasItem*)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_14(Smoke::Stack x) const {
	// rtti()
	int xret = this->QCanvasText::rtti();
	x[0].s_int = xret;
    }
    void x_15(Smoke::Stack x) {
	// draw(QPainter&)
	this->QCanvasText::draw(*(QPainter *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    virtual void advance(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(546, (void*)this, x)) return;
	this->QCanvasItem::advance(x1);
    }
    virtual QRect boundingRect() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(693, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasText::boundingRect();
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
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(694, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QCanvasText::collidesWith(x1);
    }
    virtual void draw(QPainter& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(696, (void*)this, x)) return;
	this->QCanvasText::draw(x1);
    }
    virtual void moveBy(double x1, double x2) {
	Smoke::StackItem x[3];
	x[1].s_double = x1;
	x[2].s_double = x2;
	if(qt_Smoke->callMethod(690, (void*)this, x)) return;
	this->QCanvasText::moveBy(x1, x2);
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(695, (void*)this, x)) return (int)x[0].s_int;
	return this->QCanvasText::rtti();
    }
    virtual void setActive(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(559, (void*)this, x)) return;
	this->QCanvasItem::setActive(x1);
    }
    virtual void setAnimated(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(540, (void*)this, x)) return;
	this->QCanvasItem::setAnimated(x1);
    }
    virtual void setCanvas(QCanvas* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(549, (void*)this, x)) return;
	this->QCanvasItem::setCanvas(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(557, (void*)this, x)) return;
	this->QCanvasItem::setEnabled(x1);
    }
    virtual void setSelected(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(555, (void*)this, x)) return;
	this->QCanvasItem::setSelected(x1);
    }
    virtual void setVelocity(double x1, double x2) {
	Smoke::StackItem x[3];
	x[1].s_double = x1;
	x[2].s_double = x2;
	if(qt_Smoke->callMethod(541, (void*)this, x)) return;
	this->QCanvasItem::setVelocity(x1, x2);
    }
    virtual void setVisible(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(553, (void*)this, x)) return;
	this->QCanvasItem::setVisible(x1);
    }
    ~x_QCanvasText() {}
};
void xcall_QCanvasText(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCanvasText *xself = (x_QCanvasText*)obj;
    switch(xi) {
	case 0: x_QCanvasText::x_0(args);	break;
	case 1: x_QCanvasText::x_1(args);	break;
	case 2: x_QCanvasText::x_2(args);	break;
	case 3: xself->x_3(args);	break;
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
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: delete (QCanvasText*)xself;	break;
    }
}
