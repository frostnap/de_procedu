#ifndef SPHERE_OUT_H
#define SPHERE_OUT_H

#include "sphere_struct.h"
#include "figure_struct.h"
#include <fstream>

using namespace std;

namespace namesp {

    void OutSphere(figure *fig, ofstream &ofstr);
}

#endif //SPHERE_OUT_H