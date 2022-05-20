#include "limpeza.h"

int clean(int *arr, int n){
    for(int i = 0; i < n; i++){
        if (arr[i] > 10){
            arr[i] = 10;
        }
        if (arr[i] < 0){
            arr[i] = 0;
        }
    }
    return arr;
}