//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qsizepolicy.h>
#include <qlayout.h>
#include <qrect.h>
#include <qsize.h>

class x_QLayout : public QLayout {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QLayout::unlimited;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QLayout::FreeResize;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QLayout::Minimum;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QLayout::Fixed;
    }
    static void x_4(Smoke::Stack x) {
	// QLayout(QWidget*, int, int, const char*)
	x_QLayout* xret = new x_QLayout((QWidget*)x[1].s_voidp,(int)x[2].s_int,(int)x[3].s_int,(const char*)x[4].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QLayout(QWidget* x1, int x2, int x3, const char* x4) : QLayout(x1, x2, x3, x4) {
    }
    static void x_5(Smoke::Stack x) {
	// QLayout(QWidget*, int, int)
	x_QLayout* xret = new x_QLayout((QWidget*)x[1].s_voidp,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QLayout(QWidget* x1, int x2, int x3) : QLayout(x1, x2, x3) {
    }
    static void x_6(Smoke::Stack x) {
	// QLayout(QWidget*, int)
	x_QLayout* xret = new x_QLayout((QWidget*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QLayout(QWidget* x1, int x2) : QLayout(x1, x2) {
    }
    static void x_7(Smoke::Stack x) {
	// QLayout(QWidget*)
	x_QLayout* xret = new x_QLayout((QWidget*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QLayout(QWidget* x1) : QLayout(x1) {
    }
    static void x_8(Smoke::Stack x) {
	// QLayout(QLayout*, int, const char*)
	x_QLayout* xret = new x_QLayout((QLayout*)x[1].s_voidp,(int)x[2].s_int,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QLayout(QLayout* x1, int x2, const char* x3) : QLayout(x1, x2, x3) {
    }
    static void x_9(Smoke::Stack x) {
	// QLayout(QLayout*, int)
	x_QLayout* xret = new x_QLayout((QLayout*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QLayout(QLayout* x1, int x2) : QLayout(x1, x2) {
    }
    static void x_10(Smoke::Stack x) {
	// QLayout(QLayout*)
	x_QLayout* xret = new x_QLayout((QLayout*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QLayout(QLayout* x1) : QLayout(x1) {
    }
    static void x_11(Smoke::Stack x) {
	// QLayout(int, const char*)
	x_QLayout* xret = new x_QLayout((int)x[1].s_int,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QLayout(int x1, const char* x2) : QLayout(x1, x2) {
    }
    static void x_12(Smoke::Stack x) {
	// QLayout(int)
	x_QLayout* xret = new x_QLayout((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QLayout(int x1) : QLayout(x1) {
    }
    static void x_13(Smoke::Stack x) {
	// QLayout()
	x_QLayout* xret = new x_QLayout();
	x[0].s_class = (void*)xret;
    }
    x_QLayout() : QLayout() {
    }
    void x_14(Smoke::Stack x) const {
	// margin()
	int xret = this->QLayout::margin();
	x[0].s_int = xret;
    }
    void x_15(Smoke::Stack x) const {
	// spacing()
	int xret = this->QLayout::spacing();
	x[0].s_int = xret;
    }
    void x_16(Smoke::Stack x) {
	// setMargin(int)
	this->QLayout::setMargin((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_17(Smoke::Stack x) {
	// setSpacing(int)
	this->QLayout::setSpacing((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_18(Smoke::Stack x) const {
	// defaultBorder()
	int xret = this->QLayout::defaultBorder();
	x[0].s_int = xret;
    }
    void x_19(Smoke::Stack x) {
	// freeze(int, int)
	this->QLayout::freeze((int)x[1].s_int,(int)x[2].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_20(Smoke::Stack x) {
	// freeze()
	this->QLayout::freeze();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_21(Smoke::Stack x) {
	// setResizeMode(QLayout::ResizeMode)
	this->QLayout::setResizeMode((QLayout::ResizeMode)x[1].s_enum);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_22(Smoke::Stack x) const {
	// resizeMode()
	QLayout::ResizeMode xret = this->QLayout::resizeMode();
	x[0].s_enum = xret;
    }
    void x_23(Smoke::Stack x) {
	// setMenuBar(QMenuBar*)
	this->QLayout::setMenuBar((QMenuBar*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_24(Smoke::Stack x) const {
	// menuBar()
	QMenuBar* xret = this->QLayout::menuBar();
	x[0].s_voidp = (void*)xret;
    }
    void x_25(Smoke::Stack x) {
	// mainWidget()
	QWidget* xret = this->QLayout::mainWidget();
	x[0].s_voidp = (void*)xret;
    }
    void x_26(Smoke::Stack x) const {
	// isTopLevel()
	bool xret = this->QLayout::isTopLevel();
	x[0].s_bool = xret;
    }
    void x_27(Smoke::Stack x) {
	// setAutoAdd(bool)
	this->QLayout::setAutoAdd((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_28(Smoke::Stack x) const {
	// autoAdd()
	bool xret = this->QLayout::autoAdd();
	x[0].s_bool = xret;
    }
    void x_29(Smoke::Stack x) {
	// invalidate()
	this->QLayout::invalidate();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_30(Smoke::Stack x) const {
	// geometry()
	QRect xret = this->QLayout::geometry();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_31(Smoke::Stack x) {
	// activate()
	bool xret = this->QLayout::activate();
	x[0].s_bool = xret;
    }
    void x_32(Smoke::Stack x) {
	// add(QWidget*)
	this->QLayout::add((QWidget*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_33(Smoke::Stack x) const {
	// expanding()
	QSizePolicy::ExpandData xret = this->QLayout::expanding();
	x[0].s_enum = xret;
    }
    void x_34(Smoke::Stack x) const {
	// minimumSize()
	QSize xret = this->QLayout::minimumSize();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_35(Smoke::Stack x) const {
	// maximumSize()
	QSize xret = this->QLayout::maximumSize();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_36(Smoke::Stack x) const {
	// isEmpty()
	bool xret = this->QLayout::isEmpty();
	x[0].s_bool = xret;
    }
    void x_37(Smoke::Stack x) const {
	// totalHeightForWidth(int)
	int xret = this->QLayout::totalHeightForWidth((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_38(Smoke::Stack x) const {
	// totalMinimumSize()
	QSize xret = this->QLayout::totalMinimumSize();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_39(Smoke::Stack x) const {
	// totalMaximumSize()
	QSize xret = this->QLayout::totalMaximumSize();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_40(Smoke::Stack x) const {
	// totalSizeHint()
	QSize xret = this->QLayout::totalSizeHint();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_41(Smoke::Stack x) {
	// layout()
	QLayout* xret = this->QLayout::layout();
	x[0].s_voidp = (void*)xret;
    }
    void x_42(Smoke::Stack x) const {
	// supportsMargin()
	bool xret = this->QLayout::supportsMargin();
	x[0].s_bool = xret;
    }
    void x_43(Smoke::Stack x) {
	// setEnabled(bool)
	this->QLayout::setEnabled((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_44(Smoke::Stack x) const {
	// isEnabled()
	bool xret = this->QLayout::isEnabled();
	x[0].s_bool = xret;
    }
    void x_45(Smoke::Stack x) {
	// eventFilter(QObject*, QEvent*)
	bool xret = this->QLayout::eventFilter((QObject*)x[1].s_voidp,(QEvent*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_46(Smoke::Stack x) {
	// childEvent(QChildEvent*)
	this->QLayout::childEvent((QChildEvent*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_47(Smoke::Stack x) {
	// addChildLayout(QLayout*)
	this->QLayout::addChildLayout((QLayout*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_48(Smoke::Stack x) {
	// deleteAllItems()
	this->QLayout::deleteAllItems();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_49(Smoke::Stack x) {
	// setSupportsMargin(bool)
	this->QLayout::setSupportsMargin((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_50(Smoke::Stack x) const {
	// alignmentRect(const QRect&)
	QRect xret = this->QLayout::alignmentRect(*(const QRect *)x[1].s_voidp);
	x[0].s_class = (void*)new QRect(xret);
    }
    virtual void addItem(QLayoutItem* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	qt_Smoke->callMethod(4085, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->callMethod(5470, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(4101, (void*)this, x)) return;
	this->QLayout::childEvent(x1);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5468, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5467, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5469, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5405, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->callMethod(4100, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLayout::eventFilter(x1, x2);
    }
    virtual QSizePolicy::ExpandData expanding() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4086, (void*)this, x)) {
	    QSizePolicy::ExpandData *xptr = (QSizePolicy::ExpandData *)x[0].s_class;
	    QSizePolicy::ExpandData xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLayout::expanding();
    }
    virtual QRect geometry() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4082, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLayout::geometry();
    }
    virtual bool hasHeightForWidth() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4116, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLayoutItem::hasHeightForWidth();
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(4117, (void*)this, x)) return (int)x[0].s_int;
	return this->QLayoutItem::heightForWidth(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5428, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void invalidate() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4081, (void*)this, x)) return;
	this->QLayout::invalidate();
    }
    virtual bool isEmpty() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4091, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLayout::isEmpty();
    }
    virtual QLayoutIterator iterator() {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(4090, (void*)this, x, true /*pure virtual*/);
	QLayoutIterator *xptr = (QLayoutIterator *)x[0].s_class;
	QLayoutIterator xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual QLayout* layout() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4096, (void*)this, x)) return (QLayout*)x[0].s_class;
	return this->QLayout::layout();
    }
    virtual QSize maximumSize() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4088, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLayout::maximumSize();
    }
    virtual QSize minimumSize() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4087, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLayout::minimumSize();
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5442, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5429, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setAlignment(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(4124, (void*)this, x)) return;
	this->QLayoutItem::setAlignment(x1);
    }
    virtual void setAutoAdd(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(4079, (void*)this, x)) return;
	this->QLayout::setAutoAdd(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	qt_Smoke->callMethod(4089, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual void setMargin(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(4068, (void*)this, x)) return;
	this->QLayout::setMargin(x1);
    }
    virtual void setMenuBar(QMenuBar* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(4075, (void*)this, x)) return;
	this->QLayout::setMenuBar(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5411, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->callMethod(5441, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setSpacing(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(4069, (void*)this, x)) return;
	this->QLayout::setSpacing(x1);
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(4109, (void*)this, x, true /*pure virtual*/);
	QSize *xptr = (QSize *)x[0].s_class;
	QSize xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual QSpacerItem* spacerItem() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4122, (void*)this, x)) return (QSpacerItem*)x[0].s_class;
	return this->QLayoutItem::spacerItem();
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5465, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual QWidget* widget() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4119, (void*)this, x)) return (QWidget*)x[0].s_class;
	return this->QLayoutItem::widget();
    }
    ~x_QLayout() {}
};
void xcall_QLayout(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QLayout *xself = (x_QLayout*)obj;
    switch(xi) {
	case 0: x_QLayout::x_0(args);	break;
	case 1: x_QLayout::x_1(args);	break;
	case 2: x_QLayout::x_2(args);	break;
	case 3: x_QLayout::x_3(args);	break;
	case 4: x_QLayout::x_4(args);	break;
	case 5: x_QLayout::x_5(args);	break;
	case 6: x_QLayout::x_6(args);	break;
	case 7: x_QLayout::x_7(args);	break;
	case 8: x_QLayout::x_8(args);	break;
	case 9: x_QLayout::x_9(args);	break;
	case 10: x_QLayout::x_10(args);	break;
	case 11: x_QLayout::x_11(args);	break;
	case 12: x_QLayout::x_12(args);	break;
	case 13: x_QLayout::x_13(args);	break;
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
	case 33: xself->x_33(args);	break;
	case 34: xself->x_34(args);	break;
	case 35: xself->x_35(args);	break;
	case 36: xself->x_36(args);	break;
	case 37: xself->x_37(args);	break;
	case 38: xself->x_38(args);	break;
	case 39: xself->x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: xself->x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: xself->x_44(args);	break;
	case 45: xself->x_45(args);	break;
	case 46: xself->x_46(args);	break;
	case 47: xself->x_47(args);	break;
	case 48: xself->x_48(args);	break;
	case 49: xself->x_49(args);	break;
	case 50: xself->x_50(args);	break;
	case 51: delete (QLayout*)xself;	break;
    }
}
