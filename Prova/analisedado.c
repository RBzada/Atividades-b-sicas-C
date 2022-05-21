#include "analisedado.h"
#include <math.h>

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

float std(int arr[], int n){
    // Soma vai receber a soma das notas
    // Somatoriodist vai receber a soma de todas as distâncias ao quadrado 

    int soma = 0;
    float mean, somatoriodist;

    for (int i = 0; i < n; i++) {
        soma += arr[i];
    }
    mean = (float)soma / n;

    for (int r = 0; r < n; r++) {
        somatoriodist += pow(arr[r] - mean, 2);
    }

    return sqrt(somatoriodist / n);
    

}