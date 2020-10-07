#include "tetraedr_clear.h"

namespace namesp {

    void ClearTetraedr(figure *fig) {
        delete ((tetraedr*)fig);
    }
}