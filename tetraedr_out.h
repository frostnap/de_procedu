#ifndef TETRAEDR_OUT_H
#define TETRAEDR_OUT_H

#include "tetraedr_struct.h"
#include "figure_struct.h"
#include <fstream>

using namespace std;

namespace namesp {

    void OutTetr(figure *fig, ofstream &ofstr);
}

#endif //TETRAEDR_OUT_H