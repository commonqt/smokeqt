//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qgdict.h>
#include <qptrcollection.h>

class x_QIntBucket : public QIntBucket {
public:
    static void x_0(Smoke::Stack x) {
	// QIntBucket(long, QPtrCollection::Item, QBaseBucket*)
	x_QIntBucket* xret = new x_QIntBucket((long)x[1].s_long,*(QPtrCollection::Item *)x[2].s_class,(QBaseBucket*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QIntBucket(long x1, QPtrCollection::Item x2, QBaseBucket* x3) : QIntBucket(x1, x2, x3) {
    }
    void x_1(Smoke::Stack x) const {
	// getKey()
	long xret = this->QIntBucket::getKey();
	x[0].s_long = (long)xret;
    }
    ~x_QIntBucket() {}
};
void xcall_QIntBucket(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QIntBucket *xself = (x_QIntBucket*)obj;
    switch(xi) {
	case 0: x_QIntBucket::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: delete (QIntBucket*)xself;	break;
    }
}
