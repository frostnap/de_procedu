#include "sphere_in.h"

using namespace std;

namespace namesp {

    figure *InSphere(ifstream &ifstr){
        auto *temp = new sphere;
        ifstr >> temp->radius;
        if (!ifstr.eof()) ifstr.get();
        return (figure *) temp;
    }

}