//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qmetaobject.h>

class x_QMetaObjectCleanUp : public QMetaObjectCleanUp {
public:
    static void x_0(Smoke::Stack x) {
	// QMetaObjectCleanUp()
	x_QMetaObjectCleanUp* xret = new x_QMetaObjectCleanUp();
	x[0].s_class = (void*)xret;
    }
    x_QMetaObjectCleanUp() : QMetaObjectCleanUp() {
    }
    void x_1(Smoke::Stack x) {
	// setMetaObject(QMetaObject*&)
	this->QMetaObjectCleanUp::setMetaObject(*(QMetaObject* *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    ~x_QMetaObjectCleanUp() {}
};
void xcall_QMetaObjectCleanUp(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QMetaObjectCleanUp *xself = (x_QMetaObjectCleanUp*)obj;
    switch(xi) {
	case 0: x_QMetaObjectCleanUp::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: delete (QMetaObjectCleanUp*)xself;	break;
    }
}
