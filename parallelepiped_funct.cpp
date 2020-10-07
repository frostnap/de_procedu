#include "parallelepiped_funct.h"

using namespace std;

namespace namesp {

    int FuncParall(parallelepiped *fig) {
        return fig->data_A * fig->data_B * fig->data_C;
    }
}