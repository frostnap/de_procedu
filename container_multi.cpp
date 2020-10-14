#include "container_multi.h"

namespace namesp {
    void Multi(container &c, ofstream &ofstr) {
        ofstr << "Multimethod:" << endl;
        for(int i = 0; i < namesp::container::Q; i++) { // Проход по основным индексам
            for(int j = 0; i+j < namesp::container::MAXSIZE; j++) { // Проход по индексам коллизий
                figure* fig1 = (figure*)c.hash[i+j*namesp::container::Q].data;
                if(fig1 == nullptr) break;
                figure* fig2;

                for(int z = 0; z < namesp::container::Q; z++) { // Проход по основным индексам
                    for(int q = 0; q+z < namesp::container::MAXSIZE; q++) { // Проход по индексам коллизий
                        fig2 = (figure*)c.hash[z+q*namesp::container::Q].data;
                        if(fig2 == nullptr) break;
                        if(fig2 == fig1) continue;
                        switch(fig1->type) {
                            case mType::SPHERE:
                                switch(fig2->type) {
                                    case mType::SPHERE:
                                        ofstr << "Sphere + sphere";
                                        break;
                                    case mType::TETRAEDR:
                                        ofstr << "Sphere + tetraedr";
                                        break;
                                    case mType::PARALLELEPIPED:
                                        ofstr << "Sphere + parallelepiped";
                                        break;
                                }
                                break;
                            case mType::TETRAEDR:
                                switch(fig2->type) {
                                    case mType::SPHERE:
                                        ofstr << "Tetraedr + sphere";
                                        break;
                                    case mType::TETRAEDR:
                                        ofstr << "Tetraedr + tetraedr";
                                        break;
                                    case mType::PARALLELEPIPED:
                                        ofstr << "Tetraedr + parallelepiped";
                                        break;
                                }
                                break;
                            case mType::PARALLELEPIPED:
                                switch(fig2->type) {
                                    case mType::SPHERE:
                                        ofstr << "Parallelepiped + sphere";
                                        break;
                                    case mType::TETRAEDR:
                                        ofstr << "Parallelepiped + tetraedr";
                                        break;
                                    case mType::PARALLELEPIPED:
                                        ofstr << "Parallelepiped + parallelepiped";
                                        break;
                                }
                                break;
                        }
                        ofstr << endl;
                        Out((c.hash[z+q*namesp::container::Q]).data, ofstr);
                        ofstr << endl;
                        Out((c.hash[i+j*namesp::container::Q]).data, ofstr);
                        ofstr << endl;
                    }
                }
                ofstr << endl;
            }
        }
    }
}