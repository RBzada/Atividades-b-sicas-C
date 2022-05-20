#include <stdio.h>
#include "limpeza.h"
#include "analisedado.h"
#define N 13

float mediana(int arr[], int n);

int main(){
    int arr[13] = {5, 3, 3, 8, 7, 10, 10, -5, 2, 7, 12, 9, 14};

    for (int i = 0; i < 13; i++){
        printf(" %d", arr[i]);
    }
    printf("\n%.2f", mediana(arr, N));
    return 0;
}

float mediana(int arr[], int n){
    if (n % 2 == 1){
        return arr[n/2];
    }
    if (n % 2 == 0){
        return (float)(arr[n/2] + arr[n/2 - 1]) / 2;
    }
}

