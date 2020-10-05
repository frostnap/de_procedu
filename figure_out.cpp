#ifndef FIGURE_OUT_H
#define FIGURE_OUT_H

#include <fstream>
#include <iostream>

#include "parallelepiped_out.h"
#include "sphere_out.h"

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
        }
        ofstr << "density=" << fig->density << ";";
    }

}

#endif //FIGURE_OUT_H