//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qsqlrecord.h>
#include <qstring.h>
#include <qsqlfield.h>

class x_QSqlRecordInfo : public QSqlRecordInfo {
public:
    static void x_0(Smoke::Stack x) {
	// QSqlRecordInfo()
	x_QSqlRecordInfo* xret = new x_QSqlRecordInfo();
	x[0].s_class = (void*)xret;
    }
    x_QSqlRecordInfo() : QSqlRecordInfo() {
    }
    static void x_1(Smoke::Stack x) {
	// QSqlRecordInfo(const QSqlFieldInfoList&)
	x_QSqlRecordInfo* xret = new x_QSqlRecordInfo(*(const QSqlFieldInfoList *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlRecordInfo(const QSqlFieldInfoList& x1) : QSqlRecordInfo(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QSqlRecordInfo(const QSqlRecord&)
	x_QSqlRecordInfo* xret = new x_QSqlRecordInfo(*(const QSqlRecord *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlRecordInfo(const QSqlRecord& x1) : QSqlRecordInfo(x1) {
    }
    void x_3(Smoke::Stack x) const {
	// contains(const QString&)
	size_type xret = this->QSqlRecordInfo::contains(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new size_type(xret);
    }
    void x_4(Smoke::Stack x) const {
	// find(const QString&)
	QSqlFieldInfo xret = this->QSqlRecordInfo::find(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QSqlFieldInfo(xret);
    }
    void x_5(Smoke::Stack x) const {
	// toRecord()
	QSqlRecord xret = this->QSqlRecordInfo::toRecord();
	x[0].s_class = (void*)new QSqlRecord(xret);
    }
    ~x_QSqlRecordInfo() {}
};
void xcall_QSqlRecordInfo(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSqlRecordInfo *xself = (x_QSqlRecordInfo*)obj;
    switch(xi) {
	case 0: x_QSqlRecordInfo::x_0(args);	break;
	case 1: x_QSqlRecordInfo::x_1(args);	break;
	case 2: x_QSqlRecordInfo::x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: delete (QSqlRecordInfo*)xself;	break;
    }
}
