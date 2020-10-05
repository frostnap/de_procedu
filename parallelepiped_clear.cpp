#include "parallelepiped_clear.h"

namespace namesp {

    void ClearParal(figure *fig) {
        delete ((parallelepiped*)fig);
    }
}