#ifndef CONTAINER_IN_H
#define CONTAINER_IN_H

#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include "figure.h"
#include "container_struct.h"
#include "container_hashfunctions.h"
using namespace std;

namespace namesp {
    void In(container &c, ifstream &ifstr);
}

#endif //CONTAINER_IN_H