#include "tetraedr_in.h"

using namespace std;

namespace namesp {

    tetraedr InTetr(ifstream &ifstr, bool &error) {
        tetraedr temp;
        ifstr >> temp.length;
        if(ifstr.fail() || ifstr.bad()) error = true;
        if (!ifstr.eof()) ifstr.get();
        return temp;
    }
}