//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcursor.h>
#include <qcolor.h>
#include <qstring.h>
#include <qgroupbox.h>
#include <qsize.h>
#include <qvariant.h>
#include <qregion.h>
#include <qpoint.h>
#include <qfont.h>
#include <qbitmap.h>
#include <qsizepolicy.h>
#include <qpalette.h>
#include <qwidget.h>
#include <qnamespace.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qstyle.h>

class x_QGroupBox : public QGroupBox {
public:
    static void x_0(Smoke::Stack x) {
	// QGroupBox(QWidget*, const char*)
	x_QGroupBox* xret = new x_QGroupBox((QWidget*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QGroupBox(QWidget* x1, const char* x2) : QGroupBox(x1, x2) {
    }
    static void x_1(Smoke::Stack x) {
	// QGroupBox(QWidget*)
	x_QGroupBox* xret = new x_QGroupBox((QWidget*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QGroupBox(QWidget* x1) : QGroupBox(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QGroupBox()
	x_QGroupBox* xret = new x_QGroupBox();
	x[0].s_class = (void*)xret;
    }
    x_QGroupBox() : QGroupBox() {
    }
    static void x_3(Smoke::Stack x) {
	// QGroupBox(const QString&, QWidget*, const char*)
	x_QGroupBox* xret = new x_QGroupBox(*(const QString *)x[1].s_voidp,(QWidget*)x[2].s_voidp,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QGroupBox(const QString& x1, QWidget* x2, const char* x3) : QGroupBox(x1, x2, x3) {
    }
    static void x_4(Smoke::Stack x) {
	// QGroupBox(const QString&, QWidget*)
	x_QGroupBox* xret = new x_QGroupBox(*(const QString *)x[1].s_voidp,(QWidget*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QGroupBox(const QString& x1, QWidget* x2) : QGroupBox(x1, x2) {
    }
    static void x_5(Smoke::Stack x) {
	// QGroupBox(const QString&)
	x_QGroupBox* xret = new x_QGroupBox(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QGroupBox(const QString& x1) : QGroupBox(x1) {
    }
    static void x_6(Smoke::Stack x) {
	// QGroupBox(int, Qt::Orientation, QWidget*, const char*)
	x_QGroupBox* xret = new x_QGroupBox((int)x[1].s_int,(Qt::Orientation)x[2].s_enum,(QWidget*)x[3].s_voidp,(const char*)x[4].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QGroupBox(int x1, Qt::Orientation x2, QWidget* x3, const char* x4) : QGroupBox(x1, x2, x3, x4) {
    }
    static void x_7(Smoke::Stack x) {
	// QGroupBox(int, Qt::Orientation, QWidget*)
	x_QGroupBox* xret = new x_QGroupBox((int)x[1].s_int,(Qt::Orientation)x[2].s_enum,(QWidget*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QGroupBox(int x1, Qt::Orientation x2, QWidget* x3) : QGroupBox(x1, x2, x3) {
    }
    static void x_8(Smoke::Stack x) {
	// QGroupBox(int, Qt::Orientation)
	x_QGroupBox* xret = new x_QGroupBox((int)x[1].s_int,(Qt::Orientation)x[2].s_enum);
	x[0].s_class = (void*)xret;
    }
    x_QGroupBox(int x1, Qt::Orientation x2) : QGroupBox(x1, x2) {
    }
    static void x_9(Smoke::Stack x) {
	// QGroupBox(int, Qt::Orientation, const QString&, QWidget*, const char*)
	x_QGroupBox* xret = new x_QGroupBox((int)x[1].s_int,(Qt::Orientation)x[2].s_enum,*(const QString *)x[3].s_voidp,(QWidget*)x[4].s_voidp,(const char*)x[5].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QGroupBox(int x1, Qt::Orientation x2, const QString& x3, QWidget* x4, const char* x5) : QGroupBox(x1, x2, x3, x4, x5) {
    }
    static void x_10(Smoke::Stack x) {
	// QGroupBox(int, Qt::Orientation, const QString&, QWidget*)
	x_QGroupBox* xret = new x_QGroupBox((int)x[1].s_int,(Qt::Orientation)x[2].s_enum,*(const QString *)x[3].s_voidp,(QWidget*)x[4].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QGroupBox(int x1, Qt::Orientation x2, const QString& x3, QWidget* x4) : QGroupBox(x1, x2, x3, x4) {
    }
    static void x_11(Smoke::Stack x) {
	// QGroupBox(int, Qt::Orientation, const QString&)
	x_QGroupBox* xret = new x_QGroupBox((int)x[1].s_int,(Qt::Orientation)x[2].s_enum,*(const QString *)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QGroupBox(int x1, Qt::Orientation x2, const QString& x3) : QGroupBox(x1, x2, x3) {
    }
    void x_12(Smoke::Stack x) {
	// setColumnLayout(int, Qt::Orientation)
	this->QGroupBox::setColumnLayout((int)x[1].s_int,(Qt::Orientation)x[2].s_enum);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) const {
	// title()
	QString xret = this->QGroupBox::title();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_14(Smoke::Stack x) {
	// setTitle(const QString&)
	this->QGroupBox::setTitle(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_15(Smoke::Stack x) const {
	// alignment()
	int xret = this->QGroupBox::alignment();
	x[0].s_int = xret;
    }
    void x_16(Smoke::Stack x) {
	// setAlignment(int)
	this->QGroupBox::setAlignment((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_17(Smoke::Stack x) const {
	// columns()
	int xret = this->QGroupBox::columns();
	x[0].s_int = xret;
    }
    void x_18(Smoke::Stack x) {
	// setColumns(int)
	this->QGroupBox::setColumns((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_19(Smoke::Stack x) const {
	// orientation()
	Qt::Orientation xret = this->QGroupBox::orientation();
	x[0].s_enum = xret;
    }
    void x_20(Smoke::Stack x) {
	// setOrientation(Qt::Orientation)
	this->QGroupBox::setOrientation((Qt::Orientation)x[1].s_enum);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_21(Smoke::Stack x) const {
	// insideMargin()
	int xret = this->QGroupBox::insideMargin();
	x[0].s_int = xret;
    }
    void x_22(Smoke::Stack x) const {
	// insideSpacing()
	int xret = this->QGroupBox::insideSpacing();
	x[0].s_int = xret;
    }
    void x_23(Smoke::Stack x) {
	// setInsideMargin(int)
	this->QGroupBox::setInsideMargin((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_24(Smoke::Stack x) {
	// setInsideSpacing(int)
	this->QGroupBox::setInsideSpacing((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_25(Smoke::Stack x) {
	// addSpace(int)
	this->QGroupBox::addSpace((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) const {
	// sizeHint()
	QSize xret = this->QGroupBox::sizeHint();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_27(Smoke::Stack x) {
	// event(QEvent*)
	bool xret = this->QGroupBox::event((QEvent*)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_28(Smoke::Stack x) {
	// childEvent(QChildEvent*)
	this->QGroupBox::childEvent((QChildEvent*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_29(Smoke::Stack x) {
	// resizeEvent(QResizeEvent*)
	this->QGroupBox::resizeEvent((QResizeEvent*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_30(Smoke::Stack x) {
	// paintEvent(QPaintEvent*)
	this->QGroupBox::paintEvent((QPaintEvent*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_31(Smoke::Stack x) {
	// focusInEvent(QFocusEvent*)
	this->QGroupBox::focusInEvent((QFocusEvent*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_32(Smoke::Stack x) {
	// fontChange(const QFont&)
	this->QGroupBox::fontChange(*(const QFont *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    virtual void adjustSize() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9692, (void*)this, x)) return;
	this->QWidget::adjustSize();
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
	if(qt_Smoke->callMethod(3202, (void*)this, x)) return;
	this->QGroupBox::childEvent(x1);
    }
    virtual bool close(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9679, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::close(x1);
    }
    virtual void closeEvent(QCloseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9787, (void*)this, x)) return;
	this->QWidget::closeEvent(x1);
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->callMethod(5566, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPaintDevice::cmd(x1, x2, x3);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5468, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void contextMenuEvent(QContextMenuEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9788, (void*)this, x)) return;
	this->QWidget::contextMenuEvent(x1);
    }
    virtual void create(WId x1, bool x2, bool x3) {
	Smoke::StackItem x[4];
	x[1].s_ulong = x1;
	x[2].s_bool = x2;
	x[3].s_bool = x3;
	if(qt_Smoke->callMethod(9807, (void*)this, x)) return;
	this->QWidget::create(x1, x2, x3);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5467, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual bool customWhatsThis() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9717, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::customWhatsThis();
    }
    virtual void destroy(bool x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = x1;
	x[2].s_bool = x2;
	if(qt_Smoke->callMethod(9811, (void*)this, x)) return;
	this->QWidget::destroy(x1, x2);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5469, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual void dragEnterEvent(QDragEnterEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9793, (void*)this, x)) return;
	this->QWidget::dragEnterEvent(x1);
    }
    virtual void dragLeaveEvent(QDragLeaveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9795, (void*)this, x)) return;
	this->QWidget::dragLeaveEvent(x1);
    }
    virtual void dragMoveEvent(QDragMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9794, (void*)this, x)) return;
	this->QWidget::dragMoveEvent(x1);
    }
    virtual void drawContents(QPainter* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(2939, (void*)this, x)) return;
	this->QFrame::drawContents(x1);
    }
    virtual void drawFrame(QPainter* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(2938, (void*)this, x)) return;
	this->QFrame::drawFrame(x1);
    }
    virtual void dropEvent(QDropEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9796, (void*)this, x)) return;
	this->QWidget::dropEvent(x1);
    }
    virtual void enabledChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9801, (void*)this, x)) return;
	this->QWidget::enabledChange(x1);
    }
    virtual void enterEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9782, (void*)this, x)) return;
	this->QWidget::enterEvent(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(3201, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QGroupBox::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->callMethod(5406, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void focusInEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(3205, (void*)this, x)) return;
	this->QGroupBox::focusInEvent(x1);
    }
    virtual bool focusNextPrevChild(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9820, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::focusNextPrevChild(x1);
    }
    virtual void focusOutEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9781, (void*)this, x)) return;
	this->QWidget::focusOutEvent(x1);
    }
    virtual void fontChange(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(3206, (void*)this, x)) return;
	this->QGroupBox::fontChange(x1);
    }
    virtual int fontInf(QFont* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->callMethod(5571, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontInf(x1, x2);
    }
    virtual int fontMet(QFont* x1, int x2, const char* x3, int x4) const {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = x2;
	x[3].s_voidp = (void*)x3;
	x[4].s_int = x4;
	if(qt_Smoke->callMethod(5568, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontMet(x1, x2, x3, x4);
    }
    virtual void frameChanged() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(2940, (void*)this, x)) return;
	this->QFrame::frameChanged();
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(9691, (void*)this, x)) return (int)x[0].s_int;
	return this->QWidget::heightForWidth(x1);
    }
    virtual void hide() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9749, (void*)this, x)) return;
	this->QWidget::hide();
    }
    virtual void hideEvent(QHideEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9798, (void*)this, x)) return;
	this->QWidget::hideEvent(x1);
    }
    virtual void imComposeEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9790, (void*)this, x)) return;
	this->QWidget::imComposeEvent(x1);
    }
    virtual void imEndEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9791, (void*)this, x)) return;
	this->QWidget::imEndEvent(x1);
    }
    virtual void imStartEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9789, (void*)this, x)) return;
	this->QWidget::imStartEvent(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5428, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void keyPressEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9778, (void*)this, x)) return;
	this->QWidget::keyPressEvent(x1);
    }
    virtual void keyReleaseEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9779, (void*)this, x)) return;
	this->QWidget::keyReleaseEvent(x1);
    }
    virtual void leaveEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9783, (void*)this, x)) return;
	this->QWidget::leaveEvent(x1);
    }
    virtual int metric(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(9805, (void*)this, x)) return (int)x[0].s_int;
	return this->QWidget::metric(x1);
    }
    virtual QSize minimumSizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9688, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::minimumSizeHint();
    }
    virtual void mouseDoubleClickEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9775, (void*)this, x)) return;
	this->QWidget::mouseDoubleClickEvent(x1);
    }
    virtual void mouseMoveEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9776, (void*)this, x)) return;
	this->QWidget::mouseMoveEvent(x1);
    }
    virtual void mousePressEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9773, (void*)this, x)) return;
	this->QWidget::mousePressEvent(x1);
    }
    virtual void mouseReleaseEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9774, (void*)this, x)) return;
	this->QWidget::mouseReleaseEvent(x1);
    }
    virtual void move(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->callMethod(9761, (void*)this, x)) return;
	this->QWidget::move(x1, x2);
    }
    virtual void moveEvent(QMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9785, (void*)this, x)) return;
	this->QWidget::moveEvent(x1);
    }
    virtual void paintEvent(QPaintEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(3204, (void*)this, x)) return;
	this->QGroupBox::paintEvent(x1);
    }
    virtual void paletteChange(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9802, (void*)this, x)) return;
	this->QWidget::paletteChange(x1);
    }
    virtual void polish() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9755, (void*)this, x)) return;
	this->QWidget::polish();
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
    virtual void reparent(QWidget* x1, Qt::WFlags x2, const QPoint& x3, bool x4) {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_bool = x4;
	if(qt_Smoke->callMethod(9695, (void*)this, x)) return;
	this->QWidget::reparent(x1, x2, x3, x4);
    }
    virtual void resize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->callMethod(9763, (void*)this, x)) return;
	this->QWidget::resize(x1, x2);
    }
    virtual void resizeEvent(QResizeEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(3203, (void*)this, x)) return;
	this->QGroupBox::resizeEvent(x1);
    }
    virtual int resolution() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(5564, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::resolution();
    }
    virtual void setAcceptDrops(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9712, (void*)this, x)) return;
	this->QWidget::setAcceptDrops(x1);
    }
    virtual void setActiveWindow() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9666, (void*)this, x)) return;
	this->QWidget::setActiveWindow();
    }
    virtual void setAlignment(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(3190, (void*)this, x)) return;
	this->QGroupBox::setAlignment(x1);
    }
    virtual void setAutoMask(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9713, (void*)this, x)) return;
	this->QWidget::setAutoMask(x1);
    }
    virtual void setBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9662, (void*)this, x)) return;
	this->QWidget::setBackgroundColor(x1);
    }
    virtual void setBackgroundMode(Qt::BackgroundMode x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->callMethod(9624, (void*)this, x)) return;
	this->QWidget::setBackgroundMode(x1);
    }
    virtual void setBackgroundOrigin(QWidget::BackgroundOrigin x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->callMethod(9715, (void*)this, x)) return;
	this->QWidget::setBackgroundOrigin(x1);
    }
    virtual void setBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9664, (void*)this, x)) return;
	this->QWidget::setBackgroundPixmap(x1);
    }
    virtual void setCaption(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9730, (void*)this, x)) return;
	this->QWidget::setCaption(x1);
    }
    virtual void setColumnLayout(int x1, Qt::Orientation x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_enum = x2;
	if(qt_Smoke->callMethod(3186, (void*)this, x)) return;
	this->QGroupBox::setColumnLayout(x1, x2);
    }
    virtual void setCursor(const QCursor& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9651, (void*)this, x)) return;
	this->QWidget::setCursor(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9728, (void*)this, x)) return;
	this->QWidget::setEnabled(x1);
    }
    virtual void setEraseColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9628, (void*)this, x)) return;
	this->QWidget::setEraseColor(x1);
    }
    virtual void setErasePixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9630, (void*)this, x)) return;
	this->QWidget::setErasePixmap(x1);
    }
    virtual void setFocus() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9734, (void*)this, x)) return;
	this->QWidget::setFocus();
    }
    virtual void setFocusPolicy(QWidget::FocusPolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->callMethod(9669, (void*)this, x)) return;
	this->QWidget::setFocusPolicy(x1);
    }
    virtual void setFocusProxy(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9671, (void*)this, x)) return;
	this->QWidget::setFocusProxy(x1);
    }
    virtual void setFont(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9645, (void*)this, x)) return;
	this->QWidget::setFont(x1);
    }
    virtual void setFrameRect(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(2935, (void*)this, x)) return;
	this->QFrame::setFrameRect(x1);
    }
    virtual void setFrameStyle(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(2919, (void*)this, x)) return;
	this->QFrame::setFrameStyle(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9766, (void*)this, x)) return;
	this->QWidget::setGeometry(x1);
    }
    virtual void setGeometry(int x1, int x2, int x3, int x4) {
	Smoke::StackItem x[5];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	x[4].s_int = x4;
	if(qt_Smoke->callMethod(9765, (void*)this, x)) return;
	this->QWidget::setGeometry(x1, x2, x3, x4);
    }
    virtual void setIcon(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9731, (void*)this, x)) return;
	this->QWidget::setIcon(x1);
    }
    virtual void setIconText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9732, (void*)this, x)) return;
	this->QWidget::setIconText(x1);
    }
    virtual void setKeyCompression(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9824, (void*)this, x)) return;
	this->QWidget::setKeyCompression(x1);
    }
    virtual void setLineWidth(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(2929, (void*)this, x)) return;
	this->QFrame::setLineWidth(x1);
    }
    virtual void setMargin(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(2931, (void*)this, x)) return;
	this->QFrame::setMargin(x1);
    }
    virtual void setMask(const QBitmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9658, (void*)this, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMask(const QRegion& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9659, (void*)this, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMaximumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->callMethod(9601, (void*)this, x)) return;
	this->QWidget::setMaximumSize(x1, x2);
    }
    virtual void setMicroFocusHint(int x1, int x2, int x3, int x4, bool x5, QFont* x6) {
	Smoke::StackItem x[7];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	x[4].s_int = x4;
	x[5].s_bool = x5;
	x[6].s_voidp = (void*)x6;
	if(qt_Smoke->callMethod(9825, (void*)this, x)) return;
	this->QWidget::setMicroFocusHint(x1, x2, x3, x4, x5, x6);
    }
    virtual void setMidLineWidth(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(2933, (void*)this, x)) return;
	this->QFrame::setMidLineWidth(x1);
    }
    virtual void setMinimumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->callMethod(9599, (void*)this, x)) return;
	this->QWidget::setMinimumSize(x1, x2);
    }
    virtual void setMouseTracking(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9733, (void*)this, x)) return;
	this->QWidget::setMouseTracking(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9568, (void*)this, x)) return;
	this->QWidget::setName(x1);
    }
    virtual void setPalette(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9634, (void*)this, x)) return;
	this->QWidget::setPalette(x1);
    }
    virtual void setPaletteBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9639, (void*)this, x)) return;
	this->QWidget::setPaletteBackgroundColor(x1);
    }
    virtual void setPaletteBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9641, (void*)this, x)) return;
	this->QWidget::setPaletteBackgroundPixmap(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->callMethod(5441, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setResolution(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(5563, (void*)this, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    virtual void setSizeIncrement(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->callMethod(9608, (void*)this, x)) return;
	this->QWidget::setSizeIncrement(x1, x2);
    }
    virtual void setSizePolicy(QSizePolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9690, (void*)this, x)) return;
	this->QWidget::setSizePolicy(x1);
    }
    virtual void setTitle(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(3188, (void*)this, x)) return;
	this->QGroupBox::setTitle(x1);
    }
    virtual void setUpdatesEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9736, (void*)this, x)) return;
	this->QWidget::setUpdatesEnabled(x1);
    }
    virtual void setWFlags(Qt::WFlags x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(9818, (void*)this, x)) return;
	this->QWidget::setWFlags(x1);
    }
    virtual void setWState(uint x1) {
	Smoke::StackItem x[2];
	x[1].s_uint = x1;
	if(qt_Smoke->callMethod(9815, (void*)this, x)) return;
	this->QWidget::setWState(x1);
    }
    virtual void show() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9748, (void*)this, x)) return;
	this->QWidget::show();
    }
    virtual void showEvent(QShowEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9797, (void*)this, x)) return;
	this->QWidget::showEvent(x1);
    }
    virtual void showMaximized() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9752, (void*)this, x)) return;
	this->QWidget::showMaximized();
    }
    virtual void showMinimized() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9751, (void*)this, x)) return;
	this->QWidget::showMinimized();
    }
    virtual void showNormal() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9754, (void*)this, x)) return;
	this->QWidget::showNormal();
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(3200, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QGroupBox::sizeHint();
    }
    virtual QSizePolicy sizePolicy() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9689, (void*)this, x)) {
	    QSizePolicy *xptr = (QSizePolicy *)x[0].s_class;
	    QSizePolicy xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::sizePolicy();
    }
    virtual void styleChange(QStyle& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9800, (void*)this, x)) return;
	this->QWidget::styleChange(x1);
    }
    virtual void tabletEvent(QTabletEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9792, (void*)this, x)) return;
	this->QWidget::tabletEvent(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5465, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void unsetCursor() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9652, (void*)this, x)) return;
	this->QWidget::unsetCursor();
    }
    virtual void updateMask() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9799, (void*)this, x)) return;
	this->QWidget::updateMask();
    }
    virtual void wheelEvent(QWheelEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(9777, (void*)this, x)) return;
	this->QWidget::wheelEvent(x1);
    }
    virtual void windowActivationChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9804, (void*)this, x)) return;
	this->QWidget::windowActivationChange(x1);
    }
    ~x_QGroupBox() {}
};
void xcall_QGroupBox(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QGroupBox *xself = (x_QGroupBox*)obj;
    switch(xi) {
	case 0: x_QGroupBox::x_0(args);	break;
	case 1: x_QGroupBox::x_1(args);	break;
	case 2: x_QGroupBox::x_2(args);	break;
	case 3: x_QGroupBox::x_3(args);	break;
	case 4: x_QGroupBox::x_4(args);	break;
	case 5: x_QGroupBox::x_5(args);	break;
	case 6: x_QGroupBox::x_6(args);	break;
	case 7: x_QGroupBox::x_7(args);	break;
	case 8: x_QGroupBox::x_8(args);	break;
	case 9: x_QGroupBox::x_9(args);	break;
	case 10: x_QGroupBox::x_10(args);	break;
	case 11: x_QGroupBox::x_11(args);	break;
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
	case 33: delete (QGroupBox*)xself;	break;
    }
}
