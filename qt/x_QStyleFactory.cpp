//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qstylefactory.h>
#include <qstringlist.h>

class x_QStyleFactory : public QStyleFactory {
public:
    static void x_0(Smoke::Stack x) {
	// QStyleFactory()
	x_QStyleFactory* xret = new x_QStyleFactory();
	x[0].s_class = (void*)xret;
    }
    x_QStyleFactory() : QStyleFactory() {
    }
    static void x_1(Smoke::Stack x) {
	// keys()
	QStringList xret = QStyleFactory::keys();
	x[0].s_class = (void*)new QStringList(xret);
    }
    static void x_2(Smoke::Stack x) {
	// create(const QString&)
	QStyle* xret = QStyleFactory::create(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    ~x_QStyleFactory() {}
};
void xcall_QStyleFactory(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QStyleFactory *xself = (x_QStyleFactory*)obj;
    switch(xi) {
	case 0: x_QStyleFactory::x_0(args);	break;
	case 1: x_QStyleFactory::x_1(args);	break;
	case 2: x_QStyleFactory::x_2(args);	break;
	case 3: delete (QStyleFactory*)xself;	break;
    }
}
