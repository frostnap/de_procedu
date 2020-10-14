#include "parallelepiped_out.h"

using namespace std;

namespace namesp {
    void OutParal(figure *fig, ofstream &ofstr) {
        auto pa = fig->p;
        ofstr << "parallelepiped: A=" << pa.data_A
        << ";B=" << pa.data_B << ";C=" << pa.data_C << ";";
    }
}