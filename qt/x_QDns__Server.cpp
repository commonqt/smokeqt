//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qglobal.h>
#include <qdns.h>
#include <qstring.h>

class x_QDns__Server : public QDns::Server {
public:
    static void x_0(Smoke::Stack x) {
	// Server(const QString&, Q_UINT16, Q_UINT16, Q_UINT16)
	x_QDns__Server* xret = new x_QDns__Server(*(const QString *)x[1].s_class,*(Q_UINT16 *)x[2].s_class,*(Q_UINT16 *)x[3].s_class,*(Q_UINT16 *)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDns__Server(const QString& x1, Q_UINT16 x2, Q_UINT16 x3, Q_UINT16 x4) : QDns::Server(x1, x2, x3, x4) {
    }
    static void x_1(Smoke::Stack x) {
	// Server(const QString&, Q_UINT16, Q_UINT16)
	x_QDns__Server* xret = new x_QDns__Server(*(const QString *)x[1].s_class,*(Q_UINT16 *)x[2].s_class,*(Q_UINT16 *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDns__Server(const QString& x1, Q_UINT16 x2, Q_UINT16 x3) : QDns::Server(x1, x2, x3) {
    }
    static void x_2(Smoke::Stack x) {
	// Server(const QString&, Q_UINT16)
	x_QDns__Server* xret = new x_QDns__Server(*(const QString *)x[1].s_class,*(Q_UINT16 *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDns__Server(const QString& x1, Q_UINT16 x2) : QDns::Server(x1, x2) {
    }
    static void x_3(Smoke::Stack x) {
	// Server(const QString&)
	x_QDns__Server* xret = new x_QDns__Server(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDns__Server(const QString& x1) : QDns::Server(x1) {
    }
    static void x_4(Smoke::Stack x) {
	// Server()
	x_QDns__Server* xret = new x_QDns__Server();
	x[0].s_class = (void*)xret;
    }
    x_QDns__Server() : QDns::Server() {
    }
    ~x_QDns__Server() {}
};
void xcall_QDns__Server(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDns__Server *xself = (x_QDns__Server*)obj;
    switch(xi) {
	case 0: x_QDns__Server::x_0(args);	break;
	case 1: x_QDns__Server::x_1(args);	break;
	case 2: x_QDns__Server::x_2(args);	break;
	case 3: x_QDns__Server::x_3(args);	break;
	case 4: x_QDns__Server::x_4(args);	break;
	case 5: delete (QDns::Server*)xself;	break;
    }
}
