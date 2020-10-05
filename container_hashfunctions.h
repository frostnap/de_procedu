#ifndef CONTAINER_HASH_H
#define CONTAINER_HASH_H

#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include "figure.h"
#include "container_struct.h"

using namespace std;

namespace namesp {
    int HashLinear(container &c, int index);
    int HashAdd(container &c, int typeKey);
}

#endif //CONTAINER_HASH_H