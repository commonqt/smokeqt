//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qgdict.h>
#include <qptrcollection.h>

class x_QBaseBucket : public QBaseBucket {
public:
    void x_0(Smoke::Stack x) {
	// getData()
	QPtrCollection::Item xret = this->QBaseBucket::getData();
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_1(Smoke::Stack x) {
	// setData(QPtrCollection::Item)
	QPtrCollection::Item xret = this->QBaseBucket::setData(*(QPtrCollection::Item *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_2(Smoke::Stack x) {
	// getNext()
	QBaseBucket* xret = this->QBaseBucket::getNext();
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// setNext(QBaseBucket*)
	this->QBaseBucket::setNext((QBaseBucket*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_4(Smoke::Stack x) {
	// QBaseBucket(QPtrCollection::Item, QBaseBucket*)
	x_QBaseBucket* xret = new x_QBaseBucket(*(QPtrCollection::Item *)x[1].s_voidp,(QBaseBucket*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QBaseBucket(QPtrCollection::Item x1, QBaseBucket* x2) : QBaseBucket(x1, x2) {
    }
    ~x_QBaseBucket() {}
};
void xcall_QBaseBucket(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QBaseBucket *xself = (x_QBaseBucket*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: x_QBaseBucket::x_4(args);	break;
	case 5: delete (QBaseBucket*)xself;	break;
    }
}
