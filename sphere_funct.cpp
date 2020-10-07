#include "sphere_funct.h"

using namespace std;

namespace namesp {

    double FuncSphere(sphere *fig) {
        return 4/3*3.14*fig->radius*fig->radius*fig->radius;
    }
}