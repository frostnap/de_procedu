#include <fstream>
#include <iostream>

#include "figure_funct.h"

using namespace std;

namespace namesp {

    double FigureFunct(figure *fig) {
        if (fig->type == mType::SPHERE) {
            return (double)FuncSphere((sphere*)fig);
        } else if (fig->type == mType::PARALLELEPIPED) {
            return (double)FuncParall((parallelepiped*)fig);
        } else if (fig->type == mType::TETRAEDR) {
            return (double)FuncTetraedr((tetraedr*)fig);
        } else return 0;
    }
}