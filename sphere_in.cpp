#include "sphere_in.h"

using namespace std;

namespace namesp {

    sphere InSphere(ifstream &ifstr, bool &error){
        sphere temp{};
        ifstr >> temp.radius;
        if(ifstr.fail() || ifstr.bad()) error = true;
        if (!ifstr.eof()) ifstr.get();
        return temp;
    }

}