#include <fstream>
#include <iostream>

#include "tetraedr.h"
#include "parallelepiped.h"
#include "sphere.h"

using namespace std;

namespace namesp {

    void *In(ifstream &ifstr) {
        bool error = false;
        auto *element = new figure{};
        char data[255];
        if (!ifstr.eof()) ifstr.get();
        ifstr.getline(data, 255);
        if (string(data) == "1") {
            element->s = InSphere(ifstr, error);
            element->type = mType::SPHERE;
        } else if (string(data) == "2") {
            element->p = InParal(ifstr, error);
            element->type = mType::PARALLELEPIPED;
        } else if (string(data) == "3") {
            element->t = InTetr(ifstr, error);
            element->type = mType::TETRAEDR;
        } else {
            delete element;
            cout << "Error!" << endl;
            return nullptr;
        }
        if(error) {
            delete element;
            return nullptr;
        }
        ifstr >> element->density;
        ifstr >> element->temperatureOfMelting;
        return element;
    }
}