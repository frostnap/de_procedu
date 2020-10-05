#include "parallelepiped_in.h"

using namespace std;

namespace namesp {

    figure *InParal(ifstream &ifstr) {
        auto *temp = new parallelepiped;
        ifstr >> temp->data_A >> temp->data_B >> temp->data_C;
        if (!ifstr.eof()) ifstr.get();
        return (figure *) temp;
    }
}