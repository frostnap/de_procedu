#include <cmath>
#include "tetraedr_funct.h"

using namespace std;

namespace namesp {

    double FuncTetraedr(tetraedr *fig) {
        return fig->length*fig->length*fig->length*sqrt(2)/12;
    }
}