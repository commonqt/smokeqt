//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qurlinfo.h>
#include <qurl.h>
#include <qstring.h>
#include <qdatetime.h>
#include <qurloperator.h>

class x_QUrlInfo : public QUrlInfo {
public:
    static void x_0(Smoke::Stack x) {
	// QUrlInfo()
	x_QUrlInfo* xret = new x_QUrlInfo();
	x[0].s_class = (void*)xret;
    }
    x_QUrlInfo() : QUrlInfo() {
    }
    static void x_1(Smoke::Stack x) {
	// QUrlInfo(const QUrlOperator&, const QString&)
	x_QUrlInfo* xret = new x_QUrlInfo(*(const QUrlOperator *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QUrlInfo(const QUrlOperator& x1, const QString& x2) : QUrlInfo(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QUrlInfo(const QUrlInfo&)
	x_QUrlInfo* xret = new x_QUrlInfo(*(const QUrlInfo *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QUrlInfo(const QUrlInfo& x1) : QUrlInfo(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QUrlInfo(const QString&, int, const QString&, const QString&, uint, const QDateTime&, const QDateTime&, bool, bool, bool, bool, bool, bool)
	x_QUrlInfo* xret = new x_QUrlInfo(*(const QString *)x[1].s_voidp,(int)x[2].s_int,*(const QString *)x[3].s_voidp,*(const QString *)x[4].s_voidp,(uint)x[5].s_uint,*(const QDateTime *)x[6].s_voidp,*(const QDateTime *)x[7].s_voidp,(bool)x[8].s_bool,(bool)x[9].s_bool,(bool)x[10].s_bool,(bool)x[11].s_bool,(bool)x[12].s_bool,(bool)x[13].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QUrlInfo(const QString& x1, int x2, const QString& x3, const QString& x4, uint x5, const QDateTime& x6, const QDateTime& x7, bool x8, bool x9, bool x10, bool x11, bool x12, bool x13) : QUrlInfo(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13) {
    }
    static void x_4(Smoke::Stack x) {
	// QUrlInfo(const QUrl&, int, const QString&, const QString&, uint, const QDateTime&, const QDateTime&, bool, bool, bool, bool, bool, bool)
	x_QUrlInfo* xret = new x_QUrlInfo(*(const QUrl *)x[1].s_voidp,(int)x[2].s_int,*(const QString *)x[3].s_voidp,*(const QString *)x[4].s_voidp,(uint)x[5].s_uint,*(const QDateTime *)x[6].s_voidp,*(const QDateTime *)x[7].s_voidp,(bool)x[8].s_bool,(bool)x[9].s_bool,(bool)x[10].s_bool,(bool)x[11].s_bool,(bool)x[12].s_bool,(bool)x[13].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QUrlInfo(const QUrl& x1, int x2, const QString& x3, const QString& x4, uint x5, const QDateTime& x6, const QDateTime& x7, bool x8, bool x9, bool x10, bool x11, bool x12, bool x13) : QUrlInfo(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13) {
    }
    void x_5(Smoke::Stack x) {
	// operator=(const QUrlInfo&)
	QUrlInfo& xret = this->QUrlInfo::operator=(*(const QUrlInfo *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_6(Smoke::Stack x) {
	// setName(const QString&)
	this->QUrlInfo::setName(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_7(Smoke::Stack x) {
	// setDir(bool)
	this->QUrlInfo::setDir((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_8(Smoke::Stack x) {
	// setFile(bool)
	this->QUrlInfo::setFile((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_9(Smoke::Stack x) {
	// setSymLink(bool)
	this->QUrlInfo::setSymLink((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_10(Smoke::Stack x) {
	// setOwner(const QString&)
	this->QUrlInfo::setOwner(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_11(Smoke::Stack x) {
	// setGroup(const QString&)
	this->QUrlInfo::setGroup(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_12(Smoke::Stack x) {
	// setSize(uint)
	this->QUrlInfo::setSize((uint)x[1].s_uint);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) {
	// setWritable(bool)
	this->QUrlInfo::setWritable((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_14(Smoke::Stack x) {
	// setReadable(bool)
	this->QUrlInfo::setReadable((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_15(Smoke::Stack x) {
	// setPermissions(int)
	this->QUrlInfo::setPermissions((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_16(Smoke::Stack x) {
	// setLastModified(const QDateTime&)
	this->QUrlInfo::setLastModified(*(const QDateTime *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_17(Smoke::Stack x) const {
	// isValid()
	bool xret = this->QUrlInfo::isValid();
	x[0].s_bool = xret;
    }
    void x_18(Smoke::Stack x) const {
	// name()
	QString xret = this->QUrlInfo::name();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_19(Smoke::Stack x) const {
	// permissions()
	int xret = this->QUrlInfo::permissions();
	x[0].s_int = xret;
    }
    void x_20(Smoke::Stack x) const {
	// owner()
	QString xret = this->QUrlInfo::owner();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_21(Smoke::Stack x) const {
	// group()
	QString xret = this->QUrlInfo::group();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_22(Smoke::Stack x) const {
	// size()
	uint xret = this->QUrlInfo::size();
	x[0].s_uint = xret;
    }
    void x_23(Smoke::Stack x) const {
	// lastModified()
	QDateTime xret = this->QUrlInfo::lastModified();
	x[0].s_class = (void*)new QDateTime(xret);
    }
    void x_24(Smoke::Stack x) const {
	// lastRead()
	QDateTime xret = this->QUrlInfo::lastRead();
	x[0].s_class = (void*)new QDateTime(xret);
    }
    void x_25(Smoke::Stack x) const {
	// isDir()
	bool xret = this->QUrlInfo::isDir();
	x[0].s_bool = xret;
    }
    void x_26(Smoke::Stack x) const {
	// isFile()
	bool xret = this->QUrlInfo::isFile();
	x[0].s_bool = xret;
    }
    void x_27(Smoke::Stack x) const {
	// isSymLink()
	bool xret = this->QUrlInfo::isSymLink();
	x[0].s_bool = xret;
    }
    void x_28(Smoke::Stack x) const {
	// isWritable()
	bool xret = this->QUrlInfo::isWritable();
	x[0].s_bool = xret;
    }
    void x_29(Smoke::Stack x) const {
	// isReadable()
	bool xret = this->QUrlInfo::isReadable();
	x[0].s_bool = xret;
    }
    void x_30(Smoke::Stack x) const {
	// isExecutable()
	bool xret = this->QUrlInfo::isExecutable();
	x[0].s_bool = xret;
    }
    void x_31(Smoke::Stack x) const {
	// operator==(const QUrlInfo&)
	bool xret = this->QUrlInfo::operator==(*(const QUrlInfo *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    static void x_32(Smoke::Stack x) {
	// greaterThan(const QUrlInfo&, const QUrlInfo&, int)
	bool xret = QUrlInfo::greaterThan(*(const QUrlInfo *)x[1].s_voidp,*(const QUrlInfo *)x[2].s_voidp,(int)x[3].s_int);
	x[0].s_bool = xret;
    }
    static void x_33(Smoke::Stack x) {
	// lessThan(const QUrlInfo&, const QUrlInfo&, int)
	bool xret = QUrlInfo::lessThan(*(const QUrlInfo *)x[1].s_voidp,*(const QUrlInfo *)x[2].s_voidp,(int)x[3].s_int);
	x[0].s_bool = xret;
    }
    static void x_34(Smoke::Stack x) {
	// equal(const QUrlInfo&, const QUrlInfo&, int)
	bool xret = QUrlInfo::equal(*(const QUrlInfo *)x[1].s_voidp,*(const QUrlInfo *)x[2].s_voidp,(int)x[3].s_int);
	x[0].s_bool = xret;
    }
    virtual void setDir(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9201, (void*)this, x)) return;
	this->QUrlInfo::setDir(x1);
    }
    virtual void setFile(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9202, (void*)this, x)) return;
	this->QUrlInfo::setFile(x1);
    }
    virtual void setGroup(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9205, (void*)this, x)) return;
	this->QUrlInfo::setGroup(x1);
    }
    virtual void setLastModified(const QDateTime& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9210, (void*)this, x)) return;
	this->QUrlInfo::setLastModified(x1);
    }
    virtual void setName(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9200, (void*)this, x)) return;
	this->QUrlInfo::setName(x1);
    }
    virtual void setOwner(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9204, (void*)this, x)) return;
	this->QUrlInfo::setOwner(x1);
    }
    virtual void setPermissions(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->callMethod(9209, (void*)this, x)) return;
	this->QUrlInfo::setPermissions(x1);
    }
    virtual void setReadable(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9208, (void*)this, x)) return;
	this->QUrlInfo::setReadable(x1);
    }
    virtual void setSize(uint x1) {
	Smoke::StackItem x[2];
	x[1].s_uint = x1;
	if(qt_Smoke->callMethod(9206, (void*)this, x)) return;
	this->QUrlInfo::setSize(x1);
    }
    virtual void setSymLink(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9203, (void*)this, x)) return;
	this->QUrlInfo::setSymLink(x1);
    }
    virtual void setWritable(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->callMethod(9207, (void*)this, x)) return;
	this->QUrlInfo::setWritable(x1);
    }
    ~x_QUrlInfo() {}
};
void xcall_QUrlInfo(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QUrlInfo *xself = (x_QUrlInfo*)obj;
    switch(xi) {
	case 0: x_QUrlInfo::x_0(args);	break;
	case 1: x_QUrlInfo::x_1(args);	break;
	case 2: x_QUrlInfo::x_2(args);	break;
	case 3: x_QUrlInfo::x_3(args);	break;
	case 4: x_QUrlInfo::x_4(args);	break;
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
	case 32: x_QUrlInfo::x_32(args);	break;
	case 33: x_QUrlInfo::x_33(args);	break;
	case 34: x_QUrlInfo::x_34(args);	break;
	case 35: delete (QUrlInfo*)xself;	break;
    }
}
