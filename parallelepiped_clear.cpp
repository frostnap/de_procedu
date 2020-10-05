#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include "parallelepiped_clear.h"

namespace namesp {

    void ClearParal(figure *fig) {
        delete ((parallelepiped*)fig);
    }
}

#endif //PARALLELEPIPED_H