//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qjpunicode.h>

class x_QJpUnicodeConv : public QJpUnicodeConv {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QJpUnicodeConv::Default;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QJpUnicodeConv::Unicode;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QJpUnicodeConv::Unicode_JISX0201;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QJpUnicodeConv::Unicode_ASCII;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QJpUnicodeConv::JISX0221_JISX0201;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QJpUnicodeConv::JISX0221_ASCII;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_enum = (long)QJpUnicodeConv::Sun_JDK117;
    }
    static void x_7(Smoke::Stack x) {
	x[0].s_enum = (long)QJpUnicodeConv::Microsoft_CP932;
    }
    static void x_8(Smoke::Stack x) {
	x[0].s_enum = (long)QJpUnicodeConv::NEC_VDC;
    }
    static void x_9(Smoke::Stack x) {
	x[0].s_enum = (long)QJpUnicodeConv::UDC;
    }
    static void x_10(Smoke::Stack x) {
	x[0].s_enum = (long)QJpUnicodeConv::IBM_VDC;
    }
    void x_11(Smoke::Stack x) const {
	// asciiToUnicode(uint, uint)
	uint xret = this->QJpUnicodeConv::asciiToUnicode((uint)x[1].s_uint,(uint)x[2].s_uint);
	x[0].s_uint = xret;
    }
    void x_12(Smoke::Stack x) const {
	// jisx0201ToUnicode(uint, uint)
	uint xret = this->QJpUnicodeConv::jisx0201ToUnicode((uint)x[1].s_uint,(uint)x[2].s_uint);
	x[0].s_uint = xret;
    }
    void x_13(Smoke::Stack x) const {
	// jisx0201LatinToUnicode(uint, uint)
	uint xret = this->QJpUnicodeConv::jisx0201LatinToUnicode((uint)x[1].s_uint,(uint)x[2].s_uint);
	x[0].s_uint = xret;
    }
    void x_14(Smoke::Stack x) const {
	// jisx0201KanaToUnicode(uint, uint)
	uint xret = this->QJpUnicodeConv::jisx0201KanaToUnicode((uint)x[1].s_uint,(uint)x[2].s_uint);
	x[0].s_uint = xret;
    }
    void x_15(Smoke::Stack x) const {
	// jisx0208ToUnicode(uint, uint)
	uint xret = this->QJpUnicodeConv::jisx0208ToUnicode((uint)x[1].s_uint,(uint)x[2].s_uint);
	x[0].s_uint = xret;
    }
    void x_16(Smoke::Stack x) const {
	// jisx0212ToUnicode(uint, uint)
	uint xret = this->QJpUnicodeConv::jisx0212ToUnicode((uint)x[1].s_uint,(uint)x[2].s_uint);
	x[0].s_uint = xret;
    }
    void x_17(Smoke::Stack x) const {
	// asciiToUnicode(uint)
	uint xret = this->QJpUnicodeConv::asciiToUnicode((uint)x[1].s_uint);
	x[0].s_uint = xret;
    }
    void x_18(Smoke::Stack x) const {
	// jisx0201ToUnicode(uint)
	uint xret = this->QJpUnicodeConv::jisx0201ToUnicode((uint)x[1].s_uint);
	x[0].s_uint = xret;
    }
    void x_19(Smoke::Stack x) const {
	// jisx0201LatinToUnicode(uint)
	uint xret = this->QJpUnicodeConv::jisx0201LatinToUnicode((uint)x[1].s_uint);
	x[0].s_uint = xret;
    }
    void x_20(Smoke::Stack x) const {
	// jisx0201KanaToUnicode(uint)
	uint xret = this->QJpUnicodeConv::jisx0201KanaToUnicode((uint)x[1].s_uint);
	x[0].s_uint = xret;
    }
    void x_21(Smoke::Stack x) const {
	// jisx0208ToUnicode(uint)
	uint xret = this->QJpUnicodeConv::jisx0208ToUnicode((uint)x[1].s_uint);
	x[0].s_uint = xret;
    }
    void x_22(Smoke::Stack x) const {
	// jisx0212ToUnicode(uint)
	uint xret = this->QJpUnicodeConv::jisx0212ToUnicode((uint)x[1].s_uint);
	x[0].s_uint = xret;
    }
    void x_23(Smoke::Stack x) const {
	// unicodeToAscii(uint, uint)
	uint xret = this->QJpUnicodeConv::unicodeToAscii((uint)x[1].s_uint,(uint)x[2].s_uint);
	x[0].s_uint = xret;
    }
    void x_24(Smoke::Stack x) const {
	// unicodeToJisx0201(uint, uint)
	uint xret = this->QJpUnicodeConv::unicodeToJisx0201((uint)x[1].s_uint,(uint)x[2].s_uint);
	x[0].s_uint = xret;
    }
    void x_25(Smoke::Stack x) const {
	// unicodeToJisx0201Latin(uint, uint)
	uint xret = this->QJpUnicodeConv::unicodeToJisx0201Latin((uint)x[1].s_uint,(uint)x[2].s_uint);
	x[0].s_uint = xret;
    }
    void x_26(Smoke::Stack x) const {
	// unicodeToJisx0201Kana(uint, uint)
	uint xret = this->QJpUnicodeConv::unicodeToJisx0201Kana((uint)x[1].s_uint,(uint)x[2].s_uint);
	x[0].s_uint = xret;
    }
    void x_27(Smoke::Stack x) const {
	// unicodeToJisx0208(uint, uint)
	uint xret = this->QJpUnicodeConv::unicodeToJisx0208((uint)x[1].s_uint,(uint)x[2].s_uint);
	x[0].s_uint = xret;
    }
    void x_28(Smoke::Stack x) const {
	// unicodeToJisx0212(uint, uint)
	uint xret = this->QJpUnicodeConv::unicodeToJisx0212((uint)x[1].s_uint,(uint)x[2].s_uint);
	x[0].s_uint = xret;
    }
    void x_29(Smoke::Stack x) const {
	// unicodeToAscii(uint)
	uint xret = this->QJpUnicodeConv::unicodeToAscii((uint)x[1].s_uint);
	x[0].s_uint = xret;
    }
    void x_30(Smoke::Stack x) const {
	// unicodeToJisx0201(uint)
	uint xret = this->QJpUnicodeConv::unicodeToJisx0201((uint)x[1].s_uint);
	x[0].s_uint = xret;
    }
    void x_31(Smoke::Stack x) const {
	// unicodeToJisx0201Latin(uint)
	uint xret = this->QJpUnicodeConv::unicodeToJisx0201Latin((uint)x[1].s_uint);
	x[0].s_uint = xret;
    }
    void x_32(Smoke::Stack x) const {
	// unicodeToJisx0201Kana(uint)
	uint xret = this->QJpUnicodeConv::unicodeToJisx0201Kana((uint)x[1].s_uint);
	x[0].s_uint = xret;
    }
    void x_33(Smoke::Stack x) const {
	// unicodeToJisx0208(uint)
	uint xret = this->QJpUnicodeConv::unicodeToJisx0208((uint)x[1].s_uint);
	x[0].s_uint = xret;
    }
    void x_34(Smoke::Stack x) const {
	// unicodeToJisx0212(uint)
	uint xret = this->QJpUnicodeConv::unicodeToJisx0212((uint)x[1].s_uint);
	x[0].s_uint = xret;
    }
    void x_35(Smoke::Stack x) const {
	// sjisToUnicode(uint, uint)
	uint xret = this->QJpUnicodeConv::sjisToUnicode((uint)x[1].s_uint,(uint)x[2].s_uint);
	x[0].s_uint = xret;
    }
    void x_36(Smoke::Stack x) const {
	// unicodeToSjis(uint, uint)
	uint xret = this->QJpUnicodeConv::unicodeToSjis((uint)x[1].s_uint,(uint)x[2].s_uint);
	x[0].s_uint = xret;
    }
    void x_37(Smoke::Stack x) const {
	// sjisToUnicode(uint)
	uint xret = this->QJpUnicodeConv::sjisToUnicode((uint)x[1].s_uint);
	x[0].s_uint = xret;
    }
    void x_38(Smoke::Stack x) const {
	// unicodeToSjis(uint)
	uint xret = this->QJpUnicodeConv::unicodeToSjis((uint)x[1].s_uint);
	x[0].s_uint = xret;
    }
    static void x_39(Smoke::Stack x) {
	// QJpUnicodeConv(QJpUnicodeConv&)
	x_QJpUnicodeConv* xret = new x_QJpUnicodeConv(*(QJpUnicodeConv *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QJpUnicodeConv(QJpUnicodeConv& x1) : QJpUnicodeConv(x1) {
    }
    static void x_40(Smoke::Stack x) {
	// newConverter(int)
	QJpUnicodeConv* xret = QJpUnicodeConv::newConverter((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    static void x_41(Smoke::Stack x) {
	// QJpUnicodeConv(int)
	x_QJpUnicodeConv* xret = new x_QJpUnicodeConv((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QJpUnicodeConv(int x1) : QJpUnicodeConv(x1) {
    }
    virtual uint asciiToUnicode(uint x1, uint x2) const {
	Smoke::StackItem x[3];
	x[1].s_uint = x1;
	x[2].s_uint = x2;
	if(qt_Smoke->binding->callMethod(4724, (void*)this, x)) return (uint)x[0].s_uint;
	return this->QJpUnicodeConv::asciiToUnicode(x1, x2);
    }
    virtual uint jisx0201LatinToUnicode(uint x1, uint x2) const {
	Smoke::StackItem x[3];
	x[1].s_uint = x1;
	x[2].s_uint = x2;
	if(qt_Smoke->binding->callMethod(4726, (void*)this, x)) return (uint)x[0].s_uint;
	return this->QJpUnicodeConv::jisx0201LatinToUnicode(x1, x2);
    }
    virtual uint jisx0208ToUnicode(uint x1, uint x2) const {
	Smoke::StackItem x[3];
	x[1].s_uint = x1;
	x[2].s_uint = x2;
	if(qt_Smoke->binding->callMethod(4728, (void*)this, x)) return (uint)x[0].s_uint;
	return this->QJpUnicodeConv::jisx0208ToUnicode(x1, x2);
    }
    virtual uint jisx0212ToUnicode(uint x1, uint x2) const {
	Smoke::StackItem x[3];
	x[1].s_uint = x1;
	x[2].s_uint = x2;
	if(qt_Smoke->binding->callMethod(4729, (void*)this, x)) return (uint)x[0].s_uint;
	return this->QJpUnicodeConv::jisx0212ToUnicode(x1, x2);
    }
    virtual uint unicodeToAscii(uint x1, uint x2) const {
	Smoke::StackItem x[3];
	x[1].s_uint = x1;
	x[2].s_uint = x2;
	if(qt_Smoke->binding->callMethod(4736, (void*)this, x)) return (uint)x[0].s_uint;
	return this->QJpUnicodeConv::unicodeToAscii(x1, x2);
    }
    virtual uint unicodeToJisx0201Latin(uint x1, uint x2) const {
	Smoke::StackItem x[3];
	x[1].s_uint = x1;
	x[2].s_uint = x2;
	if(qt_Smoke->binding->callMethod(4738, (void*)this, x)) return (uint)x[0].s_uint;
	return this->QJpUnicodeConv::unicodeToJisx0201Latin(x1, x2);
    }
    virtual uint unicodeToJisx0208(uint x1, uint x2) const {
	Smoke::StackItem x[3];
	x[1].s_uint = x1;
	x[2].s_uint = x2;
	if(qt_Smoke->binding->callMethod(4740, (void*)this, x)) return (uint)x[0].s_uint;
	return this->QJpUnicodeConv::unicodeToJisx0208(x1, x2);
    }
    virtual uint unicodeToJisx0212(uint x1, uint x2) const {
	Smoke::StackItem x[3];
	x[1].s_uint = x1;
	x[2].s_uint = x2;
	if(qt_Smoke->binding->callMethod(4741, (void*)this, x)) return (uint)x[0].s_uint;
	return this->QJpUnicodeConv::unicodeToJisx0212(x1, x2);
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 360: //QJpUnicodeConv::Rules
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QJpUnicodeConv::Rules;
		break;
	      case Smoke::EnumDelete:
		delete (QJpUnicodeConv::Rules*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QJpUnicodeConv::Rules*)xdata = (QJpUnicodeConv::Rules)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QJpUnicodeConv::Rules*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QJpUnicodeConv() { qt_Smoke->binding->deleted(168, (void*)this); }
};
void xenum_QJpUnicodeConv(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QJpUnicodeConv::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QJpUnicodeConv(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QJpUnicodeConv *xself = (x_QJpUnicodeConv*)obj;
    switch(xi) {
	case 0: x_QJpUnicodeConv::x_0(args);	break;
	case 1: x_QJpUnicodeConv::x_1(args);	break;
	case 2: x_QJpUnicodeConv::x_2(args);	break;
	case 3: x_QJpUnicodeConv::x_3(args);	break;
	case 4: x_QJpUnicodeConv::x_4(args);	break;
	case 5: x_QJpUnicodeConv::x_5(args);	break;
	case 6: x_QJpUnicodeConv::x_6(args);	break;
	case 7: x_QJpUnicodeConv::x_7(args);	break;
	case 8: x_QJpUnicodeConv::x_8(args);	break;
	case 9: x_QJpUnicodeConv::x_9(args);	break;
	case 10: x_QJpUnicodeConv::x_10(args);	break;
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
	case 35: xself->x_35(args);	break;
	case 36: xself->x_36(args);	break;
	case 37: xself->x_37(args);	break;
	case 38: xself->x_38(args);	break;
	case 39: x_QJpUnicodeConv::x_39(args);	break;
	case 40: x_QJpUnicodeConv::x_40(args);	break;
	case 41: x_QJpUnicodeConv::x_41(args);	break;
	case 42: delete (QJpUnicodeConv*)xself;	break;
    }
}
