//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qsqlrecord.h>
#include <qstring.h>
#include <qsqlfield.h>
#include <qstringlist.h>

class x_QSqlRecord : public QSqlRecord {
public:
    static void x_0(Smoke::Stack x) {
	// QSqlRecord()
	x_QSqlRecord* xret = new x_QSqlRecord();
	x[0].s_class = (void*)xret;
    }
    x_QSqlRecord() : QSqlRecord() {
    }
    static void x_1(Smoke::Stack x) {
	// QSqlRecord(const QSqlRecord&)
	x_QSqlRecord* xret = new x_QSqlRecord(*(const QSqlRecord *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QSqlRecord(const QSqlRecord& x1) : QSqlRecord(x1) {
    }
    void x_2(Smoke::Stack x) {
	// operator=(const QSqlRecord&)
	QSqlRecord& xret = this->QSqlRecord::operator=(*(const QSqlRecord *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_3(Smoke::Stack x) const {
	// value(int)
	QVariant xret = this->QSqlRecord::value((int)x[1].s_int);
	x[0].s_class = (void*)new QVariant(xret);
    }
    void x_4(Smoke::Stack x) const {
	// value(const QString&)
	QVariant xret = this->QSqlRecord::value(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)new QVariant(xret);
    }
    void x_5(Smoke::Stack x) {
	// setValue(int, const QVariant&)
	this->QSqlRecord::setValue((int)x[1].s_int,*(const QVariant *)x[2].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_6(Smoke::Stack x) {
	// setValue(const QString&, const QVariant&)
	this->QSqlRecord::setValue(*(const QString *)x[1].s_voidp,*(const QVariant *)x[2].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_7(Smoke::Stack x) const {
	// isGenerated(int)
	bool xret = this->QSqlRecord::isGenerated((int)x[1].s_int);
	x[0].s_bool = xret;
    }
    void x_8(Smoke::Stack x) const {
	// isGenerated(const QString&)
	bool xret = this->QSqlRecord::isGenerated(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_9(Smoke::Stack x) {
	// setGenerated(const QString&, bool)
	this->QSqlRecord::setGenerated(*(const QString *)x[1].s_voidp,(bool)x[2].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_10(Smoke::Stack x) {
	// setGenerated(int, bool)
	this->QSqlRecord::setGenerated((int)x[1].s_int,(bool)x[2].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_11(Smoke::Stack x) {
	// setNull(int)
	this->QSqlRecord::setNull((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_12(Smoke::Stack x) {
	// setNull(const QString&)
	this->QSqlRecord::setNull(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) {
	// isNull(int)
	bool xret = this->QSqlRecord::isNull((int)x[1].s_int);
	x[0].s_bool = xret;
    }
    void x_14(Smoke::Stack x) {
	// isNull(const QString&)
	bool xret = this->QSqlRecord::isNull(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_15(Smoke::Stack x) const {
	// position(const QString&)
	int xret = this->QSqlRecord::position(*(const QString *)x[1].s_voidp);
	x[0].s_int = xret;
    }
    void x_16(Smoke::Stack x) const {
	// fieldName(int)
	QString xret = this->QSqlRecord::fieldName((int)x[1].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_17(Smoke::Stack x) {
	// field(int)
	QSqlField* xret = this->QSqlRecord::field((int)x[1].s_int);
	x[0].s_voidp = (void*)xret;
    }
    void x_18(Smoke::Stack x) {
	// field(const QString&)
	QSqlField* xret = this->QSqlRecord::field(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_19(Smoke::Stack x) const {
	// field(int)
	const QSqlField* xret = this->QSqlRecord::field((int)x[1].s_int);
	x[0].s_voidp = (void*)xret;
    }
    void x_20(Smoke::Stack x) const {
	// field(const QString&)
	const QSqlField* xret = this->QSqlRecord::field(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_21(Smoke::Stack x) {
	// append(const QSqlField&)
	this->QSqlRecord::append(*(const QSqlField *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_22(Smoke::Stack x) {
	// insert(int, const QSqlField&)
	this->QSqlRecord::insert((int)x[1].s_int,*(const QSqlField *)x[2].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_23(Smoke::Stack x) {
	// remove(int)
	this->QSqlRecord::remove((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_24(Smoke::Stack x) const {
	// isEmpty()
	bool xret = this->QSqlRecord::isEmpty();
	x[0].s_bool = xret;
    }
    void x_25(Smoke::Stack x) const {
	// contains(const QString&)
	bool xret = this->QSqlRecord::contains(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_26(Smoke::Stack x) {
	// clear()
	this->QSqlRecord::clear();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_27(Smoke::Stack x) {
	// clearValues(bool)
	this->QSqlRecord::clearValues((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_28(Smoke::Stack x) {
	// clearValues()
	this->QSqlRecord::clearValues();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_29(Smoke::Stack x) const {
	// count()
	uint xret = this->QSqlRecord::count();
	x[0].s_uint = xret;
    }
    void x_30(Smoke::Stack x) const {
	// toString(const QString&, const QString&)
	QString xret = this->QSqlRecord::toString(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_31(Smoke::Stack x) const {
	// toString(const QString&)
	QString xret = this->QSqlRecord::toString(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_32(Smoke::Stack x) const {
	// toString()
	QString xret = this->QSqlRecord::toString();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_33(Smoke::Stack x) const {
	// toStringList(const QString&)
	QStringList xret = this->QSqlRecord::toStringList(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_34(Smoke::Stack x) const {
	// toStringList()
	QStringList xret = this->QSqlRecord::toStringList();
	x[0].s_class = (void*)new QStringList(xret);
    }
    virtual void append(const QSqlField& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(7600, (void*)this, x)) return;
	this->QSqlRecord::append(x1);
    }
    virtual void clear() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(7605, (void*)this, x)) return;
	this->QSqlRecord::clear();
    }
    virtual void clearValues(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(7606, (void*)this, x)) return;
	this->QSqlRecord::clearValues(x1);
    }
    virtual void insert(int x1, const QSqlField& x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->callMethod(7601, (void*)this, x)) return;
	this->QSqlRecord::insert(x1, x2);
    }
    virtual void remove(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(7602, (void*)this, x)) return;
	this->QSqlRecord::remove(x1);
    }
    virtual void setGenerated(const QString& x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_bool = x2;
	if(qt_Smoke->callMethod(7588, (void*)this, x)) return;
	this->QSqlRecord::setGenerated(x1, x2);
    }
    virtual void setGenerated(int x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_bool = x2;
	if(qt_Smoke->callMethod(7589, (void*)this, x)) return;
	this->QSqlRecord::setGenerated(x1, x2);
    }
    virtual void setNull(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(7591, (void*)this, x)) return;
	this->QSqlRecord::setNull(x1);
    }
    virtual void setNull(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(7590, (void*)this, x)) return;
	this->QSqlRecord::setNull(x1);
    }
    virtual void setValue(const QString& x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->callMethod(7585, (void*)this, x)) return;
	this->QSqlRecord::setValue(x1, x2);
    }
    virtual void setValue(int x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->callMethod(7584, (void*)this, x)) return;
	this->QSqlRecord::setValue(x1, x2);
    }
    virtual QString toString(const QString& x1, const QString& x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->callMethod(7609, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlRecord::toString(x1, x2);
    }
    virtual QStringList toStringList(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(7612, (void*)this, x)) {
	    QStringList *xptr = (QStringList *)x[0].s_class;
	    QStringList xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlRecord::toStringList(x1);
    }
    virtual QVariant value(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(7583, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlRecord::value(x1);
    }
    virtual QVariant value(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(7582, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlRecord::value(x1);
    }
    ~x_QSqlRecord() {}
};
void xcall_QSqlRecord(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSqlRecord *xself = (x_QSqlRecord*)obj;
    switch(xi) {
	case 0: x_QSqlRecord::x_0(args);	break;
	case 1: x_QSqlRecord::x_1(args);	break;
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
	case 35: delete (QSqlRecord*)xself;	break;
    }
}
