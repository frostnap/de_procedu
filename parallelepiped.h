#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include "parallelepiped_struct.h"
#include "parallelepiped_clear.h"
#include "figure_struct.h"
#include <fstream>

using namespace std;

namespace namesp {

    void OutParal(figure *fig, ofstream &ofstr);
    figure *InParal(ifstream &ifstr);
}

#endif //PARALLELEPIPED_H