//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpalette.h>
#include <qstring.h>
#include <qrect.h>
#include <qpixmap.h>
#include <qsize.h>
#include <qtable.h>

class x_QTableItem : public QTableItem {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QTableItem::Never;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QTableItem::OnTyping;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QTableItem::WhenCurrent;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QTableItem::Always;
    }
    static void x_4(Smoke::Stack x) {
	// QTableItem(QTable*, QTableItem::EditType, const QString&)
	x_QTableItem* xret = new x_QTableItem((QTable*)x[1].s_voidp,(QTableItem::EditType)x[2].s_enum,*(const QString *)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QTableItem(QTable* x1, QTableItem::EditType x2, const QString& x3) : QTableItem(x1, x2, x3) {
    }
    static void x_5(Smoke::Stack x) {
	// QTableItem(QTable*, QTableItem::EditType, const QString&, const QPixmap&)
	x_QTableItem* xret = new x_QTableItem((QTable*)x[1].s_voidp,(QTableItem::EditType)x[2].s_enum,*(const QString *)x[3].s_voidp,*(const QPixmap *)x[4].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QTableItem(QTable* x1, QTableItem::EditType x2, const QString& x3, const QPixmap& x4) : QTableItem(x1, x2, x3, x4) {
    }
    void x_6(Smoke::Stack x) const {
	// pixmap()
	QPixmap xret = this->QTableItem::pixmap();
	x[0].s_class = (void*)new QPixmap(xret);
    }
    void x_7(Smoke::Stack x) const {
	// text()
	QString xret = this->QTableItem::text();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_8(Smoke::Stack x) {
	// setPixmap(const QPixmap&)
	this->QTableItem::setPixmap(*(const QPixmap *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_9(Smoke::Stack x) {
	// setText(const QString&)
	this->QTableItem::setText(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_10(Smoke::Stack x) const {
	// table()
	QTable* xret = this->QTableItem::table();
	x[0].s_voidp = (void*)xret;
    }
    void x_11(Smoke::Stack x) const {
	// alignment()
	int xret = this->QTableItem::alignment();
	x[0].s_int = xret;
    }
    void x_12(Smoke::Stack x) {
	// setWordWrap(bool)
	this->QTableItem::setWordWrap((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) const {
	// wordWrap()
	bool xret = this->QTableItem::wordWrap();
	x[0].s_bool = xret;
    }
    void x_14(Smoke::Stack x) const {
	// editType()
	QTableItem::EditType xret = this->QTableItem::editType();
	x[0].s_enum = xret;
    }
    void x_15(Smoke::Stack x) const {
	// createEditor()
	QWidget* xret = this->QTableItem::createEditor();
	x[0].s_voidp = (void*)xret;
    }
    void x_16(Smoke::Stack x) {
	// setContentFromEditor(QWidget*)
	this->QTableItem::setContentFromEditor((QWidget*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_17(Smoke::Stack x) {
	// setReplaceable(bool)
	this->QTableItem::setReplaceable((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_18(Smoke::Stack x) const {
	// isReplaceable()
	bool xret = this->QTableItem::isReplaceable();
	x[0].s_bool = xret;
    }
    void x_19(Smoke::Stack x) const {
	// key()
	QString xret = this->QTableItem::key();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_20(Smoke::Stack x) const {
	// sizeHint()
	QSize xret = this->QTableItem::sizeHint();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_21(Smoke::Stack x) {
	// setSpan(int, int)
	this->QTableItem::setSpan((int)x[1].s_int,(int)x[2].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_22(Smoke::Stack x) const {
	// rowSpan()
	int xret = this->QTableItem::rowSpan();
	x[0].s_int = xret;
    }
    void x_23(Smoke::Stack x) const {
	// colSpan()
	int xret = this->QTableItem::colSpan();
	x[0].s_int = xret;
    }
    void x_24(Smoke::Stack x) {
	// setRow(int)
	this->QTableItem::setRow((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_25(Smoke::Stack x) {
	// setCol(int)
	this->QTableItem::setCol((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) const {
	// row()
	int xret = this->QTableItem::row();
	x[0].s_int = xret;
    }
    void x_27(Smoke::Stack x) const {
	// col()
	int xret = this->QTableItem::col();
	x[0].s_int = xret;
    }
    void x_28(Smoke::Stack x) {
	// paint(QPainter*, const QColorGroup&, const QRect&, bool)
	this->QTableItem::paint((QPainter*)x[1].s_voidp,*(const QColorGroup *)x[2].s_voidp,*(const QRect *)x[3].s_voidp,(bool)x[4].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_29(Smoke::Stack x) {
	// updateEditor(int, int)
	this->QTableItem::updateEditor((int)x[1].s_int,(int)x[2].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_30(Smoke::Stack x) {
	// setEnabled(bool)
	this->QTableItem::setEnabled((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_31(Smoke::Stack x) const {
	// isEnabled()
	bool xret = this->QTableItem::isEnabled();
	x[0].s_bool = xret;
    }
    void x_32(Smoke::Stack x) const {
	// rtti()
	int xret = this->QTableItem::rtti();
	x[0].s_int = xret;
    }
    virtual int alignment() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(8453, (void*)this, x)) return (int)x[0].s_int;
	return this->QTableItem::alignment();
    }
    virtual QWidget* createEditor() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(8457, (void*)this, x)) return (QWidget*)x[0].s_class;
	return this->QTableItem::createEditor();
    }
    virtual QString key() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(8461, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTableItem::key();
    }
    virtual void paint(QPainter* x1, const QColorGroup& x2, const QRect& x3, bool x4) {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_bool = x4;
	if(qt_Smoke->callMethod(8470, (void*)this, x)) return;
	this->QTableItem::paint(x1, x2, x3, x4);
    }
    virtual QPixmap pixmap() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(8448, (void*)this, x)) {
	    QPixmap *xptr = (QPixmap *)x[0].s_class;
	    QPixmap xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTableItem::pixmap();
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(8474, (void*)this, x)) return (int)x[0].s_int;
	return this->QTableItem::rtti();
    }
    virtual void setCol(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(8467, (void*)this, x)) return;
	this->QTableItem::setCol(x1);
    }
    virtual void setContentFromEditor(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(8458, (void*)this, x)) return;
	this->QTableItem::setContentFromEditor(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(8472, (void*)this, x)) return;
	this->QTableItem::setEnabled(x1);
    }
    virtual void setPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(8450, (void*)this, x)) return;
	this->QTableItem::setPixmap(x1);
    }
    virtual void setReplaceable(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(8459, (void*)this, x)) return;
	this->QTableItem::setReplaceable(x1);
    }
    virtual void setRow(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(8466, (void*)this, x)) return;
	this->QTableItem::setRow(x1);
    }
    virtual void setSpan(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->callMethod(8463, (void*)this, x)) return;
	this->QTableItem::setSpan(x1, x2);
    }
    virtual void setText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(8451, (void*)this, x)) return;
	this->QTableItem::setText(x1);
    }
    virtual void setWordWrap(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(8454, (void*)this, x)) return;
	this->QTableItem::setWordWrap(x1);
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(8462, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTableItem::sizeHint();
    }
    virtual QString text() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(8449, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTableItem::text();
    }
    ~x_QTableItem() {}
};
void xcall_QTableItem(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTableItem *xself = (x_QTableItem*)obj;
    switch(xi) {
	case 0: x_QTableItem::x_0(args);	break;
	case 1: x_QTableItem::x_1(args);	break;
	case 2: x_QTableItem::x_2(args);	break;
	case 3: x_QTableItem::x_3(args);	break;
	case 4: x_QTableItem::x_4(args);	break;
	case 5: x_QTableItem::x_5(args);	break;
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
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: xself->x_27(args);	break;
	case 28: xself->x_28(args);	break;
	case 29: xself->x_29(args);	break;
	case 30: xself->x_30(args);	break;
	case 31: xself->x_31(args);	break;
	case 32: xself->x_32(args);	break;
	case 33: delete (QTableItem*)xself;	break;
    }
}
