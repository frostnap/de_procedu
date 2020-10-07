#ifndef FIGURE_STRUCT_H
#define FIGURE_STRUCT_H
#include "mType.h"
#include "sphere_struct.h"
#include "parallelepiped_struct.h"

namespace namesp {

    struct figure {
        union {
            sphere s;
            parallelepiped p;
        };
        int density;
        int temperatureOfMelting;
        mType type; // Тип объекта
    };
}

#endif //FIGURE_STRUCT_H