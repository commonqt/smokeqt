//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qimage.h>
#include <qpngio.h>

class x_QPNGImagePacker : public QPNGImagePacker {
public:
    static void x_0(Smoke::Stack x) {
	// QPNGImagePacker(QIODevice*, int, int)
	x_QPNGImagePacker* xret = new x_QPNGImagePacker((QIODevice*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QPNGImagePacker(QIODevice* x1, int x2, int x3) : QPNGImagePacker(x1, x2, x3) {
    }
    void x_1(Smoke::Stack x) {
	// setPixelAlignment(int)
	this->QPNGImagePacker::setPixelAlignment((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_2(Smoke::Stack x) {
	// packImage(const QImage&)
	bool xret = this->QPNGImagePacker::packImage(*(const QImage *)x[1].s_class);
	x[0].s_bool = xret;
    }
    static void x_3(Smoke::Stack x) {
	// QPNGImagePacker(QPNGImagePacker&)
	x_QPNGImagePacker* xret = new x_QPNGImagePacker(*(QPNGImagePacker *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QPNGImagePacker(QPNGImagePacker& x1) : QPNGImagePacker(x1) {
    }
    ~x_QPNGImagePacker() { qt_Smoke->binding->deleted(215, (void*)this); }
};
void xcall_QPNGImagePacker(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QPNGImagePacker *xself = (x_QPNGImagePacker*)obj;
    switch(xi) {
	case 0: x_QPNGImagePacker::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: x_QPNGImagePacker::x_3(args);	break;
	case 4: delete (QPNGImagePacker*)xself;	break;
    }
}
