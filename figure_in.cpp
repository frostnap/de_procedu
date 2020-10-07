#include <fstream>
#include <iostream>

#include "tetraedr.h"
#include "parallelepiped.h"
#include "sphere.h"

using namespace std;

namespace namesp {

    void *In(ifstream &ifstr) {
        auto *element = new figure{};
        char data[255];
        if (!ifstr.eof()) ifstr.get();
        ifstr.getline(data, 255);
        if (string(data) == "1") {
            element->s = InSphere(ifstr);
            element->type = mType::SPHERE;
        } else if (string(data) == "2") {
            element->p = InParal(ifstr);
            element->type = mType::PARALLELEPIPED;
        } else if (string(data) == "3") {
            element->t = InTetr(ifstr);
            element->type = mType::TETRAEDR;
        } else {
            delete element;
            cout << "Error!" << endl;
            return nullptr;
        }
        ifstr >> element->density;
        return element;
    }
}