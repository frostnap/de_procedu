#include "sphere_struct.h"
#include "figure_struct.h"
#include <fstream>

using namespace std;

namespace namesp {

    void OutSphere(figure *fig, ofstream &ofstr) {
        auto sp = fig->s;
        ofstr << "sphere: radius=" << sp.radius << ";";
    }
}
