//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qurlinfo.h>
#include <qnetworkprotocol.h>
#include <qstring.h>
#include <qcstring.h>

class x_QNetworkProtocol : public QNetworkProtocol {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::StWaiting;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::StInProgress;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::StDone;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::StFailed;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::StStopped;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::OpListChildren;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::OpMkDir;
    }
    static void x_7(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::OpMkdir;
    }
    static void x_8(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::OpRemove;
    }
    static void x_9(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::OpRename;
    }
    static void x_10(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::OpGet;
    }
    static void x_11(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::OpPut;
    }
    static void x_12(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ConHostFound;
    }
    static void x_13(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ConConnected;
    }
    static void x_14(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ConClosed;
    }
    static void x_15(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::NoError;
    }
    static void x_16(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrValid;
    }
    static void x_17(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrUnknownProtocol;
    }
    static void x_18(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrUnsupported;
    }
    static void x_19(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrParse;
    }
    static void x_20(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrLoginIncorrect;
    }
    static void x_21(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrHostNotFound;
    }
    static void x_22(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrListChildren;
    }
    static void x_23(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrListChlidren;
    }
    static void x_24(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrMkDir;
    }
    static void x_25(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrMkdir;
    }
    static void x_26(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrRemove;
    }
    static void x_27(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrRename;
    }
    static void x_28(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrGet;
    }
    static void x_29(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrPut;
    }
    static void x_30(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrFileNotExisting;
    }
    static void x_31(Smoke::Stack x) {
	x[0].s_enum = (long)QNetworkProtocol::ErrPermissionDenied;
    }
    static void x_32(Smoke::Stack x) {
	// QNetworkProtocol()
	x_QNetworkProtocol* xret = new x_QNetworkProtocol();
	x[0].s_class = (void*)xret;
    }
    x_QNetworkProtocol() : QNetworkProtocol() {
    }
    void x_33(Smoke::Stack x) {
	// setUrl(QUrlOperator*)
	this->QNetworkProtocol::setUrl((QUrlOperator*)x[1].s_class);
    }
    void x_34(Smoke::Stack x) {
	// setAutoDelete(bool, int)
	this->QNetworkProtocol::setAutoDelete((bool)x[1].s_bool,(int)x[2].s_int);
    }
    void x_35(Smoke::Stack x) {
	// setAutoDelete(bool)
	this->QNetworkProtocol::setAutoDelete((bool)x[1].s_bool);
    }
    void x_36(Smoke::Stack x) const {
	// autoDelete()
	bool xret = this->QNetworkProtocol::autoDelete();
	x[0].s_bool = (bool)xret;
    }
    void x_37(Smoke::Stack x) const {
	// supportedOperations()
	int xret = this->QNetworkProtocol::supportedOperations();
	x[0].s_int = (int)xret;
    }
    void x_38(Smoke::Stack x) {
	// addOperation(QNetworkOperation*)
	this->QNetworkProtocol::addOperation((QNetworkOperation*)x[1].s_class);
    }
    void x_39(Smoke::Stack x) const {
	// url()
	QUrlOperator* xret = this->QNetworkProtocol::url();
	x[0].s_class = (void*)xret;
    }
    void x_40(Smoke::Stack x) const {
	// operationInProgress()
	QNetworkOperation* xret = this->QNetworkProtocol::operationInProgress();
	x[0].s_class = (void*)xret;
    }
    void x_41(Smoke::Stack x) {
	// clearOperationQueue()
	this->QNetworkProtocol::clearOperationQueue();
    }
    void x_42(Smoke::Stack x) {
	// stop()
	this->QNetworkProtocol::stop();
    }
    void x_43(Smoke::Stack x) {
	// data(const QByteArray&, QNetworkOperation*)
	this->QNetworkProtocol::data(*(const QByteArray *)x[1].s_class,(QNetworkOperation*)x[2].s_class);
    }
    void x_44(Smoke::Stack x) {
	// connectionStateChanged(int, const QString&)
	this->QNetworkProtocol::connectionStateChanged((int)x[1].s_int,*(const QString *)x[2].s_class);
    }
    void x_45(Smoke::Stack x) {
	// finished(QNetworkOperation*)
	this->QNetworkProtocol::finished((QNetworkOperation*)x[1].s_class);
    }
    void x_46(Smoke::Stack x) {
	// start(QNetworkOperation*)
	this->QNetworkProtocol::start((QNetworkOperation*)x[1].s_class);
    }
    void x_47(Smoke::Stack x) {
	// newChildren(const QValueList<QUrlInfo>&, QNetworkOperation*)
	this->QNetworkProtocol::newChildren(*(const QValueList<QUrlInfo> *)x[1].s_class,(QNetworkOperation*)x[2].s_class);
    }
    void x_48(Smoke::Stack x) {
	// newChild(const QUrlInfo&, QNetworkOperation*)
	this->QNetworkProtocol::newChild(*(const QUrlInfo *)x[1].s_class,(QNetworkOperation*)x[2].s_class);
    }
    void x_49(Smoke::Stack x) {
	// createdDirectory(const QUrlInfo&, QNetworkOperation*)
	this->QNetworkProtocol::createdDirectory(*(const QUrlInfo *)x[1].s_class,(QNetworkOperation*)x[2].s_class);
    }
    void x_50(Smoke::Stack x) {
	// removed(QNetworkOperation*)
	this->QNetworkProtocol::removed((QNetworkOperation*)x[1].s_class);
    }
    void x_51(Smoke::Stack x) {
	// itemChanged(QNetworkOperation*)
	this->QNetworkProtocol::itemChanged((QNetworkOperation*)x[1].s_class);
    }
    void x_52(Smoke::Stack x) {
	// dataTransferProgress(int, int, QNetworkOperation*)
	this->QNetworkProtocol::dataTransferProgress((int)x[1].s_int,(int)x[2].s_int,(QNetworkOperation*)x[3].s_class);
    }
    static void x_53(Smoke::Stack x) {
	// registerNetworkProtocol(const QString&, QNetworkProtocolFactoryBase*)
	QNetworkProtocol::registerNetworkProtocol(*(const QString *)x[1].s_class,(QNetworkProtocolFactoryBase*)x[2].s_class);
    }
    static void x_54(Smoke::Stack x) {
	// getNetworkProtocol(const QString&)
	QNetworkProtocol* xret = QNetworkProtocol::getNetworkProtocol(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    static void x_55(Smoke::Stack x) {
	// hasOnlyLocalFileSystem()
	bool xret = QNetworkProtocol::hasOnlyLocalFileSystem();
	x[0].s_bool = (bool)xret;
    }
    void x_56(Smoke::Stack x) {
	// processOperation(QNetworkOperation*)
	this->QNetworkProtocol::processOperation((QNetworkOperation*)x[1].s_class);
    }
    void x_57(Smoke::Stack x) {
	// operationListChildren(QNetworkOperation*)
	this->QNetworkProtocol::operationListChildren((QNetworkOperation*)x[1].s_class);
    }
    void x_58(Smoke::Stack x) {
	// operationMkDir(QNetworkOperation*)
	this->QNetworkProtocol::operationMkDir((QNetworkOperation*)x[1].s_class);
    }
    void x_59(Smoke::Stack x) {
	// operationRemove(QNetworkOperation*)
	this->QNetworkProtocol::operationRemove((QNetworkOperation*)x[1].s_class);
    }
    void x_60(Smoke::Stack x) {
	// operationRename(QNetworkOperation*)
	this->QNetworkProtocol::operationRename((QNetworkOperation*)x[1].s_class);
    }
    void x_61(Smoke::Stack x) {
	// operationGet(QNetworkOperation*)
	this->QNetworkProtocol::operationGet((QNetworkOperation*)x[1].s_class);
    }
    void x_62(Smoke::Stack x) {
	// operationPut(QNetworkOperation*)
	this->QNetworkProtocol::operationPut((QNetworkOperation*)x[1].s_class);
    }
    void x_63(Smoke::Stack x) {
	// operationPutChunk(QNetworkOperation*)
	this->QNetworkProtocol::operationPutChunk((QNetworkOperation*)x[1].s_class);
    }
    void x_64(Smoke::Stack x) {
	// checkConnection(QNetworkOperation*)
	bool xret = this->QNetworkProtocol::checkConnection((QNetworkOperation*)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    virtual void addOperation(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5368, (void*)this, x)) return;
	this->QNetworkProtocol::addOperation(x1);
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->callMethod(5470, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual bool checkConnection(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5394, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QNetworkProtocol::checkConnection(x1);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5466, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual void clearOperationQueue() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(5371, (void*)this, x)) return;
	this->QNetworkProtocol::clearOperationQueue();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5468, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5467, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5469, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5405, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->callMethod(5406, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5428, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void operationGet(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5391, (void*)this, x)) return;
	this->QNetworkProtocol::operationGet(x1);
    }
    virtual void operationListChildren(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5387, (void*)this, x)) return;
	this->QNetworkProtocol::operationListChildren(x1);
    }
    virtual void operationMkDir(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5388, (void*)this, x)) return;
	this->QNetworkProtocol::operationMkDir(x1);
    }
    virtual void operationPut(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5392, (void*)this, x)) return;
	this->QNetworkProtocol::operationPut(x1);
    }
    virtual void operationPutChunk(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5393, (void*)this, x)) return;
	this->QNetworkProtocol::operationPutChunk(x1);
    }
    virtual void operationRemove(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5389, (void*)this, x)) return;
	this->QNetworkProtocol::operationRemove(x1);
    }
    virtual void operationRename(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5390, (void*)this, x)) return;
	this->QNetworkProtocol::operationRename(x1);
    }
    virtual void processOperation(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5386, (void*)this, x)) return;
	this->QNetworkProtocol::processOperation(x1);
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5442, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5429, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setAutoDelete(bool x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = (bool)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(5364, (void*)this, x)) return;
	this->QNetworkProtocol::setAutoDelete(x1, x2);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5411, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(5441, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setUrl(QUrlOperator* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5363, (void*)this, x)) return;
	this->QNetworkProtocol::setUrl(x1);
    }
    virtual void stop() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(5372, (void*)this, x)) return;
	this->QNetworkProtocol::stop();
    }
    virtual int supportedOperations() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(5367, (void*)this, x)) return (int)x[0].s_int;
	return this->QNetworkProtocol::supportedOperations();
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5465, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QNetworkProtocol() {}
};
void xcall_QNetworkProtocol(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QNetworkProtocol *xself = (x_QNetworkProtocol*)obj;
    switch(xi) {
	case 0: x_QNetworkProtocol::x_0(args);	break;
	case 1: x_QNetworkProtocol::x_1(args);	break;
	case 2: x_QNetworkProtocol::x_2(args);	break;
	case 3: x_QNetworkProtocol::x_3(args);	break;
	case 4: x_QNetworkProtocol::x_4(args);	break;
	case 5: x_QNetworkProtocol::x_5(args);	break;
	case 6: x_QNetworkProtocol::x_6(args);	break;
	case 7: x_QNetworkProtocol::x_7(args);	break;
	case 8: x_QNetworkProtocol::x_8(args);	break;
	case 9: x_QNetworkProtocol::x_9(args);	break;
	case 10: x_QNetworkProtocol::x_10(args);	break;
	case 11: x_QNetworkProtocol::x_11(args);	break;
	case 12: x_QNetworkProtocol::x_12(args);	break;
	case 13: x_QNetworkProtocol::x_13(args);	break;
	case 14: x_QNetworkProtocol::x_14(args);	break;
	case 15: x_QNetworkProtocol::x_15(args);	break;
	case 16: x_QNetworkProtocol::x_16(args);	break;
	case 17: x_QNetworkProtocol::x_17(args);	break;
	case 18: x_QNetworkProtocol::x_18(args);	break;
	case 19: x_QNetworkProtocol::x_19(args);	break;
	case 20: x_QNetworkProtocol::x_20(args);	break;
	case 21: x_QNetworkProtocol::x_21(args);	break;
	case 22: x_QNetworkProtocol::x_22(args);	break;
	case 23: x_QNetworkProtocol::x_23(args);	break;
	case 24: x_QNetworkProtocol::x_24(args);	break;
	case 25: x_QNetworkProtocol::x_25(args);	break;
	case 26: x_QNetworkProtocol::x_26(args);	break;
	case 27: x_QNetworkProtocol::x_27(args);	break;
	case 28: x_QNetworkProtocol::x_28(args);	break;
	case 29: x_QNetworkProtocol::x_29(args);	break;
	case 30: x_QNetworkProtocol::x_30(args);	break;
	case 31: x_QNetworkProtocol::x_31(args);	break;
	case 32: x_QNetworkProtocol::x_32(args);	break;
	case 33: xself->x_33(args);	break;
	case 34: xself->x_34(args);	break;
	case 35: xself->x_35(args);	break;
	case 36: xself->x_36(args);	break;
	case 37: xself->x_37(args);	break;
	case 38: xself->x_38(args);	break;
	case 39: xself->x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: xself->x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: xself->x_44(args);	break;
	case 45: xself->x_45(args);	break;
	case 46: xself->x_46(args);	break;
	case 47: xself->x_47(args);	break;
	case 48: xself->x_48(args);	break;
	case 49: xself->x_49(args);	break;
	case 50: xself->x_50(args);	break;
	case 51: xself->x_51(args);	break;
	case 52: xself->x_52(args);	break;
	case 53: x_QNetworkProtocol::x_53(args);	break;
	case 54: x_QNetworkProtocol::x_54(args);	break;
	case 55: x_QNetworkProtocol::x_55(args);	break;
	case 56: xself->x_56(args);	break;
	case 57: xself->x_57(args);	break;
	case 58: xself->x_58(args);	break;
	case 59: xself->x_59(args);	break;
	case 60: xself->x_60(args);	break;
	case 61: xself->x_61(args);	break;
	case 62: xself->x_62(args);	break;
	case 63: xself->x_63(args);	break;
	case 64: xself->x_64(args);	break;
	case 65: delete (QNetworkProtocol*)xself;	break;
    }
}
