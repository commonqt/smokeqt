//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcursor.h>
#include <qcolor.h>
#include <qstring.h>
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
#include <qrect.h>
#include <qpixmap.h>
#include <qdial.h>
#include <qstyle.h>

class x_QDial : public QDial {
public:
    static void x_0(Smoke::Stack x) {
	// QDial(QWidget*, const char*, Qt::WFlags)
	x_QDial* xret = new x_QDial((QWidget*)x[1].s_class,(const char*)x[2].s_class,*(Qt::WFlags *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDial(QWidget* x1, const char* x2, Qt::WFlags x3) : QDial(x1, x2, x3) {
    }
    static void x_1(Smoke::Stack x) {
	// QDial(QWidget*, const char*)
	x_QDial* xret = new x_QDial((QWidget*)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDial(QWidget* x1, const char* x2) : QDial(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QDial(QWidget*)
	x_QDial* xret = new x_QDial((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDial(QWidget* x1) : QDial(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QDial()
	x_QDial* xret = new x_QDial();
	x[0].s_class = (void*)xret;
    }
    x_QDial() : QDial() {
    }
    static void x_4(Smoke::Stack x) {
	// QDial(int, int, int, int, QWidget*, const char*)
	x_QDial* xret = new x_QDial((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,(QWidget*)x[5].s_class,(const char*)x[6].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDial(int x1, int x2, int x3, int x4, QWidget* x5, const char* x6) : QDial(x1, x2, x3, x4, x5, x6) {
    }
    static void x_5(Smoke::Stack x) {
	// QDial(int, int, int, int, QWidget*)
	x_QDial* xret = new x_QDial((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,(QWidget*)x[5].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDial(int x1, int x2, int x3, int x4, QWidget* x5) : QDial(x1, x2, x3, x4, x5) {
    }
    static void x_6(Smoke::Stack x) {
	// QDial(int, int, int, int)
	x_QDial* xret = new x_QDial((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QDial(int x1, int x2, int x3, int x4) : QDial(x1, x2, x3, x4) {
    }
    void x_7(Smoke::Stack x) const {
	// tracking()
	bool xret = this->QDial::tracking();
	x[0].s_bool = (bool)xret;
    }
    void x_8(Smoke::Stack x) const {
	// wrapping()
	bool xret = this->QDial::wrapping();
	x[0].s_bool = (bool)xret;
    }
    void x_9(Smoke::Stack x) const {
	// notchSize()
	int xret = this->QDial::notchSize();
	x[0].s_int = (int)xret;
    }
    void x_10(Smoke::Stack x) {
	// setNotchTarget(double)
	this->QDial::setNotchTarget((double)x[1].s_double);
    }
    void x_11(Smoke::Stack x) const {
	// notchTarget()
	double xret = this->QDial::notchTarget();
	x[0].s_double = (double)xret;
    }
    void x_12(Smoke::Stack x) const {
	// notchesVisible()
	bool xret = this->QDial::notchesVisible();
	x[0].s_bool = (bool)xret;
    }
    void x_13(Smoke::Stack x) const {
	// sizeHint()
	QSize xret = this->QDial::sizeHint();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_14(Smoke::Stack x) const {
	// minimumSizeHint()
	QSize xret = this->QDial::minimumSizeHint();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_15(Smoke::Stack x) const {
	// minValue()
	int xret = this->QDial::minValue();
	x[0].s_int = (int)xret;
    }
    void x_16(Smoke::Stack x) const {
	// maxValue()
	int xret = this->QDial::maxValue();
	x[0].s_int = (int)xret;
    }
    void x_17(Smoke::Stack x) {
	// setMinValue(int)
	this->QDial::setMinValue((int)x[1].s_int);
    }
    void x_18(Smoke::Stack x) {
	// setMaxValue(int)
	this->QDial::setMaxValue((int)x[1].s_int);
    }
    void x_19(Smoke::Stack x) const {
	// lineStep()
	int xret = this->QDial::lineStep();
	x[0].s_int = (int)xret;
    }
    void x_20(Smoke::Stack x) const {
	// pageStep()
	int xret = this->QDial::pageStep();
	x[0].s_int = (int)xret;
    }
    void x_21(Smoke::Stack x) {
	// setLineStep(int)
	this->QDial::setLineStep((int)x[1].s_int);
    }
    void x_22(Smoke::Stack x) {
	// setPageStep(int)
	this->QDial::setPageStep((int)x[1].s_int);
    }
    void x_23(Smoke::Stack x) const {
	// value()
	int xret = this->QDial::value();
	x[0].s_int = (int)xret;
    }
    void x_24(Smoke::Stack x) {
	// setValue(int)
	this->QDial::setValue((int)x[1].s_int);
    }
    void x_25(Smoke::Stack x) {
	// addLine()
	this->QDial::addLine();
    }
    void x_26(Smoke::Stack x) {
	// subtractLine()
	this->QDial::subtractLine();
    }
    void x_27(Smoke::Stack x) {
	// addPage()
	this->QDial::addPage();
    }
    void x_28(Smoke::Stack x) {
	// subtractPage()
	this->QDial::subtractPage();
    }
    void x_29(Smoke::Stack x) {
	// setNotchesVisible(bool)
	this->QDial::setNotchesVisible((bool)x[1].s_bool);
    }
    void x_30(Smoke::Stack x) {
	// setWrapping(bool)
	this->QDial::setWrapping((bool)x[1].s_bool);
    }
    void x_31(Smoke::Stack x) {
	// setTracking(bool)
	this->QDial::setTracking((bool)x[1].s_bool);
    }
    void x_32(Smoke::Stack x) {
	// valueChanged(int)
	this->QDial::valueChanged((int)x[1].s_int);
    }
    void x_33(Smoke::Stack x) {
	// dialPressed()
	this->QDial::dialPressed();
    }
    void x_34(Smoke::Stack x) {
	// dialMoved(int)
	this->QDial::dialMoved((int)x[1].s_int);
    }
    void x_35(Smoke::Stack x) {
	// dialReleased()
	this->QDial::dialReleased();
    }
    void x_36(Smoke::Stack x) {
	// resizeEvent(QResizeEvent*)
	this->QDial::resizeEvent((QResizeEvent*)x[1].s_class);
    }
    void x_37(Smoke::Stack x) {
	// paintEvent(QPaintEvent*)
	this->QDial::paintEvent((QPaintEvent*)x[1].s_class);
    }
    void x_38(Smoke::Stack x) {
	// keyPressEvent(QKeyEvent*)
	this->QDial::keyPressEvent((QKeyEvent*)x[1].s_class);
    }
    void x_39(Smoke::Stack x) {
	// mousePressEvent(QMouseEvent*)
	this->QDial::mousePressEvent((QMouseEvent*)x[1].s_class);
    }
    void x_40(Smoke::Stack x) {
	// mouseReleaseEvent(QMouseEvent*)
	this->QDial::mouseReleaseEvent((QMouseEvent*)x[1].s_class);
    }
    void x_41(Smoke::Stack x) {
	// mouseMoveEvent(QMouseEvent*)
	this->QDial::mouseMoveEvent((QMouseEvent*)x[1].s_class);
    }
    void x_42(Smoke::Stack x) {
	// wheelEvent(QWheelEvent*)
	this->QDial::wheelEvent((QWheelEvent*)x[1].s_class);
    }
    void x_43(Smoke::Stack x) {
	// focusInEvent(QFocusEvent*)
	this->QDial::focusInEvent((QFocusEvent*)x[1].s_class);
    }
    void x_44(Smoke::Stack x) {
	// focusOutEvent(QFocusEvent*)
	this->QDial::focusOutEvent((QFocusEvent*)x[1].s_class);
    }
    void x_45(Smoke::Stack x) {
	// valueChange()
	this->QDial::valueChange();
    }
    void x_46(Smoke::Stack x) {
	// rangeChange()
	this->QDial::rangeChange();
    }
    void x_47(Smoke::Stack x) {
	// repaintScreen(const QRect*)
	this->QDial::repaintScreen((const QRect*)x[1].s_class);
    }
    void x_48(Smoke::Stack x) {
	// repaintScreen()
	this->QDial::repaintScreen();
    }
    virtual void adjustSize() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9692, (void*)this, x)) return;
	this->QWidget::adjustSize();
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->callMethod(5470, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5466, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual bool close(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9679, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::close(x1);
    }
    virtual void closeEvent(QCloseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9787, (void*)this, x)) return;
	this->QWidget::closeEvent(x1);
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = (int)x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->callMethod(5566, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPaintDevice::cmd(x1, x2, x3);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5468, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void contextMenuEvent(QContextMenuEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9788, (void*)this, x)) return;
	this->QWidget::contextMenuEvent(x1);
    }
    virtual void create(WId x1, bool x2, bool x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_bool = (bool)x2;
	x[3].s_bool = (bool)x3;
	if(qt_Smoke->callMethod(9807, (void*)this, x)) return;
	this->QWidget::create(x1, x2, x3);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
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
	x[1].s_bool = (bool)x1;
	x[2].s_bool = (bool)x2;
	if(qt_Smoke->callMethod(9811, (void*)this, x)) return;
	this->QWidget::destroy(x1, x2);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5469, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual void dragEnterEvent(QDragEnterEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9793, (void*)this, x)) return;
	this->QWidget::dragEnterEvent(x1);
    }
    virtual void dragLeaveEvent(QDragLeaveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9795, (void*)this, x)) return;
	this->QWidget::dragLeaveEvent(x1);
    }
    virtual void dragMoveEvent(QDragMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9794, (void*)this, x)) return;
	this->QWidget::dragMoveEvent(x1);
    }
    virtual void dropEvent(QDropEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9796, (void*)this, x)) return;
	this->QWidget::dropEvent(x1);
    }
    virtual void enabledChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9801, (void*)this, x)) return;
	this->QWidget::enabledChange(x1);
    }
    virtual void enterEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9782, (void*)this, x)) return;
	this->QWidget::enterEvent(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9772, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->callMethod(5406, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void focusInEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(1694, (void*)this, x)) return;
	this->QDial::focusInEvent(x1);
    }
    virtual bool focusNextPrevChild(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9820, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::focusNextPrevChild(x1);
    }
    virtual void focusOutEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(1695, (void*)this, x)) return;
	this->QDial::focusOutEvent(x1);
    }
    virtual void fontChange(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9803, (void*)this, x)) return;
	this->QWidget::fontChange(x1);
    }
    virtual int fontInf(QFont* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(5571, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontInf(x1, x2);
    }
    virtual int fontMet(QFont* x1, int x2, const char* x3, int x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	x[3].s_class = (void*)x3;
	x[4].s_int = (int)x4;
	if(qt_Smoke->callMethod(5568, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontMet(x1, x2, x3, x4);
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
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
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9798, (void*)this, x)) return;
	this->QWidget::hideEvent(x1);
    }
    virtual void imComposeEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9790, (void*)this, x)) return;
	this->QWidget::imComposeEvent(x1);
    }
    virtual void imEndEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9791, (void*)this, x)) return;
	this->QWidget::imEndEvent(x1);
    }
    virtual void imStartEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9789, (void*)this, x)) return;
	this->QWidget::imStartEvent(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5428, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void keyPressEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(1689, (void*)this, x)) return;
	this->QDial::keyPressEvent(x1);
    }
    virtual void keyReleaseEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9779, (void*)this, x)) return;
	this->QWidget::keyReleaseEvent(x1);
    }
    virtual void leaveEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9783, (void*)this, x)) return;
	this->QWidget::leaveEvent(x1);
    }
    virtual int metric(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(9805, (void*)this, x)) return (int)x[0].s_int;
	return this->QWidget::metric(x1);
    }
    virtual QSize minimumSizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(1665, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDial::minimumSizeHint();
    }
    virtual void mouseDoubleClickEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9775, (void*)this, x)) return;
	this->QWidget::mouseDoubleClickEvent(x1);
    }
    virtual void mouseMoveEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(1692, (void*)this, x)) return;
	this->QDial::mouseMoveEvent(x1);
    }
    virtual void mousePressEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(1690, (void*)this, x)) return;
	this->QDial::mousePressEvent(x1);
    }
    virtual void mouseReleaseEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(1691, (void*)this, x)) return;
	this->QDial::mouseReleaseEvent(x1);
    }
    virtual void move(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(9761, (void*)this, x)) return;
	this->QWidget::move(x1, x2);
    }
    virtual void moveEvent(QMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9785, (void*)this, x)) return;
	this->QWidget::moveEvent(x1);
    }
    virtual void paintEvent(QPaintEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(1688, (void*)this, x)) return;
	this->QDial::paintEvent(x1);
    }
    virtual void paletteChange(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
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
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5442, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void rangeChange() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(1697, (void*)this, x)) return;
	this->QDial::rangeChange();
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5429, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void repaintScreen(const QRect* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(1698, (void*)this, x)) return;
	this->QDial::repaintScreen(x1);
    }
    virtual void reparent(QWidget* x1, Qt::WFlags x2, const QPoint& x3, bool x4) {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	x[4].s_bool = (bool)x4;
	if(qt_Smoke->callMethod(9695, (void*)this, x)) return;
	this->QWidget::reparent(x1, x2, x3, x4);
    }
    virtual void resize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(9763, (void*)this, x)) return;
	this->QWidget::resize(x1, x2);
    }
    virtual void resizeEvent(QResizeEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(1687, (void*)this, x)) return;
	this->QDial::resizeEvent(x1);
    }
    virtual int resolution() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(5564, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::resolution();
    }
    virtual void setAcceptDrops(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9712, (void*)this, x)) return;
	this->QWidget::setAcceptDrops(x1);
    }
    virtual void setActiveWindow() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9666, (void*)this, x)) return;
	this->QWidget::setActiveWindow();
    }
    virtual void setAutoMask(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9713, (void*)this, x)) return;
	this->QWidget::setAutoMask(x1);
    }
    virtual void setBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9662, (void*)this, x)) return;
	this->QWidget::setBackgroundColor(x1);
    }
    virtual void setBackgroundMode(Qt::BackgroundMode x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9624, (void*)this, x)) return;
	this->QWidget::setBackgroundMode(x1);
    }
    virtual void setBackgroundOrigin(QWidget::BackgroundOrigin x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9715, (void*)this, x)) return;
	this->QWidget::setBackgroundOrigin(x1);
    }
    virtual void setBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9664, (void*)this, x)) return;
	this->QWidget::setBackgroundPixmap(x1);
    }
    virtual void setCaption(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9730, (void*)this, x)) return;
	this->QWidget::setCaption(x1);
    }
    virtual void setCursor(const QCursor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9651, (void*)this, x)) return;
	this->QWidget::setCursor(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9728, (void*)this, x)) return;
	this->QWidget::setEnabled(x1);
    }
    virtual void setEraseColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9628, (void*)this, x)) return;
	this->QWidget::setEraseColor(x1);
    }
    virtual void setErasePixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
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
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9669, (void*)this, x)) return;
	this->QWidget::setFocusPolicy(x1);
    }
    virtual void setFocusProxy(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9671, (void*)this, x)) return;
	this->QWidget::setFocusProxy(x1);
    }
    virtual void setFont(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9645, (void*)this, x)) return;
	this->QWidget::setFont(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9766, (void*)this, x)) return;
	this->QWidget::setGeometry(x1);
    }
    virtual void setGeometry(int x1, int x2, int x3, int x4) {
	Smoke::StackItem x[5];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	if(qt_Smoke->callMethod(9765, (void*)this, x)) return;
	this->QWidget::setGeometry(x1, x2, x3, x4);
    }
    virtual void setIcon(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9731, (void*)this, x)) return;
	this->QWidget::setIcon(x1);
    }
    virtual void setIconText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9732, (void*)this, x)) return;
	this->QWidget::setIconText(x1);
    }
    virtual void setKeyCompression(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9824, (void*)this, x)) return;
	this->QWidget::setKeyCompression(x1);
    }
    virtual void setMask(const QBitmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9658, (void*)this, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMask(const QRegion& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9659, (void*)this, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMaximumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(9601, (void*)this, x)) return;
	this->QWidget::setMaximumSize(x1, x2);
    }
    virtual void setMicroFocusHint(int x1, int x2, int x3, int x4, bool x5, QFont* x6) {
	Smoke::StackItem x[7];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	x[5].s_bool = (bool)x5;
	x[6].s_class = (void*)x6;
	if(qt_Smoke->callMethod(9825, (void*)this, x)) return;
	this->QWidget::setMicroFocusHint(x1, x2, x3, x4, x5, x6);
    }
    virtual void setMinimumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(9599, (void*)this, x)) return;
	this->QWidget::setMinimumSize(x1, x2);
    }
    virtual void setMouseTracking(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9733, (void*)this, x)) return;
	this->QWidget::setMouseTracking(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9568, (void*)this, x)) return;
	this->QWidget::setName(x1);
    }
    virtual void setNotchTarget(double x1) {
	Smoke::StackItem x[2];
	x[1].s_double = (double)x1;
	if(qt_Smoke->callMethod(1661, (void*)this, x)) return;
	this->QDial::setNotchTarget(x1);
    }
    virtual void setNotchesVisible(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(1680, (void*)this, x)) return;
	this->QDial::setNotchesVisible(x1);
    }
    virtual void setPalette(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9634, (void*)this, x)) return;
	this->QWidget::setPalette(x1);
    }
    virtual void setPaletteBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9639, (void*)this, x)) return;
	this->QWidget::setPaletteBackgroundColor(x1);
    }
    virtual void setPaletteBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9641, (void*)this, x)) return;
	this->QWidget::setPaletteBackgroundPixmap(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(5441, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setResolution(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(5563, (void*)this, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    virtual void setSizeIncrement(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(9608, (void*)this, x)) return;
	this->QWidget::setSizeIncrement(x1, x2);
    }
    virtual void setSizePolicy(QSizePolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9690, (void*)this, x)) return;
	this->QWidget::setSizePolicy(x1);
    }
    virtual void setTracking(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(1682, (void*)this, x)) return;
	this->QDial::setTracking(x1);
    }
    virtual void setUpdatesEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9736, (void*)this, x)) return;
	this->QWidget::setUpdatesEnabled(x1);
    }
    virtual void setValue(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(1675, (void*)this, x)) return;
	this->QDial::setValue(x1);
    }
    virtual void setWFlags(Qt::WFlags x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9818, (void*)this, x)) return;
	this->QWidget::setWFlags(x1);
    }
    virtual void setWState(uint x1) {
	Smoke::StackItem x[2];
	x[1].s_uint = (uint)x1;
	if(qt_Smoke->callMethod(9815, (void*)this, x)) return;
	this->QWidget::setWState(x1);
    }
    virtual void setWrapping(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(1681, (void*)this, x)) return;
	this->QDial::setWrapping(x1);
    }
    virtual void show() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9748, (void*)this, x)) return;
	this->QWidget::show();
    }
    virtual void showEvent(QShowEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
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
	if(qt_Smoke->callMethod(1664, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDial::sizeHint();
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
    virtual void stepChange() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(6396, (void*)this, x)) return;
	this->QRangeControl::stepChange();
    }
    virtual void styleChange(QStyle& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9800, (void*)this, x)) return;
	this->QWidget::styleChange(x1);
    }
    virtual void tabletEvent(QTabletEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9792, (void*)this, x)) return;
	this->QWidget::tabletEvent(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
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
    virtual void valueChange() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(1696, (void*)this, x)) return;
	this->QDial::valueChange();
    }
    virtual void wheelEvent(QWheelEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(1693, (void*)this, x)) return;
	this->QDial::wheelEvent(x1);
    }
    virtual void windowActivationChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9804, (void*)this, x)) return;
	this->QWidget::windowActivationChange(x1);
    }
    ~x_QDial() {}
};
void xcall_QDial(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDial *xself = (x_QDial*)obj;
    switch(xi) {
	case 0: x_QDial::x_0(args);	break;
	case 1: x_QDial::x_1(args);	break;
	case 2: x_QDial::x_2(args);	break;
	case 3: x_QDial::x_3(args);	break;
	case 4: x_QDial::x_4(args);	break;
	case 5: x_QDial::x_5(args);	break;
	case 6: x_QDial::x_6(args);	break;
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
	case 49: delete (QDial*)xself;	break;
    }
}
