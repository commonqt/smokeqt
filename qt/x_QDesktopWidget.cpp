//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qcursor.h>
#include <qcolor.h>
#include <qfont.h>
#include <qstring.h>
#include <qbitmap.h>
#include <qsize.h>
#include <qvariant.h>
#include <qsizepolicy.h>
#include <qdesktopwidget.h>
#include <qregion.h>
#include <qpalette.h>
#include <qnamespace.h>
#include <qwidget.h>
#include <qrect.h>
#include <qpixmap.h>
#include <qstyle.h>

class x_QDesktopWidget : public QDesktopWidget {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QDesktopWidget::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QDesktopWidget::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QDesktopWidget::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QDesktopWidget::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QDesktopWidget::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QDesktopWidget::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QDesktopWidget::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QDesktopWidget()
	x_QDesktopWidget* xret = new x_QDesktopWidget();
	x[0].s_class = (void*)xret;
    }
    x_QDesktopWidget() : QDesktopWidget() {
    }
    void x_8(Smoke::Stack x) const {
	// isVirtualDesktop()
	bool xret = this->QDesktopWidget::isVirtualDesktop();
	x[0].s_bool = xret;
    }
    void x_9(Smoke::Stack x) const {
	// numScreens()
	int xret = this->QDesktopWidget::numScreens();
	x[0].s_int = xret;
    }
    void x_10(Smoke::Stack x) const {
	// primaryScreen()
	int xret = this->QDesktopWidget::primaryScreen();
	x[0].s_int = xret;
    }
    void x_11(Smoke::Stack x) const {
	// screenNumber(QWidget*)
	int xret = this->QDesktopWidget::screenNumber((QWidget*)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_12(Smoke::Stack x) const {
	// screenNumber()
	int xret = this->QDesktopWidget::screenNumber();
	x[0].s_int = xret;
    }
    void x_13(Smoke::Stack x) const {
	// screenNumber(const QPoint&)
	int xret = this->QDesktopWidget::screenNumber(*(const QPoint *)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_14(Smoke::Stack x) {
	// screen(int)
	QWidget* xret = this->QDesktopWidget::screen((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    void x_15(Smoke::Stack x) {
	// screen()
	QWidget* xret = this->QDesktopWidget::screen();
	x[0].s_class = (void*)xret;
    }
    void x_16(Smoke::Stack x) const {
	// screenGeometry(int)
	const QRect& xret = this->QDesktopWidget::screenGeometry((int)x[1].s_int);
	x[0].s_class = (void*)&xret;
    }
    void x_17(Smoke::Stack x) const {
	// screenGeometry()
	const QRect& xret = this->QDesktopWidget::screenGeometry();
	x[0].s_class = (void*)&xret;
    }
    static void x_18(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QDesktopWidget::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_19(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QDesktopWidget::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_20(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QDesktopWidget::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_21(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QDesktopWidget::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_22(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QDesktopWidget::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
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
	if(qt_Smoke->binding->callMethod(1974, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QDesktopWidget::className();
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
	if(qt_Smoke->binding->callMethod(11610, (void*)this, x)) return;
	this->QWidget::closeEvent(x1);
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
	if(qt_Smoke->binding->callMethod(11535, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::customWhatsThis();
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
	if(qt_Smoke->binding->callMethod(11603, (void*)this, x)) return;
	this->QWidget::focusInEvent(x1);
    }
    virtual bool focusNextPrevChild(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11643, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::focusNextPrevChild(x1);
    }
    virtual void focusOutEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11604, (void*)this, x)) return;
	this->QWidget::focusOutEvent(x1);
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
	if(qt_Smoke->binding->callMethod(11567, (void*)this, x)) return;
	this->QWidget::hide();
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
	if(qt_Smoke->binding->callMethod(11601, (void*)this, x)) return;
	this->QWidget::keyPressEvent(x1);
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
	if(qt_Smoke->binding->callMethod(11606, (void*)this, x)) return;
	this->QWidget::leaveEvent(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(1973, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QDesktopWidget::metaObject();
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
	if(qt_Smoke->binding->callMethod(11599, (void*)this, x)) return;
	this->QWidget::mouseMoveEvent(x1);
    }
    virtual void mousePressEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11596, (void*)this, x)) return;
	this->QWidget::mousePressEvent(x1);
    }
    virtual void mouseReleaseEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11597, (void*)this, x)) return;
	this->QWidget::mouseReleaseEvent(x1);
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
	if(qt_Smoke->binding->callMethod(11607, (void*)this, x)) return;
	this->QWidget::paintEvent(x1);
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
	if(qt_Smoke->binding->callMethod(1975, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QDesktopWidget::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(1977, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDesktopWidget::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(1976, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDesktopWidget::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(1978, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDesktopWidget::qt_property(x1, x2, x3);
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
	if(qt_Smoke->binding->callMethod(11609, (void*)this, x)) return;
	this->QWidget::resizeEvent(x1);
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
	if(qt_Smoke->binding->callMethod(11463, (void*)this, x)) return;
	this->QWidget::setFont(x1);
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
    virtual void setKeyCompression(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11647, (void*)this, x)) return;
	this->QWidget::setKeyCompression(x1);
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
	if(qt_Smoke->binding->callMethod(11566, (void*)this, x)) return;
	this->QWidget::show();
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
	if(qt_Smoke->binding->callMethod(11505, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::sizeHint();
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
	if(qt_Smoke->binding->callMethod(11623, (void*)this, x)) return;
	this->QWidget::styleChange(x1);
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
	if(qt_Smoke->binding->callMethod(6491, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void unsetCursor() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11470, (void*)this, x)) return;
	this->QWidget::unsetCursor();
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
    ~x_QDesktopWidget() { qt_Smoke->binding->deleted(67, (void*)this); }
};
void xcall_QDesktopWidget(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDesktopWidget *xself = (x_QDesktopWidget*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QDesktopWidget::x_7(args);	break;
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
	case 18: x_QDesktopWidget::x_18(args);	break;
	case 19: x_QDesktopWidget::x_19(args);	break;
	case 20: x_QDesktopWidget::x_20(args);	break;
	case 21: x_QDesktopWidget::x_21(args);	break;
	case 22: x_QDesktopWidget::x_22(args);	break;
	case 23: delete (QDesktopWidget*)xself;	break;
    }
}
