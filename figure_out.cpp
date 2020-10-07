#include <fstream>
#include <iostream>
#include "figure_out.h"
using namespace std;

namespace namesp {

    void Out(void *element, ofstream &ofstr) {
        auto *fig = (figure*)element;
        switch(fig->type) {
            case mType::SPHERE:
                OutSphere(fig, ofstr);
                break;
            case mType::PARALLELEPIPED:
                OutParal(fig, ofstr);
                break;
            case mType::TETRAEDR:
                OutTetr(fig, ofstr);
                break;
        }
        ofstr << "density=" << fig->density << ";";
    }

}