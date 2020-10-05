#include "figure_clear.h"

using namespace std;

namespace namesp {

    void Clear(figure * element) {
        figure * fig = (figure*)element;
        switch(fig->type) {
            case mType::SPHERE:
                ClearSphere(fig);
                break;
            case mType::PARALLELEPIPED:
                ClearParal(fig);
                break;
        }
    }
}