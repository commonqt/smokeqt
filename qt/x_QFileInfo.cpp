//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qfile.h>
#include <qdir.h>
#include <qfileinfo.h>
#include <qstring.h>
#include <qdatetime.h>

class x_QFileInfo : public QFileInfo {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QFileInfo::ReadUser;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QFileInfo::WriteUser;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QFileInfo::ExeUser;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QFileInfo::ReadGroup;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QFileInfo::WriteGroup;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QFileInfo::ExeGroup;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_enum = (long)QFileInfo::ReadOther;
    }
    static void x_7(Smoke::Stack x) {
	x[0].s_enum = (long)QFileInfo::WriteOther;
    }
    static void x_8(Smoke::Stack x) {
	x[0].s_enum = (long)QFileInfo::ExeOther;
    }
    static void x_9(Smoke::Stack x) {
	// QFileInfo()
	x_QFileInfo* xret = new x_QFileInfo();
	x[0].s_class = (void*)xret;
    }
    x_QFileInfo() : QFileInfo() {
    }
    static void x_10(Smoke::Stack x) {
	// QFileInfo(const QString&)
	x_QFileInfo* xret = new x_QFileInfo(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QFileInfo(const QString& x1) : QFileInfo(x1) {
    }
    static void x_11(Smoke::Stack x) {
	// QFileInfo(const QFile&)
	x_QFileInfo* xret = new x_QFileInfo(*(const QFile *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QFileInfo(const QFile& x1) : QFileInfo(x1) {
    }
    static void x_12(Smoke::Stack x) {
	// QFileInfo(const QDir&, const QString&)
	x_QFileInfo* xret = new x_QFileInfo(*(const QDir *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QFileInfo(const QDir& x1, const QString& x2) : QFileInfo(x1, x2) {
    }
    static void x_13(Smoke::Stack x) {
	// QFileInfo(const QFileInfo&)
	x_QFileInfo* xret = new x_QFileInfo(*(const QFileInfo *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QFileInfo(const QFileInfo& x1) : QFileInfo(x1) {
    }
    void x_14(Smoke::Stack x) {
	// operator=(const QFileInfo&)
	QFileInfo& xret = this->QFileInfo::operator=(*(const QFileInfo *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_15(Smoke::Stack x) {
	// setFile(const QString&)
	this->QFileInfo::setFile(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_16(Smoke::Stack x) {
	// setFile(const QFile&)
	this->QFileInfo::setFile(*(const QFile *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_17(Smoke::Stack x) {
	// setFile(const QDir&, const QString&)
	this->QFileInfo::setFile(*(const QDir *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_18(Smoke::Stack x) const {
	// exists()
	bool xret = this->QFileInfo::exists();
	x[0].s_bool = xret;
    }
    void x_19(Smoke::Stack x) const {
	// refresh()
	this->QFileInfo::refresh();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_20(Smoke::Stack x) const {
	// caching()
	bool xret = this->QFileInfo::caching();
	x[0].s_bool = xret;
    }
    void x_21(Smoke::Stack x) {
	// setCaching(bool)
	this->QFileInfo::setCaching((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_22(Smoke::Stack x) const {
	// filePath()
	QString xret = this->QFileInfo::filePath();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_23(Smoke::Stack x) const {
	// fileName()
	QString xret = this->QFileInfo::fileName();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_24(Smoke::Stack x) const {
	// absFilePath()
	QString xret = this->QFileInfo::absFilePath();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_25(Smoke::Stack x) const {
	// baseName(bool)
	QString xret = this->QFileInfo::baseName((bool)x[1].s_bool);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_26(Smoke::Stack x) const {
	// baseName()
	QString xret = this->QFileInfo::baseName();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_27(Smoke::Stack x) const {
	// extension(bool)
	QString xret = this->QFileInfo::extension((bool)x[1].s_bool);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_28(Smoke::Stack x) const {
	// extension()
	QString xret = this->QFileInfo::extension();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_29(Smoke::Stack x) const {
	// dirPath(bool)
	QString xret = this->QFileInfo::dirPath((bool)x[1].s_bool);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_30(Smoke::Stack x) const {
	// dirPath()
	QString xret = this->QFileInfo::dirPath();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_31(Smoke::Stack x) const {
	// dir(bool)
	QDir xret = this->QFileInfo::dir((bool)x[1].s_bool);
	x[0].s_class = (void*)new QDir(xret);
    }
    void x_32(Smoke::Stack x) const {
	// dir()
	QDir xret = this->QFileInfo::dir();
	x[0].s_class = (void*)new QDir(xret);
    }
    void x_33(Smoke::Stack x) const {
	// isReadable()
	bool xret = this->QFileInfo::isReadable();
	x[0].s_bool = xret;
    }
    void x_34(Smoke::Stack x) const {
	// isWritable()
	bool xret = this->QFileInfo::isWritable();
	x[0].s_bool = xret;
    }
    void x_35(Smoke::Stack x) const {
	// isExecutable()
	bool xret = this->QFileInfo::isExecutable();
	x[0].s_bool = xret;
    }
    void x_36(Smoke::Stack x) const {
	// isRelative()
	bool xret = this->QFileInfo::isRelative();
	x[0].s_bool = xret;
    }
    void x_37(Smoke::Stack x) {
	// convertToAbs()
	bool xret = this->QFileInfo::convertToAbs();
	x[0].s_bool = xret;
    }
    void x_38(Smoke::Stack x) const {
	// isFile()
	bool xret = this->QFileInfo::isFile();
	x[0].s_bool = xret;
    }
    void x_39(Smoke::Stack x) const {
	// isDir()
	bool xret = this->QFileInfo::isDir();
	x[0].s_bool = xret;
    }
    void x_40(Smoke::Stack x) const {
	// isSymLink()
	bool xret = this->QFileInfo::isSymLink();
	x[0].s_bool = xret;
    }
    void x_41(Smoke::Stack x) const {
	// readLink()
	QString xret = this->QFileInfo::readLink();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_42(Smoke::Stack x) const {
	// owner()
	QString xret = this->QFileInfo::owner();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_43(Smoke::Stack x) const {
	// ownerId()
	uint xret = this->QFileInfo::ownerId();
	x[0].s_uint = xret;
    }
    void x_44(Smoke::Stack x) const {
	// group()
	QString xret = this->QFileInfo::group();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_45(Smoke::Stack x) const {
	// groupId()
	uint xret = this->QFileInfo::groupId();
	x[0].s_uint = xret;
    }
    void x_46(Smoke::Stack x) const {
	// permission(int)
	bool xret = this->QFileInfo::permission((int)x[1].s_int);
	x[0].s_bool = xret;
    }
    void x_47(Smoke::Stack x) const {
	// size()
	uint xret = this->QFileInfo::size();
	x[0].s_uint = xret;
    }
    void x_48(Smoke::Stack x) const {
	// created()
	QDateTime xret = this->QFileInfo::created();
	x[0].s_class = (void*)new QDateTime(xret);
    }
    void x_49(Smoke::Stack x) const {
	// lastModified()
	QDateTime xret = this->QFileInfo::lastModified();
	x[0].s_class = (void*)new QDateTime(xret);
    }
    void x_50(Smoke::Stack x) const {
	// lastRead()
	QDateTime xret = this->QFileInfo::lastRead();
	x[0].s_class = (void*)new QDateTime(xret);
    }
    ~x_QFileInfo() {}
};
void xcall_QFileInfo(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QFileInfo *xself = (x_QFileInfo*)obj;
    switch(xi) {
	case 0: x_QFileInfo::x_0(args);	break;
	case 1: x_QFileInfo::x_1(args);	break;
	case 2: x_QFileInfo::x_2(args);	break;
	case 3: x_QFileInfo::x_3(args);	break;
	case 4: x_QFileInfo::x_4(args);	break;
	case 5: x_QFileInfo::x_5(args);	break;
	case 6: x_QFileInfo::x_6(args);	break;
	case 7: x_QFileInfo::x_7(args);	break;
	case 8: x_QFileInfo::x_8(args);	break;
	case 9: x_QFileInfo::x_9(args);	break;
	case 10: x_QFileInfo::x_10(args);	break;
	case 11: x_QFileInfo::x_11(args);	break;
	case 12: x_QFileInfo::x_12(args);	break;
	case 13: x_QFileInfo::x_13(args);	break;
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
	case 51: delete (QFileInfo*)xself;	break;
    }
}
