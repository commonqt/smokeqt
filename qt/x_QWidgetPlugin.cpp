//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qwidgetplugin.h>
#include <qiconset.h>
#include <qstring.h>
#include <qstringlist.h>

class x_QWidgetPlugin : public QWidgetPlugin {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QWidgetPlugin::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QWidgetPlugin::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QWidgetPlugin::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QWidgetPlugin::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QWidgetPlugin::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QWidgetPlugin::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QWidgetPlugin::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QWidgetPlugin()
	x_QWidgetPlugin* xret = new x_QWidgetPlugin();
	x[0].s_class = (void*)xret;
    }
    x_QWidgetPlugin() : QWidgetPlugin() {
    }
    void x_8(Smoke::Stack x) const {
	// group(const QString&)
	QString xret = this->QWidgetPlugin::group(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_9(Smoke::Stack x) const {
	// iconSet(const QString&)
	QIconSet xret = this->QWidgetPlugin::iconSet(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)new QIconSet(xret);
    }
    void x_10(Smoke::Stack x) const {
	// includeFile(const QString&)
	QString xret = this->QWidgetPlugin::includeFile(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_11(Smoke::Stack x) const {
	// toolTip(const QString&)
	QString xret = this->QWidgetPlugin::toolTip(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_12(Smoke::Stack x) const {
	// whatsThis(const QString&)
	QString xret = this->QWidgetPlugin::whatsThis(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_13(Smoke::Stack x) const {
	// isContainer(const QString&)
	bool xret = this->QWidgetPlugin::isContainer(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    static void x_14(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QWidgetPlugin::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_15(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QWidgetPlugin::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_16(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QWidgetPlugin::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_17(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QWidgetPlugin::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_18(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QWidgetPlugin::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
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
	if(qt_Smoke->binding->callMethod(11680, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QWidgetPlugin::className();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6494, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual QWidget* create(const QString& x1, QWidget* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	qt_Smoke->binding->callMethod(11689, (void*)this, x, true /*pure virtual*/);
	return (QWidget*)x[0].s_class;
	// ABSTRACT
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
    virtual QString group(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11692, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidgetPlugin::group(x1);
    }
    virtual QIconSet iconSet(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11693, (void*)this, x)) {
	    QIconSet *xptr = (QIconSet *)x[0].s_class;
	    QIconSet xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidgetPlugin::iconSet(x1);
    }
    virtual QString includeFile(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11694, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidgetPlugin::includeFile(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6449, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual bool isContainer(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11697, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidgetPlugin::isContainer(x1);
    }
    virtual QStringList keys() const {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(11688, (void*)this, x, true /*pure virtual*/);
	QStringList *xptr = (QStringList *)x[0].s_class;
	QStringList xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11679, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QWidgetPlugin::metaObject();
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
    virtual void* qt_cast(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(11681, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QWidgetPlugin::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(11683, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidgetPlugin::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(11682, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidgetPlugin::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(11684, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidgetPlugin::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6450, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6432, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6462, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6491, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual QString toolTip(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11695, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidgetPlugin::toolTip(x1);
    }
    virtual QString whatsThis(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11696, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidgetPlugin::whatsThis(x1);
    }
    ~x_QWidgetPlugin() { qt_Smoke->binding->deleted(361, (void*)this); }
};
void xcall_QWidgetPlugin(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QWidgetPlugin *xself = (x_QWidgetPlugin*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QWidgetPlugin::x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: x_QWidgetPlugin::x_14(args);	break;
	case 15: x_QWidgetPlugin::x_15(args);	break;
	case 16: x_QWidgetPlugin::x_16(args);	break;
	case 17: x_QWidgetPlugin::x_17(args);	break;
	case 18: x_QWidgetPlugin::x_18(args);	break;
	case 19: delete (QWidgetPlugin*)xself;	break;
    }
}
