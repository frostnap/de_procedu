#include <fstream>
#include <iostream>
#include "figure_funct.h"
#include "parallelepiped_out.h"
#include "sphere_out.h"

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
        }
        ofstr << "density=" << fig->density << ";";
    }

}