#include <vector>
#include "algorithm.h"

using namespace std;

vector <int> bubble_sort(vector <int> mass){
    int c;
    for(int i = 0; i < mass.size() - 1; i++)
        for(int j = 0; j < mass.size() - 1 - i; j++){
            if(mass[j] > mass[j+1]){
                c = mass[j];
                mass[j] = mass[j+1];
                mass[j+1] = c;
            }
        }
        return mass;
}

vector <int> shaker_sort(vector <int> mass) {

    int f;

    for(int i = 0; i < mass.size() / 2; i++) { 
        for(int j = i; j < mass.size() - 1 - i; j++){
            if(mass[j] > mass[j+1]){
                f = mass[j];
                mass[j] = mass[j+1];
                mass[j+1] = f;
            }
        }

        for(int j = mass.size() - i - 1; j > i; j--) {
            if(mass[j] < mass[j-1]) {
                f = mass[j];
                mass[j] = mass[j-1];
                mass[j-1] = f;
            }
        }
    }
        
            
    return mass;
}
