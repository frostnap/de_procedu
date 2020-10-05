#include "parallelepiped_out.h"

using namespace std;

namespace namesp {
    void OutParal(figure *fig, ofstream &ofstr) {
        auto *pa = (parallelepiped*) fig;
        ofstr << "parallelepiped: A=" << pa->data_A
        << ";B=" << pa->data_B << ";C=" << pa->data_C << ";";
    }
}