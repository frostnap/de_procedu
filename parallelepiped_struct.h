#ifndef PARALLELEPIPED_STRUCT_H
#define PARALLELEPIPED_STRUCT_H

#include "mType.h"

namespace namesp {

    struct parallelepiped {
        double density;
        mType num_type; // Тип объекта
        int data_A;
        int data_B;
        int data_C;
    };
}

#endif //PARALLELEPIPED_STRUCT_H