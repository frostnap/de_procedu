#ifndef PARALLELEPIPED_OUT_H
#define PARALLELEPIPED_OUT_H

#include "parallelepiped_struct.h"
#include "figure_struct.h"
#include <fstream>

using namespace std;

namespace namesp {

    void OutParal(figure *fig, ofstream &ofstr);
}

#endif //PARALLELEPIPED_OUT_H