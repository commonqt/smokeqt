//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qnamespace.h>
#include <qstring.h>
#include <qdatetime.h>

class x_QTime : public QTime {
public:
    static void x_0(Smoke::Stack x) {
	// QTime()
	x_QTime* xret = new x_QTime();
	x[0].s_class = (void*)xret;
    }
    x_QTime() : QTime() {
    }
    static void x_1(Smoke::Stack x) {
	// QTime(int, int, int, int)
	x_QTime* xret = new x_QTime((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QTime(int x1, int x2, int x3, int x4) : QTime(x1, x2, x3, x4) {
    }
    static void x_2(Smoke::Stack x) {
	// QTime(int, int, int)
	x_QTime* xret = new x_QTime((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QTime(int x1, int x2, int x3) : QTime(x1, x2, x3) {
    }
    static void x_3(Smoke::Stack x) {
	// QTime(int, int)
	x_QTime* xret = new x_QTime((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QTime(int x1, int x2) : QTime(x1, x2) {
    }
    void x_4(Smoke::Stack x) const {
	// isNull()
	bool xret = this->QTime::isNull();
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) const {
	// isValid()
	bool xret = this->QTime::isValid();
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) const {
	// hour()
	int xret = this->QTime::hour();
	x[0].s_int = xret;
    }
    void x_7(Smoke::Stack x) const {
	// minute()
	int xret = this->QTime::minute();
	x[0].s_int = xret;
    }
    void x_8(Smoke::Stack x) const {
	// second()
	int xret = this->QTime::second();
	x[0].s_int = xret;
    }
    void x_9(Smoke::Stack x) const {
	// msec()
	int xret = this->QTime::msec();
	x[0].s_int = xret;
    }
    void x_10(Smoke::Stack x) const {
	// toString(Qt::DateFormat)
	QString xret = this->QTime::toString((Qt::DateFormat)x[1].s_enum);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_11(Smoke::Stack x) const {
	// toString()
	QString xret = this->QTime::toString();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_12(Smoke::Stack x) const {
	// toString(const QString&)
	QString xret = this->QTime::toString(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_13(Smoke::Stack x) {
	// setHMS(int, int, int, int)
	bool xret = this->QTime::setHMS((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_bool = xret;
    }
    void x_14(Smoke::Stack x) {
	// setHMS(int, int, int)
	bool xret = this->QTime::setHMS((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_bool = xret;
    }
    void x_15(Smoke::Stack x) const {
	// addSecs(int)
	QTime xret = this->QTime::addSecs((int)x[1].s_int);
	x[0].s_class = (void*)new QTime(xret);
    }
    void x_16(Smoke::Stack x) const {
	// secsTo(const QTime&)
	int xret = this->QTime::secsTo(*(const QTime *)x[1].s_voidp);
	x[0].s_int = xret;
    }
    void x_17(Smoke::Stack x) const {
	// addMSecs(int)
	QTime xret = this->QTime::addMSecs((int)x[1].s_int);
	x[0].s_class = (void*)new QTime(xret);
    }
    void x_18(Smoke::Stack x) const {
	// msecsTo(const QTime&)
	int xret = this->QTime::msecsTo(*(const QTime *)x[1].s_voidp);
	x[0].s_int = xret;
    }
    void x_19(Smoke::Stack x) const {
	// operator==(const QTime&)
	bool xret = this->QTime::operator==(*(const QTime *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_20(Smoke::Stack x) const {
	// operator!=(const QTime&)
	bool xret = this->QTime::operator!=(*(const QTime *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_21(Smoke::Stack x) const {
	// operator<(const QTime&)
	bool xret = this->QTime::operator<(*(const QTime *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_22(Smoke::Stack x) const {
	// operator<=(const QTime&)
	bool xret = this->QTime::operator<=(*(const QTime *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_23(Smoke::Stack x) const {
	// operator>(const QTime&)
	bool xret = this->QTime::operator>(*(const QTime *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_24(Smoke::Stack x) const {
	// operator>=(const QTime&)
	bool xret = this->QTime::operator>=(*(const QTime *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_25(Smoke::Stack x) {
	// start()
	this->QTime::start();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) {
	// restart()
	int xret = this->QTime::restart();
	x[0].s_int = xret;
    }
    void x_27(Smoke::Stack x) const {
	// elapsed()
	int xret = this->QTime::elapsed();
	x[0].s_int = xret;
    }
    static void x_28(Smoke::Stack x) {
	// currentTime()
	QTime xret = QTime::currentTime();
	x[0].s_class = (void*)new QTime(xret);
    }
    static void x_29(Smoke::Stack x) {
	// fromString(const QString&, Qt::DateFormat)
	QTime xret = QTime::fromString(*(const QString *)x[1].s_voidp,(Qt::DateFormat)x[2].s_enum);
	x[0].s_class = (void*)new QTime(xret);
    }
    static void x_30(Smoke::Stack x) {
	// fromString(const QString&)
	QTime xret = QTime::fromString(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)new QTime(xret);
    }
    static void x_31(Smoke::Stack x) {
	// isValid(int, int, int, int)
	bool xret = QTime::isValid((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_bool = xret;
    }
    static void x_32(Smoke::Stack x) {
	// isValid(int, int, int)
	bool xret = QTime::isValid((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_bool = xret;
    }
    ~x_QTime() {}
};
void xcall_QTime(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTime *xself = (x_QTime*)obj;
    switch(xi) {
	case 0: x_QTime::x_0(args);	break;
	case 1: x_QTime::x_1(args);	break;
	case 2: x_QTime::x_2(args);	break;
	case 3: x_QTime::x_3(args);	break;
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
	case 28: x_QTime::x_28(args);	break;
	case 29: x_QTime::x_29(args);	break;
	case 30: x_QTime::x_30(args);	break;
	case 31: x_QTime::x_31(args);	break;
	case 32: x_QTime::x_32(args);	break;
	case 33: delete (QTime*)xself;	break;
    }
}
