//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qvariant.h>
#include <qcstring.h>
#include <qstring.h>
#include <qdragobject.h>
#include <qstrlist.h>
#include <qpixmap.h>
#include <qstringlist.h>

class x_QUriDrag : public QUriDrag {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QUriDrag::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QUriDrag::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QUriDrag::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QUriDrag::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QUriDrag::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QUriDrag::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QUriDrag::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QUriDrag(QStrList, QWidget*, const char*)
	x_QUriDrag* xret = new x_QUriDrag(*(QStrList *)x[1].s_class,(QWidget*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QUriDrag(QStrList x1, QWidget* x2, const char* x3) : QUriDrag(x1, x2, x3) {
    }
    static void x_8(Smoke::Stack x) {
	// QUriDrag(QStrList, QWidget*)
	x_QUriDrag* xret = new x_QUriDrag(*(QStrList *)x[1].s_class,(QWidget*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QUriDrag(QStrList x1, QWidget* x2) : QUriDrag(x1, x2) {
    }
    static void x_9(Smoke::Stack x) {
	// QUriDrag(QStrList)
	x_QUriDrag* xret = new x_QUriDrag(*(QStrList *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QUriDrag(QStrList x1) : QUriDrag(x1) {
    }
    static void x_10(Smoke::Stack x) {
	// QUriDrag(QWidget*, const char*)
	x_QUriDrag* xret = new x_QUriDrag((QWidget*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QUriDrag(QWidget* x1, const char* x2) : QUriDrag(x1, x2) {
    }
    static void x_11(Smoke::Stack x) {
	// QUriDrag(QWidget*)
	x_QUriDrag* xret = new x_QUriDrag((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QUriDrag(QWidget* x1) : QUriDrag(x1) {
    }
    static void x_12(Smoke::Stack x) {
	// QUriDrag()
	x_QUriDrag* xret = new x_QUriDrag();
	x[0].s_class = (void*)xret;
    }
    x_QUriDrag() : QUriDrag() {
    }
    void x_13(Smoke::Stack x) {
	// setFilenames(const QStringList&)
	this->QUriDrag::setFilenames(*(const QStringList *)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_14(Smoke::Stack x) {
	// setFileNames(const QStringList&)
	this->QUriDrag::setFileNames(*(const QStringList *)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_15(Smoke::Stack x) {
	// setUnicodeUris(const QStringList&)
	this->QUriDrag::setUnicodeUris(*(const QStringList *)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_16(Smoke::Stack x) {
	// setUris(QStrList)
	this->QUriDrag::setUris(*(QStrList *)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_17(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QUriDrag::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_18(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QUriDrag::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_19(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QUriDrag::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_20(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QUriDrag::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_21(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QUriDrag::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_22(Smoke::Stack x) {
	// uriToLocalFile(const char*)
	QString xret = QUriDrag::uriToLocalFile((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_23(Smoke::Stack x) {
	// localFileToUri(const QString&)
	QCString xret = QUriDrag::localFileToUri(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QCString(xret);
    }
    static void x_24(Smoke::Stack x) {
	// uriToUnicodeUri(const char*)
	QString xret = QUriDrag::uriToUnicodeUri((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_25(Smoke::Stack x) {
	// unicodeUriToUri(const QString&)
	QCString xret = QUriDrag::unicodeUriToUri(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QCString(xret);
    }
    static void x_26(Smoke::Stack x) {
	// canDecode(const QMimeSource*)
	bool xret = QUriDrag::canDecode((const QMimeSource*)x[1].s_class);
	x[0].s_bool = xret;
    }
    static void x_27(Smoke::Stack x) {
	// decode(const QMimeSource*, QStrList&)
	bool xret = QUriDrag::decode((const QMimeSource*)x[1].s_class,*(QStrList *)x[2].s_class);
	x[0].s_bool = xret;
    }
    static void x_28(Smoke::Stack x) {
	// decodeToUnicodeUris(const QMimeSource*, QStringList&)
	bool xret = QUriDrag::decodeToUnicodeUris((const QMimeSource*)x[1].s_class,*(QStringList *)x[2].s_class);
	x[0].s_bool = xret;
    }
    static void x_29(Smoke::Stack x) {
	// decodeLocalFiles(const QMimeSource*, QStringList&)
	bool xret = QUriDrag::decodeLocalFiles((const QMimeSource*)x[1].s_class,*(QStringList *)x[2].s_class);
	x[0].s_bool = xret;
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6496, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6492, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(10838, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QUriDrag::className();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6494, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6493, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6495, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool drag(QDragObject::DragMode x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(2803, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDragObject::drag(x1);
    }
    virtual QByteArray encodedData(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(9133, (void*)this, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_class;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QStoredDrag::encodedData(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6426, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6427, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual const char* format(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(9132, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QStoredDrag::format(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6449, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(10837, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QUriDrag::metaObject();
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6463, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual bool provides(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6059, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QMimeSource::provides(x1);
    }
    virtual void* qt_cast(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(10839, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QUriDrag::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(10841, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QUriDrag::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(10840, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QUriDrag::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(10842, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QUriDrag::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6450, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setEncodedData(const QByteArray& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(9131, (void*)this, x)) return;
	this->QStoredDrag::setEncodedData(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6432, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual void setPixmap(QPixmap x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2791, (void*)this, x)) return;
	this->QDragObject::setPixmap(x1);
    }
    virtual void setPixmap(QPixmap x1, const QPoint& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2792, (void*)this, x)) return;
	this->QDragObject::setPixmap(x1, x2);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6462, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setUris(QStrList x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(10854, (void*)this, x)) return;
	this->QUriDrag::setUris(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6491, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QUriDrag() { qt_Smoke->binding->deleted(338, (void*)this); }
};
void xcall_QUriDrag(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QUriDrag *xself = (x_QUriDrag*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QUriDrag::x_7(args);	break;
	case 8: x_QUriDrag::x_8(args);	break;
	case 9: x_QUriDrag::x_9(args);	break;
	case 10: x_QUriDrag::x_10(args);	break;
	case 11: x_QUriDrag::x_11(args);	break;
	case 12: x_QUriDrag::x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: x_QUriDrag::x_17(args);	break;
	case 18: x_QUriDrag::x_18(args);	break;
	case 19: x_QUriDrag::x_19(args);	break;
	case 20: x_QUriDrag::x_20(args);	break;
	case 21: x_QUriDrag::x_21(args);	break;
	case 22: x_QUriDrag::x_22(args);	break;
	case 23: x_QUriDrag::x_23(args);	break;
	case 24: x_QUriDrag::x_24(args);	break;
	case 25: x_QUriDrag::x_25(args);	break;
	case 26: x_QUriDrag::x_26(args);	break;
	case 27: x_QUriDrag::x_27(args);	break;
	case 28: x_QUriDrag::x_28(args);	break;
	case 29: x_QUriDrag::x_29(args);	break;
	case 30: delete (QUriDrag*)xself;	break;
    }
}
