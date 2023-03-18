#include <vector>
#include "algoritm.h"

using namespace std;

vector <int> bubble_sort(vector <int> mass) {

    int c;

    for(int i = 0; i < mass.size(); i++){
        for(int j = 0; j < mass.size(); j++) {
            if(mass[j] > mass[j+1]){
                c = mass[j];
                mass[j] = mass[j+1];
                mass[j+1] = c;
            }
        }
    }

    return mass;
}
