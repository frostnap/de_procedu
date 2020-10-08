#include <iostream>

#include "figure_funct.h"
#include "figure_out.h"

using namespace std;

namespace namesp {

    void Out(void *element, ofstream &ofstr) {
        auto *fig = (figure*)element;
        ofstr << "V=" << FigureFunct(fig) << "; ";
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
        ofstr << "temperature of melting=" << fig->temperatureOfMelting << ";";
        ofstr << "density=" << fig->density << ";";
    }

}