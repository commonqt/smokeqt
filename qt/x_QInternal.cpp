//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qnamespace.h>

class x_QInternal : public QInternal {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QInternal::UndefinedDevice;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QInternal::Widget;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QInternal::Pixmap;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QInternal::Printer;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QInternal::Picture;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QInternal::System;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_enum = (long)QInternal::DeviceTypeMask;
    }
    static void x_7(Smoke::Stack x) {
	x[0].s_enum = (long)QInternal::ExternalDevice;
    }
    static void x_8(Smoke::Stack x) {
	x[0].s_enum = (long)QInternal::CompatibilityMode;
    }
    static void x_9(Smoke::Stack x) {
	// QInternal()
	x_QInternal* xret = new x_QInternal();
	x[0].s_class = (void*)xret;
    }
    x_QInternal() : QInternal() {
    }
    static void x_10(Smoke::Stack x) {
	// QInternal(QInternal&)
	x_QInternal* xret = new x_QInternal(*(QInternal *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QInternal(QInternal& x1) : QInternal(x1) {
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 355: //QInternal::PaintDeviceFlags
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QInternal::PaintDeviceFlags;
		break;
	      case Smoke::EnumDelete:
		delete (QInternal::PaintDeviceFlags*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QInternal::PaintDeviceFlags*)xdata = (QInternal::PaintDeviceFlags)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QInternal::PaintDeviceFlags*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QInternal() { qt_Smoke->binding->deleted(166, (void*)this); }
};
void xenum_QInternal(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QInternal::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QInternal(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QInternal *xself = (x_QInternal*)obj;
    switch(xi) {
	case 0: x_QInternal::x_0(args);	break;
	case 1: x_QInternal::x_1(args);	break;
	case 2: x_QInternal::x_2(args);	break;
	case 3: x_QInternal::x_3(args);	break;
	case 4: x_QInternal::x_4(args);	break;
	case 5: x_QInternal::x_5(args);	break;
	case 6: x_QInternal::x_6(args);	break;
	case 7: x_QInternal::x_7(args);	break;
	case 8: x_QInternal::x_8(args);	break;
	case 9: x_QInternal::x_9(args);	break;
	case 10: x_QInternal::x_10(args);	break;
	case 11: delete (QInternal*)xself;	break;
    }
}
