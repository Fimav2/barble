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
vector <int> shaker_sort(vector <int> mass){
    int f;
    for(int i = 0;i < mass.size();i++)
        for(int j = 0;j < mass.size()-1;j++){
                if(mass[j] > mass[j+1]){
                    int c = mass[j];
                    mass[j] = mass[j+1];
                    mass[j+1] = c;
}}
            for(int g = 0; g < mass.size()-1;g++){
                    if(mass[g] > mass[g+1]){
                    f = mass[g];
                    mass[g] = mass[g+1];
                    mass[g+1] = f;
                    }
            }
            return mass;
        }

