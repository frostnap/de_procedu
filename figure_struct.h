#ifndef FIGURE_STRUCT_H
#define FIGURE_STRUCT_H
#include "mType.h"
#include "tetraedr_struct.h"
#include "sphere_struct.h"
#include "parallelepiped_struct.h"

namespace namesp {

    struct figure {
        union {
            sphere s;
            parallelepiped p;
            tetraedr t;
        };
        int density;
        int temperatureOfMelting;
        mType type; // Тип объекта
    };
}

#endif //FIGURE_STRUCT_H