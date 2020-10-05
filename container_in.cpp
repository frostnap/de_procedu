#include "container_in.h"

using namespace std;

namespace namesp {
    void In(container &c, ifstream &ifstr) {
        int inputToGet;
        ifstr >> inputToGet;
        for(int i = 0; i < inputToGet; i++) {
            void *inputElement = In(ifstr);
            int finalIndex = HashAdd(c, getKey(inputElement));
            if(finalIndex == -1) // Если заполнена таблица
                return;
            c.hash[finalIndex].data = inputElement;
        }
        cout << "Successfully read!\n";
    }
}