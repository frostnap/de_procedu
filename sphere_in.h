#ifndef SPHERE_IN_H
#define SPHERE_IN_H

#include "sphere_struct.h"
#include "figure_struct.h"
#include <fstream>

using namespace std;

namespace namesp {

    sphere InSphere(ifstream &ifstr, bool &error);
}

#endif //SPHERE_IN_H