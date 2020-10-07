#include "tetraedr_in.h"

using namespace std;

namespace namesp {

    tetraedr InTetr(ifstream &ifstr) {
        tetraedr temp;
        ifstr >> temp.length;
        if (!ifstr.eof()) ifstr.get();
        return temp;
    }
}