#ifndef CONTAINER_STRUCT_H
#define CONTAINER_STRUCT_H

#include "element.h"
using namespace std;

namespace namesp {
    struct container {
        int currentAmount = 0;
        static const int MAXSIZE = 1024;
        static const int Q = 3; // Шаг поиска при коллизиях
        element hash[MAXSIZE];
    };
}

#endif //CONTAINER_STRUCT