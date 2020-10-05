#include "sphere_in.h"

using namespace std;

namespace namesp {

    sphere InSphere(ifstream &ifstr){
        sphere temp{};
        ifstr >> temp.radius;
        if (!ifstr.eof()) ifstr.get();
        return temp;
    }

}