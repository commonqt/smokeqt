//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcstring.h>
#include <qstring.h>
#include <qutfcodec.h>

class x_QUtf16Codec : public QUtf16Codec {
public:
    void x_0(Smoke::Stack x) const {
	// mibEnum()
	int xret = this->QUtf16Codec::mibEnum();
	x[0].s_int = xret;
    }
    void x_1(Smoke::Stack x) const {
	// name()
	const char* xret = this->QUtf16Codec::name();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) const {
	// makeDecoder()
	QTextDecoder* xret = this->QUtf16Codec::makeDecoder();
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) const {
	// makeEncoder()
	QTextEncoder* xret = this->QUtf16Codec::makeEncoder();
	x[0].s_voidp = (void*)xret;
    }
    void x_4(Smoke::Stack x) const {
	// heuristicContentMatch(const char*, int)
	int xret = this->QUtf16Codec::heuristicContentMatch((const char*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_int = xret;
    }
    static void x_5(Smoke::Stack x) {
	// QUtf16Codec()
	x_QUtf16Codec* xret = new x_QUtf16Codec();
	x[0].s_class = (void*)xret;
    }
    x_QUtf16Codec() : QUtf16Codec() {
    }
    virtual bool canEncode(QChar x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(8538, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QTextCodec::canEncode(x1);
    }
    virtual bool canEncode(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(8539, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QTextCodec::canEncode(x1);
    }
    virtual unsigned short characterFromUnicode(const QString& x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_int = x2;
	if(qt_Smoke->callMethod(8543, (void*)this, x)) {
	    unsigned short *xptr = (unsigned short *)x[0].s_class;
	    unsigned short xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextCodec::characterFromUnicode(x1, x2);
    }
    virtual QCString fromUnicode(const QString& x1, int& x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->callMethod(8531, (void*)this, x)) {
	    QCString *xptr = (QCString *)x[0].s_class;
	    QCString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextCodec::fromUnicode(x1, x2);
    }
    virtual QByteArray fromUnicode(const QString& x1, int x2, int x3) const {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	if(qt_Smoke->callMethod(8542, (void*)this, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_class;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextCodec::fromUnicode(x1, x2, x3);
    }
    virtual int heuristicContentMatch(const char* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->callMethod(9278, (void*)this, x)) return (int)x[0].s_int;
	return this->QUtf16Codec::heuristicContentMatch(x1, x2);
    }
    virtual int heuristicNameMatch(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(8541, (void*)this, x)) return (int)x[0].s_int;
	return this->QTextCodec::heuristicNameMatch(x1);
    }
    virtual QTextDecoder* makeDecoder() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9276, (void*)this, x)) return (QTextDecoder*)x[0].s_class;
	return this->QUtf16Codec::makeDecoder();
    }
    virtual QTextEncoder* makeEncoder() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9277, (void*)this, x)) return (QTextEncoder*)x[0].s_class;
	return this->QUtf16Codec::makeEncoder();
    }
    virtual int mibEnum() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9274, (void*)this, x)) return (int)x[0].s_int;
	return this->QUtf16Codec::mibEnum();
    }
    virtual const char* mimeName() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(8526, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QTextCodec::mimeName();
    }
    virtual const char* name() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9275, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QUtf16Codec::name();
    }
    virtual QString toUnicode(const char* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->callMethod(8530, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextCodec::toUnicode(x1, x2);
    }
    ~x_QUtf16Codec() {}
};
void xcall_QUtf16Codec(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QUtf16Codec *xself = (x_QUtf16Codec*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: x_QUtf16Codec::x_5(args);	break;
	case 6: delete (QUtf16Codec*)xself;	break;
    }
}
