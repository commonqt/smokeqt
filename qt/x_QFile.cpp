//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qglobal.h>
#include <qfile.h>
#include <qiodevice.h>
#include <qcstring.h>
#include <qstring.h>

class x_QFile : public QFile {
public:
    static void x_0(Smoke::Stack x) {
	// QFile()
	x_QFile* xret = new x_QFile();
	x[0].s_class = (void*)xret;
    }
    x_QFile() : QFile() {
    }
    static void x_1(Smoke::Stack x) {
	// QFile(const QString&)
	x_QFile* xret = new x_QFile(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QFile(const QString& x1) : QFile(x1) {
    }
    void x_2(Smoke::Stack x) const {
	// name()
	QString xret = this->QFile::name();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_3(Smoke::Stack x) {
	// setName(const QString&)
	this->QFile::setName(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_4(Smoke::Stack x) const {
	// exists()
	bool xret = this->QFile::exists();
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// remove()
	bool xret = this->QFile::remove();
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// open(int)
	bool xret = this->QFile::open((int)x[1].s_int);
	x[0].s_bool = xret;
    }
    void x_7(Smoke::Stack x) {
	// open(int, int)
	bool xret = this->QFile::open((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_bool = xret;
    }
    void x_8(Smoke::Stack x) {
	// close()
	this->QFile::close();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_9(Smoke::Stack x) {
	// flush()
	this->QFile::flush();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_10(Smoke::Stack x) const {
	// size()
	QIODevice::Offset xret = this->QFile::size();
	x[0].s_ulong = xret;
    }
    void x_11(Smoke::Stack x) const {
	// at()
	QIODevice::Offset xret = this->QFile::at();
	x[0].s_ulong = xret;
    }
    void x_12(Smoke::Stack x) {
	// at(QIODevice::Offset)
	bool xret = this->QFile::at((QIODevice::Offset)x[1].s_ulong);
	x[0].s_bool = xret;
    }
    void x_13(Smoke::Stack x) const {
	// atEnd()
	bool xret = this->QFile::atEnd();
	x[0].s_bool = xret;
    }
    void x_14(Smoke::Stack x) {
	// readBlock(char*, Q_ULONG)
	Q_LONG xret = this->QFile::readBlock((char*)x[1].s_voidp,(Q_ULONG)x[2].s_long);
	x[0].s_long = xret;
    }
    void x_15(Smoke::Stack x) {
	// writeBlock(const char*, Q_ULONG)
	Q_LONG xret = this->QFile::writeBlock((const char*)x[1].s_voidp,(Q_ULONG)x[2].s_long);
	x[0].s_long = xret;
    }
    void x_16(Smoke::Stack x) {
	// writeBlock(const QByteArray&)
	Q_LONG xret = this->QFile::writeBlock(*(const QByteArray *)x[1].s_voidp);
	x[0].s_long = xret;
    }
    void x_17(Smoke::Stack x) {
	// readLine(char*, Q_ULONG)
	Q_LONG xret = this->QFile::readLine((char*)x[1].s_voidp,(Q_ULONG)x[2].s_long);
	x[0].s_long = xret;
    }
    void x_18(Smoke::Stack x) {
	// readLine(QString&, Q_ULONG)
	Q_LONG xret = this->QFile::readLine(*(QString *)x[1].s_voidp,(Q_ULONG)x[2].s_long);
	x[0].s_long = xret;
    }
    void x_19(Smoke::Stack x) {
	// getch()
	int xret = this->QFile::getch();
	x[0].s_int = xret;
    }
    void x_20(Smoke::Stack x) {
	// putch(int)
	int xret = this->QFile::putch((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_21(Smoke::Stack x) {
	// ungetch(int)
	int xret = this->QFile::ungetch((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_22(Smoke::Stack x) const {
	// handle()
	int xret = this->QFile::handle();
	x[0].s_int = xret;
    }
    static void x_23(Smoke::Stack x) {
	// encodeName(const QString&)
	QCString xret = QFile::encodeName(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QCString(xret);
    }
    static void x_24(Smoke::Stack x) {
	// decodeName(const QCString&)
	QString xret = QFile::decodeName(*(const QCString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_25(Smoke::Stack x) {
	// exists(const QString&)
	bool xret = QFile::exists(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    static void x_26(Smoke::Stack x) {
	// remove(const QString&)
	bool xret = QFile::remove(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    virtual QIODevice::Offset at() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2965, (void*)this, x)) {
	    QIODevice::Offset *xptr = (QIODevice::Offset *)x[0].s_class;
	    QIODevice::Offset xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QFile::at();
    }
    virtual bool at(QIODevice::Offset x1) {
	Smoke::StackItem x[2];
	x[1].s_ulong = x1;
	if(qt_Smoke->binding->callMethod(2966, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QFile::at(x1);
    }
    virtual bool atEnd() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2967, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QFile::atEnd();
    }
    virtual void close() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2962, (void*)this, x)) return;
	this->QFile::close();
    }
    virtual void flush() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2963, (void*)this, x)) return;
	this->QFile::flush();
    }
    virtual int getch() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2973, (void*)this, x)) return (int)x[0].s_int;
	return this->QFile::getch();
    }
    virtual bool open(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(2960, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QFile::open(x1);
    }
    virtual int putch(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(2974, (void*)this, x)) return (int)x[0].s_int;
	return this->QFile::putch(x1);
    }
    virtual QByteArray readAll() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4110, (void*)this, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_class;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QIODevice::readAll();
    }
    virtual Q_LONG readBlock(char* x1, Q_ULONG x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_long = x2;
	if(qt_Smoke->binding->callMethod(2968, (void*)this, x)) {
	    Q_LONG *xptr = (Q_LONG *)x[0].s_class;
	    Q_LONG xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QFile::readBlock(x1, x2);
    }
    virtual Q_LONG readLine(char* x1, Q_ULONG x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_long = x2;
	if(qt_Smoke->binding->callMethod(2971, (void*)this, x)) {
	    Q_LONG *xptr = (Q_LONG *)x[0].s_class;
	    Q_LONG xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QFile::readLine(x1, x2);
    }
    virtual QIODevice::Offset size() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2964, (void*)this, x)) {
	    QIODevice::Offset *xptr = (QIODevice::Offset *)x[0].s_class;
	    QIODevice::Offset xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QFile::size();
    }
    virtual int ungetch(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(2975, (void*)this, x)) return (int)x[0].s_int;
	return this->QFile::ungetch(x1);
    }
    virtual Q_LONG writeBlock(const char* x1, Q_ULONG x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_long = x2;
	if(qt_Smoke->binding->callMethod(2969, (void*)this, x)) {
	    Q_LONG *xptr = (Q_LONG *)x[0].s_class;
	    Q_LONG xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QFile::writeBlock(x1, x2);
    }
    ~x_QFile() { qt_Smoke->binding->deleted(109, (void*)this); }
};
void xcall_QFile(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QFile *xself = (x_QFile*)obj;
    switch(xi) {
	case 0: x_QFile::x_0(args);	break;
	case 1: x_QFile::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
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
	case 23: x_QFile::x_23(args);	break;
	case 24: x_QFile::x_24(args);	break;
	case 25: x_QFile::x_25(args);	break;
	case 26: x_QFile::x_26(args);	break;
	case 27: delete (QFile*)xself;	break;
    }
}
