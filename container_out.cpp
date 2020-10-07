#include "container_out.h"

namespace namesp {
    void Out(container &c, ofstream &ofstr, mType ignoreSomeType) {
        for(int i = 0; i < namesp::container::q; i++) { // Проход по основным индексам
            for(int j = 0; i+j < namesp::container::MAXSIZE; j++) { // Проход по индексам коллизий
                if(c.hash[i+j*namesp::container::q].data == nullptr) // Прекращение поиска
                    break;
                if(((figure*)c.hash[i+j*namesp::container::q].data)->type == ignoreSomeType)
                    continue;
                ofstr << "Table index: " << i+j*namesp::container::q << ". ";
                Out(c.hash[i+j*namesp::container::q].data, ofstr);
                ofstr << endl;
            }
        }
    }
}