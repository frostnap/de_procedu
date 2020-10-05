#include "container_clear.h"

namespace namesp {
    void Clear(container &c) {
        for(int i = 0; i < namesp::container::q; i++) { // Проход по основным индексам
            for(int j = 0; i+j < namesp::container::MAXSIZE; j++) { // Проход по индексам коллизий
                if(c.hash[i+j].data == nullptr) // Прекращение поиска
                    break;
                Clear((figure*)c.hash[i+j].data);
                c.hash[i+j].data = nullptr;
            }
        }
        c.currentAmount = 0;
    }
}