#include "container_out.h"

namespace namesp {
    void Out(container &c, ofstream &ofstr) {
        for(int i = 0; i < namesp::container::Q; i++) { // Проход по основным индексам
            for(int j = 0; i+j < namesp::container::MAXSIZE; j++) { // Проход по индексам коллизий
                if(c.hash[i+j*namesp::container::Q].data == nullptr) // Прекращение поиска
                    break;
                ofstr << "Table index: " << i+j*namesp::container::Q << ". ";
                Out(c.hash[i+j*namesp::container::Q].data, ofstr);
                ofstr << endl;
            }
        }
    }
}