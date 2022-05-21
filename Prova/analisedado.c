#include "analisedado.h"


float media(int arr[], int n){
    int soma;
    for (int i = 0; i < n; i++){
        soma += arr[i];
    }
    return (float)soma / n;
}


float mediana(int arr[], int n){
    if (n % 2 == 1){
        return arr[n/2];
    }

    if (n % 2 == 0){
        return (float)(arr[n/2] + arr[n/2 - 1]) / 2;
    }
}

int vmax(int arr[], int n){
    int max = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int vmin(int arr[], int n){
    int min = 11;
    for (int i = 0; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min; 
}
