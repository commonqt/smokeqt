//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qstrlist.h>
#include <qstringlist.h>
#include <qregexp.h>

class x_QStringList : public QStringList {
public:
    static void x_0(Smoke::Stack x) {
	// QStringList()
	x_QStringList* xret = new x_QStringList();
	x[0].s_class = (void*)xret;
    }
    x_QStringList() : QStringList() {
    }
    static void x_1(Smoke::Stack x) {
	// QStringList(const QStringList&)
	x_QStringList* xret = new x_QStringList(*(const QStringList *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStringList(const QStringList& x1) : QStringList(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QStringList(const QValueList<QString>&)
	x_QStringList* xret = new x_QStringList(*(const QValueList<QString> *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStringList(const QValueList<QString>& x1) : QStringList(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QStringList(const QString&)
	x_QStringList* xret = new x_QStringList(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStringList(const QString& x1) : QStringList(x1) {
    }
    static void x_4(Smoke::Stack x) {
	// QStringList(const char*)
	x_QStringList* xret = new x_QStringList((const char*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStringList(const char* x1) : QStringList(x1) {
    }
    void x_5(Smoke::Stack x) {
	// sort()
	this->QStringList::sort();
    }
    void x_6(Smoke::Stack x) const {
	// join(const QString&)
	QString xret = this->QStringList::join(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_7(Smoke::Stack x) const {
	// grep(const QString&, bool)
	QStringList xret = this->QStringList::grep(*(const QString *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_8(Smoke::Stack x) const {
	// grep(const QString&)
	QStringList xret = this->QStringList::grep(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_9(Smoke::Stack x) const {
	// grep(const QRegExp&)
	QStringList xret = this->QStringList::grep(*(const QRegExp *)x[1].s_class);
	x[0].s_class = (void*)new QStringList(xret);
    }
    static void x_10(Smoke::Stack x) {
	// fromStrList(const QStrList&)
	QStringList xret = QStringList::fromStrList(*(const QStrList *)x[1].s_class);
	x[0].s_class = (void*)new QStringList(xret);
    }
    static void x_11(Smoke::Stack x) {
	// split(const QString&, const QString&, bool)
	QStringList xret = QStringList::split(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(bool)x[3].s_bool);
	x[0].s_class = (void*)new QStringList(xret);
    }
    static void x_12(Smoke::Stack x) {
	// split(const QString&, const QString&)
	QStringList xret = QStringList::split(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)new QStringList(xret);
    }
    static void x_13(Smoke::Stack x) {
	// split(const QChar&, const QString&, bool)
	QStringList xret = QStringList::split(*(const QChar *)x[1].s_class,*(const QString *)x[2].s_class,(bool)x[3].s_bool);
	x[0].s_class = (void*)new QStringList(xret);
    }
    static void x_14(Smoke::Stack x) {
	// split(const QChar&, const QString&)
	QStringList xret = QStringList::split(*(const QChar *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)new QStringList(xret);
    }
    static void x_15(Smoke::Stack x) {
	// split(const QRegExp&, const QString&, bool)
	QStringList xret = QStringList::split(*(const QRegExp *)x[1].s_class,*(const QString *)x[2].s_class,(bool)x[3].s_bool);
	x[0].s_class = (void*)new QStringList(xret);
    }
    static void x_16(Smoke::Stack x) {
	// split(const QRegExp&, const QString&)
	QStringList xret = QStringList::split(*(const QRegExp *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)new QStringList(xret);
    }
    ~x_QStringList() {}
};
void xcall_QStringList(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QStringList *xself = (x_QStringList*)obj;
    switch(xi) {
	case 0: x_QStringList::x_0(args);	break;
	case 1: x_QStringList::x_1(args);	break;
	case 2: x_QStringList::x_2(args);	break;
	case 3: x_QStringList::x_3(args);	break;
	case 4: x_QStringList::x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: x_QStringList::x_10(args);	break;
	case 11: x_QStringList::x_11(args);	break;
	case 12: x_QStringList::x_12(args);	break;
	case 13: x_QStringList::x_13(args);	break;
	case 14: x_QStringList::x_14(args);	break;
	case 15: x_QStringList::x_15(args);	break;
	case 16: x_QStringList::x_16(args);	break;
	case 17: delete (QStringList*)xself;	break;
    }
}
