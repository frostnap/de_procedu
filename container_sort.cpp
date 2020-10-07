#include "container_sort.h"

using namespace std;

namespace namesp {

    void Sort(container &c) {
        if(c.currentAmount < 1) return;
        int i_break = 0, it = 0;
        for(int i = 0; i < c.currentAmount-1; i++) {
            while(c.hash[it].data == nullptr && i_break < 3) {
                i_break++;
                it++;
            }
            if(i_break > 2) break;
            i_break = 0;
            int j_break = 0, jt = it+1;
            for(int j = i+1; j < c.currentAmount; j++) {
                while(c.hash[jt].data == nullptr && j_break < 3) {
                    j_break++;
                    jt++;
                }
                if(j_break > 2) break;
                j_break = 0;
                //cout << FigureFunct((figure*)c.hash[it].data) << "vs" << FigureFunct((figure*)c.hash[jt].data) << "\n";
                if(FigureFunct((figure*)c.hash[it].data) > FigureFunct((figure*)c.hash[jt].data)) {
                    //cout << "YES\n";
                    auto temp = c.hash[jt].data;
                    c.hash[jt].data = c.hash[it].data;
                    c.hash[it].data = temp;
                }
                jt++;
            }
            it++;
        }
        cout << "\nsorted\n";
    }
}