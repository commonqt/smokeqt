//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qdom.h>

class x_QDomImplementation : public QDomImplementation {
public:
    static void x_0(Smoke::Stack x) {
	// QDomImplementation()
	x_QDomImplementation* xret = new x_QDomImplementation();
	x[0].s_class = (void*)xret;
    }
    x_QDomImplementation() : QDomImplementation() {
    }
    static void x_1(Smoke::Stack x) {
	// QDomImplementation(const QDomImplementation&)
	x_QDomImplementation* xret = new x_QDomImplementation(*(const QDomImplementation *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QDomImplementation(const QDomImplementation& x1) : QDomImplementation(x1) {
    }
    void x_2(Smoke::Stack x) {
	// operator=(const QDomImplementation&)
	QDomImplementation& xret = this->QDomImplementation::operator=(*(const QDomImplementation *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_3(Smoke::Stack x) const {
	// operator==(const QDomImplementation&)
	bool xret = this->QDomImplementation::operator==(*(const QDomImplementation *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) const {
	// operator!=(const QDomImplementation&)
	bool xret = this->QDomImplementation::operator!=(*(const QDomImplementation *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// hasFeature(const QString&, const QString&)
	bool xret = this->QDomImplementation::hasFeature(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// createDocumentType(const QString&, const QString&, const QString&)
	QDomDocumentType xret = this->QDomImplementation::createDocumentType(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp);
	x[0].s_class = (void*)new QDomDocumentType(xret);
    }
    void x_7(Smoke::Stack x) {
	// createDocument(const QString&, const QString&, const QDomDocumentType&)
	QDomDocument xret = this->QDomImplementation::createDocument(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QDomDocumentType *)x[3].s_voidp);
	x[0].s_class = (void*)new QDomDocument(xret);
    }
    void x_8(Smoke::Stack x) {
	// isNull()
	bool xret = this->QDomImplementation::isNull();
	x[0].s_bool = xret;
    }
    virtual QDomDocument createDocument(const QString& x1, const QString& x2, const QDomDocumentType& x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	if(qt_Smoke->callMethod(2153, (void*)this, x)) {
	    QDomDocument *xptr = (QDomDocument *)x[0].s_class;
	    QDomDocument xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomImplementation::createDocument(x1, x2, x3);
    }
    virtual QDomDocumentType createDocumentType(const QString& x1, const QString& x2, const QString& x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	if(qt_Smoke->callMethod(2152, (void*)this, x)) {
	    QDomDocumentType *xptr = (QDomDocumentType *)x[0].s_class;
	    QDomDocumentType xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomImplementation::createDocumentType(x1, x2, x3);
    }
    virtual bool hasFeature(const QString& x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->callMethod(2151, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomImplementation::hasFeature(x1, x2);
    }
    ~x_QDomImplementation() {}
};
void xcall_QDomImplementation(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDomImplementation *xself = (x_QDomImplementation*)obj;
    switch(xi) {
	case 0: x_QDomImplementation::x_0(args);	break;
	case 1: x_QDomImplementation::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: delete (QDomImplementation*)xself;	break;
    }
}
