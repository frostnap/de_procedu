#include "sphere_clear.h"

namespace namesp {
    void ClearSphere(figure *fig) {
        delete ((sphere*)fig);
    }
}