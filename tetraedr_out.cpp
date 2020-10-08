#include "tetraedr_out.h"

using namespace std;

namespace namesp {
    void OutTetr(figure *fig, ofstream &ofstr) {
        auto *pa = (tetraedr*) fig;
        ofstr << "tetraedr: length=" << pa->length << ";";
    }
}