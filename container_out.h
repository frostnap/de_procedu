#ifndef CONTAINER_OUT_H
#define CONTAINER_OUT_H

#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include "figure.h"
#include "container_struct.h"
using namespace std;

namespace namesp {
    void Out(container &c, ofstream &ofstr);
}

#endif //CONTAINER_OUT_H