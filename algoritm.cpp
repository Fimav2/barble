#include <vector>
#include "algorithm.h"

using namespace std;

vector <int> bubble_sort(vector <int> mass){
    int c;
    for(int i = 0; i < mass.size() - 1; i++)
        for(int j = 0; j < mass.size() - 1 - j; j++){
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
vector<int> comb_sort(vector <int> mass){
    int c;
    int N = mass.size();
    int step = N - 1;
    double factor = 1.2473309;

    while (step >= 1){
        for(int i = 0; i < N - step;i++){
            if(mass[i] > mass[i+step]){
                c = mass[i];
                mass[i] = mass[i+step];
                mass[i+step] = c;
            }

        }
        step /= factor;
    }
    return mass;
}
