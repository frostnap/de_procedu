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
        ofstr << "temperature of melting=" << fig->temperatureOfMelting << ";";
        ofstr << "density=" << fig->density << ";";
    }

}