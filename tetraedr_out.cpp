#include "tetraedr_out.h"

using namespace std;

namespace namesp {
    void OutTetr(figure *fig, ofstream &ofstr) {
        auto te = fig->t;
        ofstr << "tetraedr: length=" << te.length << ";";
    }
}