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
    static void x_0(Smoke::Stack x) {
	// QWidgetPlugin()
	x_QWidgetPlugin* xret = new x_QWidgetPlugin();
	x[0].s_class = (void*)xret;
    }
    x_QWidgetPlugin() : QWidgetPlugin() {
    }
    void x_1(Smoke::Stack x) const {
	// group(const QString&)
	QString xret = this->QWidgetPlugin::group(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_2(Smoke::Stack x) const {
	// iconSet(const QString&)
	QIconSet xret = this->QWidgetPlugin::iconSet(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)new QIconSet(xret);
    }
    void x_3(Smoke::Stack x) const {
	// includeFile(const QString&)
	QString xret = this->QWidgetPlugin::includeFile(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_4(Smoke::Stack x) const {
	// toolTip(const QString&)
	QString xret = this->QWidgetPlugin::toolTip(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_5(Smoke::Stack x) const {
	// whatsThis(const QString&)
	QString xret = this->QWidgetPlugin::whatsThis(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_6(Smoke::Stack x) const {
	// isContainer(const QString&)
	bool xret = this->QWidgetPlugin::isContainer(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->callMethod(5470, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5466, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5468, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual QWidget* create(const QString& x1, QWidget* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	qt_Smoke->callMethod(9855, (void*)this, x, true /*pure virtual*/);
	return (QWidget*)x[0].s_class;
	// ABSTRACT
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5467, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5469, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5405, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->callMethod(5406, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual QString group(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9858, (void*)this, x)) {
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
	if(qt_Smoke->callMethod(9859, (void*)this, x)) {
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
	if(qt_Smoke->callMethod(9860, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidgetPlugin::includeFile(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5428, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual bool isContainer(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9863, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidgetPlugin::isContainer(x1);
    }
    virtual QStringList keys() const {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(9854, (void*)this, x, true /*pure virtual*/);
	QStringList *xptr = (QStringList *)x[0].s_class;
	QStringList xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
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
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5429, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5411, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->callMethod(5441, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->callMethod(5465, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual QString toolTip(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->callMethod(9861, (void*)this, x)) {
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
	if(qt_Smoke->callMethod(9862, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidgetPlugin::whatsThis(x1);
    }
    ~x_QWidgetPlugin() {}
};
void xcall_QWidgetPlugin(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QWidgetPlugin *xself = (x_QWidgetPlugin*)obj;
    switch(xi) {
	case 0: x_QWidgetPlugin::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: delete (QWidgetPlugin*)xself;	break;
    }
}
