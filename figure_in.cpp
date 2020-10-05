#ifndef FIGURE_IN_H
#define FIGURE_IN_H

#include <fstream>
#include <iostream>

#include "parallelepiped.h"
#include "sphere.h"

using namespace std;

namespace namesp {

    void *In(ifstream &ifstr) {
        auto *element = new figure{};
        char data[255];
        if (!ifstr.eof()) ifstr.get();
        ifstr.getline(data, 255);
        if (std::string(data) == "1") {
            element->s = InSphere(ifstr);
            element->type = mType::SPHERE;
        } else if (std::string(data) == "2") {
            element->p = InParal(ifstr);
            element->type = mType::PARALLELEPIPED;
        } else {
            delete element;
            cout << "Error!" << endl;
            return nullptr;
        }
        ifstr >> element->density;
        return element;
    }
}

#endif //FIGURE_IN_H