//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcursor.h>
#include <qcolor.h>
#include <qstring.h>
#include <qpopupmenu.h>
#include <qsize.h>
#include <qvariant.h>
#include <qregion.h>
#include <qpoint.h>
#include <qfont.h>
#include <qbitmap.h>
#include <qsizepolicy.h>
#include <qpalette.h>
#include <qnamespace.h>
#include <qwidget.h>
#include <qrect.h>
#include <qpixmap.h>
#include <qstyle.h>

class x_QPopupMenu : public QPopupMenu {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QPopupMenu::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QPopupMenu::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QPopupMenu::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QPopupMenu::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QPopupMenu::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QPopupMenu::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QPopupMenu::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QPopupMenu(QWidget*, const char*)
	x_QPopupMenu* xret = new x_QPopupMenu((QWidget*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QPopupMenu(QWidget* x1, const char* x2) : QPopupMenu(x1, x2) {
    }
    static void x_8(Smoke::Stack x) {
	// QPopupMenu(QWidget*)
	x_QPopupMenu* xret = new x_QPopupMenu((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QPopupMenu(QWidget* x1) : QPopupMenu(x1) {
    }
    static void x_9(Smoke::Stack x) {
	// QPopupMenu()
	x_QPopupMenu* xret = new x_QPopupMenu();
	x[0].s_class = (void*)xret;
    }
    x_QPopupMenu() : QPopupMenu() {
    }
    void x_10(Smoke::Stack x) {
	// popup(const QPoint&, int)
	this->QPopupMenu::popup(*(const QPoint *)x[1].s_class,(int)x[2].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_11(Smoke::Stack x) {
	// popup(const QPoint&)
	this->QPopupMenu::popup(*(const QPoint *)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_12(Smoke::Stack x) {
	// updateItem(int)
	this->QPopupMenu::updateItem((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) {
	// setCheckable(bool)
	this->QPopupMenu::setCheckable((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_14(Smoke::Stack x) const {
	// isCheckable()
	bool xret = this->QPopupMenu::isCheckable();
	x[0].s_bool = xret;
    }
    void x_15(Smoke::Stack x) {
	// setFont(const QFont&)
	this->QPopupMenu::setFont(*(const QFont *)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_16(Smoke::Stack x) {
	// show()
	this->QPopupMenu::show();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_17(Smoke::Stack x) {
	// hide()
	this->QPopupMenu::hide();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_18(Smoke::Stack x) {
	// exec()
	int xret = this->QPopupMenu::exec();
	x[0].s_int = xret;
    }
    void x_19(Smoke::Stack x) {
	// exec(const QPoint&, int)
	int xret = this->QPopupMenu::exec(*(const QPoint *)x[1].s_class,(int)x[2].s_int);
	x[0].s_int = xret;
    }
    void x_20(Smoke::Stack x) {
	// exec(const QPoint&)
	int xret = this->QPopupMenu::exec(*(const QPoint *)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_21(Smoke::Stack x) {
	// setActiveItem(int)
	this->QPopupMenu::setActiveItem((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_22(Smoke::Stack x) const {
	// sizeHint()
	QSize xret = this->QPopupMenu::sizeHint();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_23(Smoke::Stack x) const {
	// idAt(int)
	int xret = this->QPopupMenu::idAt((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_24(Smoke::Stack x) const {
	// idAt(const QPoint&)
	int xret = this->QPopupMenu::idAt(*(const QPoint *)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_25(Smoke::Stack x) const {
	// customWhatsThis()
	bool xret = this->QPopupMenu::customWhatsThis();
	x[0].s_bool = xret;
    }
    void x_26(Smoke::Stack x) {
	// insertTearOffHandle(int, int)
	int xret = this->QPopupMenu::insertTearOffHandle((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_int = xret;
    }
    void x_27(Smoke::Stack x) {
	// insertTearOffHandle(int)
	int xret = this->QPopupMenu::insertTearOffHandle((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_28(Smoke::Stack x) {
	// insertTearOffHandle()
	int xret = this->QPopupMenu::insertTearOffHandle();
	x[0].s_int = xret;
    }
    void x_29(Smoke::Stack x) {
	// activateItemAt(int)
	this->QPopupMenu::activateItemAt((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_30(Smoke::Stack x) {
	// itemGeometry(int)
	QRect xret = this->QPopupMenu::itemGeometry((int)x[1].s_int);
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_31(Smoke::Stack x) {
	// activated(int)
	this->QPopupMenu::activated((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_32(Smoke::Stack x) {
	// highlighted(int)
	this->QPopupMenu::highlighted((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_33(Smoke::Stack x) {
	// activatedRedirect(int)
	this->QPopupMenu::activatedRedirect((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_34(Smoke::Stack x) {
	// highlightedRedirect(int)
	this->QPopupMenu::highlightedRedirect((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_35(Smoke::Stack x) {
	// aboutToShow()
	this->QPopupMenu::aboutToShow();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_36(Smoke::Stack x) {
	// aboutToHide()
	this->QPopupMenu::aboutToHide();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_37(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QPopupMenu::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_38(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QPopupMenu::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_39(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QPopupMenu::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_40(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QPopupMenu::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_41(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QPopupMenu::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_42(Smoke::Stack x) const {
	// itemHeight(int)
	int xret = this->QPopupMenu::itemHeight((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_43(Smoke::Stack x) const {
	// itemHeight(QMenuItem*)
	int xret = this->QPopupMenu::itemHeight((QMenuItem*)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_44(Smoke::Stack x) {
	// drawItem(QPainter*, int, QMenuItem*, bool, int, int, int, int)
	this->QPopupMenu::drawItem((QPainter*)x[1].s_class,(int)x[2].s_int,(QMenuItem*)x[3].s_class,(bool)x[4].s_bool,(int)x[5].s_int,(int)x[6].s_int,(int)x[7].s_int,(int)x[8].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_45(Smoke::Stack x) {
	// drawContents(QPainter*)
	this->QPopupMenu::drawContents((QPainter*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_46(Smoke::Stack x) {
	// closeEvent(QCloseEvent*)
	this->QPopupMenu::closeEvent((QCloseEvent*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_47(Smoke::Stack x) {
	// paintEvent(QPaintEvent*)
	this->QPopupMenu::paintEvent((QPaintEvent*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_48(Smoke::Stack x) {
	// mousePressEvent(QMouseEvent*)
	this->QPopupMenu::mousePressEvent((QMouseEvent*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_49(Smoke::Stack x) {
	// mouseReleaseEvent(QMouseEvent*)
	this->QPopupMenu::mouseReleaseEvent((QMouseEvent*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_50(Smoke::Stack x) {
	// mouseMoveEvent(QMouseEvent*)
	this->QPopupMenu::mouseMoveEvent((QMouseEvent*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_51(Smoke::Stack x) {
	// keyPressEvent(QKeyEvent*)
	this->QPopupMenu::keyPressEvent((QKeyEvent*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_52(Smoke::Stack x) {
	// focusInEvent(QFocusEvent*)
	this->QPopupMenu::focusInEvent((QFocusEvent*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_53(Smoke::Stack x) {
	// focusOutEvent(QFocusEvent*)
	this->QPopupMenu::focusOutEvent((QFocusEvent*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_54(Smoke::Stack x) {
	// timerEvent(QTimerEvent*)
	this->QPopupMenu::timerEvent((QTimerEvent*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_55(Smoke::Stack x) {
	// leaveEvent(QEvent*)
	this->QPopupMenu::leaveEvent((QEvent*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_56(Smoke::Stack x) {
	// styleChange(QStyle&)
	this->QPopupMenu::styleChange(*(QStyle *)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_57(Smoke::Stack x) const {
	// columns()
	int xret = this->QPopupMenu::columns();
	x[0].s_int = xret;
    }
    void x_58(Smoke::Stack x) {
	// focusNextPrevChild(bool)
	bool xret = this->QPopupMenu::focusNextPrevChild((bool)x[1].s_bool);
	x[0].s_bool = xret;
    }
    void x_59(Smoke::Stack x) const {
	// itemAtPos(const QPoint&, bool)
	int xret = this->QPopupMenu::itemAtPos(*(const QPoint *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_int = xret;
    }
    void x_60(Smoke::Stack x) const {
	// itemAtPos(const QPoint&)
	int xret = this->QPopupMenu::itemAtPos(*(const QPoint *)x[1].s_class);
	x[0].s_int = xret;
    }
    virtual void activateItemAt(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(7129, (void*)this, x)) return;
	this->QPopupMenu::activateItemAt(x1);
    }
    virtual void adjustSize() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11510, (void*)this, x)) return;
	this->QWidget::adjustSize();
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6496, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6492, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7100, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QPopupMenu::className();
    }
    virtual bool close(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11497, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::close(x1);
    }
    virtual void closeEvent(QCloseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(7146, (void*)this, x)) return;
	this->QPopupMenu::closeEvent(x1);
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6608, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPaintDevice::cmd(x1, x2, x3);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6494, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void contextMenuEvent(QContextMenuEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11611, (void*)this, x)) return;
	this->QWidget::contextMenuEvent(x1);
    }
    virtual void create(WId x1, bool x2, bool x3) {
	Smoke::StackItem x[4];
	x[1].s_ulong = x1;
	x[2].s_bool = x2;
	x[3].s_bool = x3;
	if(qt_Smoke->binding->callMethod(11630, (void*)this, x)) return;
	this->QWidget::create(x1, x2, x3);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6493, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual bool customWhatsThis() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7125, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPopupMenu::customWhatsThis();
    }
    virtual void destroy(bool x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = x1;
	x[2].s_bool = x2;
	if(qt_Smoke->binding->callMethod(11634, (void*)this, x)) return;
	this->QWidget::destroy(x1, x2);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6495, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual void dragEnterEvent(QDragEnterEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11616, (void*)this, x)) return;
	this->QWidget::dragEnterEvent(x1);
    }
    virtual void dragLeaveEvent(QDragLeaveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11618, (void*)this, x)) return;
	this->QWidget::dragLeaveEvent(x1);
    }
    virtual void dragMoveEvent(QDragMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11617, (void*)this, x)) return;
	this->QWidget::dragMoveEvent(x1);
    }
    virtual void drawContents(QPainter* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(7145, (void*)this, x)) return;
	this->QPopupMenu::drawContents(x1);
    }
    virtual void drawFrame(QPainter* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(3492, (void*)this, x)) return;
	this->QFrame::drawFrame(x1);
    }
    virtual void dropEvent(QDropEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11619, (void*)this, x)) return;
	this->QWidget::dropEvent(x1);
    }
    virtual void enabledChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11624, (void*)this, x)) return;
	this->QWidget::enabledChange(x1);
    }
    virtual void enterEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11605, (void*)this, x)) return;
	this->QWidget::enterEvent(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11595, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6427, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void focusInEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(7152, (void*)this, x)) return;
	this->QPopupMenu::focusInEvent(x1);
    }
    virtual bool focusNextPrevChild(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(7158, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPopupMenu::focusNextPrevChild(x1);
    }
    virtual void focusOutEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(7153, (void*)this, x)) return;
	this->QPopupMenu::focusOutEvent(x1);
    }
    virtual void fontChange(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11626, (void*)this, x)) return;
	this->QWidget::fontChange(x1);
    }
    virtual int fontInf(QFont* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(6613, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontInf(x1, x2);
    }
    virtual int fontMet(QFont* x1, int x2, const char* x3, int x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	x[3].s_voidp = (void*)x3;
	x[4].s_int = x4;
	if(qt_Smoke->binding->callMethod(6610, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontMet(x1, x2, x3, x4);
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(11509, (void*)this, x)) return (int)x[0].s_int;
	return this->QWidget::heightForWidth(x1);
    }
    virtual void hide() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7117, (void*)this, x)) return;
	this->QPopupMenu::hide();
    }
    virtual void hideEvent(QHideEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11621, (void*)this, x)) return;
	this->QWidget::hideEvent(x1);
    }
    virtual void imComposeEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11613, (void*)this, x)) return;
	this->QWidget::imComposeEvent(x1);
    }
    virtual void imEndEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11614, (void*)this, x)) return;
	this->QWidget::imEndEvent(x1);
    }
    virtual void imStartEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11612, (void*)this, x)) return;
	this->QWidget::imStartEvent(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6449, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void keyPressEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(7151, (void*)this, x)) return;
	this->QPopupMenu::keyPressEvent(x1);
    }
    virtual void keyReleaseEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11602, (void*)this, x)) return;
	this->QWidget::keyReleaseEvent(x1);
    }
    virtual void leaveEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(7155, (void*)this, x)) return;
	this->QPopupMenu::leaveEvent(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7099, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QPopupMenu::metaObject();
    }
    virtual int metric(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(11628, (void*)this, x)) return (int)x[0].s_int;
	return this->QWidget::metric(x1);
    }
    virtual QSize minimumSizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11506, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::minimumSizeHint();
    }
    virtual void mouseDoubleClickEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11598, (void*)this, x)) return;
	this->QWidget::mouseDoubleClickEvent(x1);
    }
    virtual void mouseMoveEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(7150, (void*)this, x)) return;
	this->QPopupMenu::mouseMoveEvent(x1);
    }
    virtual void mousePressEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(7148, (void*)this, x)) return;
	this->QPopupMenu::mousePressEvent(x1);
    }
    virtual void mouseReleaseEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(7149, (void*)this, x)) return;
	this->QPopupMenu::mouseReleaseEvent(x1);
    }
    virtual void move(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11579, (void*)this, x)) return;
	this->QWidget::move(x1, x2);
    }
    virtual void moveEvent(QMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11608, (void*)this, x)) return;
	this->QWidget::moveEvent(x1);
    }
    virtual void paintEvent(QPaintEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(7147, (void*)this, x)) return;
	this->QPopupMenu::paintEvent(x1);
    }
    virtual void paletteChange(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11625, (void*)this, x)) return;
	this->QWidget::paletteChange(x1);
    }
    virtual void polish() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11573, (void*)this, x)) return;
	this->QWidget::polish();
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6463, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void* qt_cast(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(7101, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QPopupMenu::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(7103, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPopupMenu::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(7102, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPopupMenu::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(7104, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPopupMenu::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6450, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void reparent(QWidget* x1, Qt::WFlags x2, const QPoint& x3, bool x4) {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)&x3;
	x[4].s_bool = x4;
	if(qt_Smoke->binding->callMethod(11513, (void*)this, x)) return;
	this->QWidget::reparent(x1, x2, x3, x4);
    }
    virtual void resize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11581, (void*)this, x)) return;
	this->QWidget::resize(x1, x2);
    }
    virtual void resizeEvent(QResizeEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(3491, (void*)this, x)) return;
	this->QFrame::resizeEvent(x1);
    }
    virtual int resolution() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(6606, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::resolution();
    }
    virtual void setAcceptDrops(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11530, (void*)this, x)) return;
	this->QWidget::setAcceptDrops(x1);
    }
    virtual void setActiveItem(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(7121, (void*)this, x)) return;
	this->QPopupMenu::setActiveItem(x1);
    }
    virtual void setActiveWindow() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11484, (void*)this, x)) return;
	this->QWidget::setActiveWindow();
    }
    virtual void setAutoMask(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11531, (void*)this, x)) return;
	this->QWidget::setAutoMask(x1);
    }
    virtual void setBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11480, (void*)this, x)) return;
	this->QWidget::setBackgroundColor(x1);
    }
    virtual void setBackgroundMode(Qt::BackgroundMode x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(11442, (void*)this, x)) return;
	this->QWidget::setBackgroundMode(x1);
    }
    virtual void setBackgroundOrigin(QWidget::BackgroundOrigin x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(11533, (void*)this, x)) return;
	this->QWidget::setBackgroundOrigin(x1);
    }
    virtual void setBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11482, (void*)this, x)) return;
	this->QWidget::setBackgroundPixmap(x1);
    }
    virtual void setCaption(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11548, (void*)this, x)) return;
	this->QWidget::setCaption(x1);
    }
    virtual void setCheckable(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(7113, (void*)this, x)) return;
	this->QPopupMenu::setCheckable(x1);
    }
    virtual void setCursor(const QCursor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11469, (void*)this, x)) return;
	this->QWidget::setCursor(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11546, (void*)this, x)) return;
	this->QWidget::setEnabled(x1);
    }
    virtual void setEraseColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11446, (void*)this, x)) return;
	this->QWidget::setEraseColor(x1);
    }
    virtual void setErasePixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11448, (void*)this, x)) return;
	this->QWidget::setErasePixmap(x1);
    }
    virtual void setFocus() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11552, (void*)this, x)) return;
	this->QWidget::setFocus();
    }
    virtual void setFocusPolicy(QWidget::FocusPolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(11487, (void*)this, x)) return;
	this->QWidget::setFocusPolicy(x1);
    }
    virtual void setFocusProxy(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11489, (void*)this, x)) return;
	this->QWidget::setFocusProxy(x1);
    }
    virtual void setFont(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(7115, (void*)this, x)) return;
	this->QPopupMenu::setFont(x1);
    }
    virtual void setFrameRect(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(3483, (void*)this, x)) return;
	this->QFrame::setFrameRect(x1);
    }
    virtual void setFrameStyle(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(3467, (void*)this, x)) return;
	this->QFrame::setFrameStyle(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11584, (void*)this, x)) return;
	this->QWidget::setGeometry(x1);
    }
    virtual void setGeometry(int x1, int x2, int x3, int x4) {
	Smoke::StackItem x[5];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	x[4].s_int = x4;
	if(qt_Smoke->binding->callMethod(11583, (void*)this, x)) return;
	this->QWidget::setGeometry(x1, x2, x3, x4);
    }
    virtual void setIcon(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11549, (void*)this, x)) return;
	this->QWidget::setIcon(x1);
    }
    virtual void setIconText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11550, (void*)this, x)) return;
	this->QWidget::setIconText(x1);
    }
    virtual void setId(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(5842, (void*)this, x)) return;
	this->QMenuData::setId(x1, x2);
    }
    virtual void setKeyCompression(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11647, (void*)this, x)) return;
	this->QWidget::setKeyCompression(x1);
    }
    virtual void setLineWidth(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(3477, (void*)this, x)) return;
	this->QFrame::setLineWidth(x1);
    }
    virtual void setMargin(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(3479, (void*)this, x)) return;
	this->QFrame::setMargin(x1);
    }
    virtual void setMask(const QBitmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11476, (void*)this, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMask(const QRegion& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11477, (void*)this, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMaximumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11419, (void*)this, x)) return;
	this->QWidget::setMaximumSize(x1, x2);
    }
    virtual void setMicroFocusHint(int x1, int x2, int x3, int x4, bool x5, QFont* x6) {
	Smoke::StackItem x[7];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	x[4].s_int = x4;
	x[5].s_bool = x5;
	x[6].s_class = (void*)x6;
	if(qt_Smoke->binding->callMethod(11648, (void*)this, x)) return;
	this->QWidget::setMicroFocusHint(x1, x2, x3, x4, x5, x6);
    }
    virtual void setMidLineWidth(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(3481, (void*)this, x)) return;
	this->QFrame::setMidLineWidth(x1);
    }
    virtual void setMinimumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11417, (void*)this, x)) return;
	this->QWidget::setMinimumSize(x1, x2);
    }
    virtual void setMouseTracking(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11551, (void*)this, x)) return;
	this->QWidget::setMouseTracking(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(11386, (void*)this, x)) return;
	this->QWidget::setName(x1);
    }
    virtual void setPalette(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11452, (void*)this, x)) return;
	this->QWidget::setPalette(x1);
    }
    virtual void setPaletteBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11457, (void*)this, x)) return;
	this->QWidget::setPaletteBackgroundColor(x1);
    }
    virtual void setPaletteBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11459, (void*)this, x)) return;
	this->QWidget::setPaletteBackgroundPixmap(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6462, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setResolution(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(6605, (void*)this, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    virtual void setSizeIncrement(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11426, (void*)this, x)) return;
	this->QWidget::setSizeIncrement(x1, x2);
    }
    virtual void setSizePolicy(QSizePolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11508, (void*)this, x)) return;
	this->QWidget::setSizePolicy(x1);
    }
    virtual void setUpdatesEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11554, (void*)this, x)) return;
	this->QWidget::setUpdatesEnabled(x1);
    }
    virtual void setWFlags(Qt::WFlags x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(11641, (void*)this, x)) return;
	this->QWidget::setWFlags(x1);
    }
    virtual void setWState(uint x1) {
	Smoke::StackItem x[2];
	x[1].s_uint = x1;
	if(qt_Smoke->binding->callMethod(11638, (void*)this, x)) return;
	this->QWidget::setWState(x1);
    }
    virtual void show() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7116, (void*)this, x)) return;
	this->QPopupMenu::show();
    }
    virtual void showEvent(QShowEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11620, (void*)this, x)) return;
	this->QWidget::showEvent(x1);
    }
    virtual void showMaximized() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11570, (void*)this, x)) return;
	this->QWidget::showMaximized();
    }
    virtual void showMinimized() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11569, (void*)this, x)) return;
	this->QWidget::showMinimized();
    }
    virtual void showNormal() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11572, (void*)this, x)) return;
	this->QWidget::showNormal();
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7122, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QPopupMenu::sizeHint();
    }
    virtual QSizePolicy sizePolicy() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11507, (void*)this, x)) {
	    QSizePolicy *xptr = (QSizePolicy *)x[0].s_class;
	    QSizePolicy xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::sizePolicy();
    }
    virtual void styleChange(QStyle& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(7156, (void*)this, x)) return;
	this->QPopupMenu::styleChange(x1);
    }
    virtual void tabletEvent(QTabletEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11615, (void*)this, x)) return;
	this->QWidget::tabletEvent(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(7154, (void*)this, x)) return;
	this->QPopupMenu::timerEvent(x1);
    }
    virtual void unsetCursor() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11470, (void*)this, x)) return;
	this->QWidget::unsetCursor();
    }
    virtual void updateItem(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(7112, (void*)this, x)) return;
	this->QPopupMenu::updateItem(x1);
    }
    virtual void updateMask() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11622, (void*)this, x)) return;
	this->QWidget::updateMask();
    }
    virtual void wheelEvent(QWheelEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11600, (void*)this, x)) return;
	this->QWidget::wheelEvent(x1);
    }
    virtual void windowActivationChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11627, (void*)this, x)) return;
	this->QWidget::windowActivationChange(x1);
    }
    ~x_QPopupMenu() { qt_Smoke->binding->deleted(230, (void*)this); }
};
void xcall_QPopupMenu(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QPopupMenu *xself = (x_QPopupMenu*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QPopupMenu::x_7(args);	break;
	case 8: x_QPopupMenu::x_8(args);	break;
	case 9: x_QPopupMenu::x_9(args);	break;
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
	case 33: xself->x_33(args);	break;
	case 34: xself->x_34(args);	break;
	case 35: xself->x_35(args);	break;
	case 36: xself->x_36(args);	break;
	case 37: x_QPopupMenu::x_37(args);	break;
	case 38: x_QPopupMenu::x_38(args);	break;
	case 39: x_QPopupMenu::x_39(args);	break;
	case 40: x_QPopupMenu::x_40(args);	break;
	case 41: x_QPopupMenu::x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: xself->x_44(args);	break;
	case 45: xself->x_45(args);	break;
	case 46: xself->x_46(args);	break;
	case 47: xself->x_47(args);	break;
	case 48: xself->x_48(args);	break;
	case 49: xself->x_49(args);	break;
	case 50: xself->x_50(args);	break;
	case 51: xself->x_51(args);	break;
	case 52: xself->x_52(args);	break;
	case 53: xself->x_53(args);	break;
	case 54: xself->x_54(args);	break;
	case 55: xself->x_55(args);	break;
	case 56: xself->x_56(args);	break;
	case 57: xself->x_57(args);	break;
	case 58: xself->x_58(args);	break;
	case 59: xself->x_59(args);	break;
	case 60: xself->x_60(args);	break;
	case 61: delete (QPopupMenu*)xself;	break;
    }
}
