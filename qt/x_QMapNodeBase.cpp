//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qmap.h>

class x_QMapNodeBase : public QMapNodeBase {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QMapNodeBase::Red;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QMapNodeBase::Black;
    }
    void x_2(Smoke::Stack x) {
	// minimum()
	QMapNodeBase* xret = this->QMapNodeBase::minimum();
	x[0].s_class = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// maximum()
	QMapNodeBase* xret = this->QMapNodeBase::maximum();
	x[0].s_class = (void*)xret;
    }
    static void x_4(Smoke::Stack x) {
	// QMapNodeBase()
	x_QMapNodeBase* xret = new x_QMapNodeBase();
	x[0].s_class = (void*)xret;
    }
    x_QMapNodeBase() : QMapNodeBase() {
    }
    static void x_5(Smoke::Stack x) {
	// QMapNodeBase(QMapNodeBase&)
	x_QMapNodeBase* xret = new x_QMapNodeBase(*(QMapNodeBase *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QMapNodeBase(QMapNodeBase& x1) : QMapNodeBase(x1) {
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 404: //QMapNodeBase::Color
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QMapNodeBase::Color;
		break;
	      case Smoke::EnumDelete:
		delete (QMapNodeBase::Color*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QMapNodeBase::Color*)xdata = (QMapNodeBase::Color)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QMapNodeBase::Color*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QMapNodeBase() { qt_Smoke->binding->deleted(188, (void*)this); }
};
void xenum_QMapNodeBase(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QMapNodeBase::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QMapNodeBase(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QMapNodeBase *xself = (x_QMapNodeBase*)obj;
    switch(xi) {
	case 0: x_QMapNodeBase::x_0(args);	break;
	case 1: x_QMapNodeBase::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: x_QMapNodeBase::x_4(args);	break;
	case 5: x_QMapNodeBase::x_5(args);	break;
	case 6: delete (QMapNodeBase*)xself;	break;
    }
}
