#include "parallelepiped_in.h"

using namespace std;

namespace namesp {

    parallelepiped InParal(ifstream &ifstr, bool &error) {
        parallelepiped temp;
        ifstr >> temp.data_A;
        if(ifstr.fail() || ifstr.bad()) error = true;
        ifstr >> temp.data_B;
        if(ifstr.fail() || ifstr.bad()) error = true;
        ifstr >> temp.data_C;
        if(ifstr.fail() || ifstr.bad()) error = true;
        if (!ifstr.eof()) ifstr.get();
        return temp;
    }
}