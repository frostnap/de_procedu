#include "parallelepiped_in.h"

using namespace std;

namespace namesp {

    parallelepiped InParal(ifstream &ifstr) {
        parallelepiped temp;
        ifstr >> temp.data_A >> temp.data_B >> temp.data_C;
        if (!ifstr.eof()) ifstr.get();
        return temp;
    }
}