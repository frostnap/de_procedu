#include "figure_getkey.h"

namespace namesp {
    int getKey(void *element) { // Получаем из объекта ключ = его тип
        return ((figure *) element)->type;
    }
}