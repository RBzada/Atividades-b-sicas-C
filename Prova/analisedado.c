#include "analisedado.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

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

    for (int i = 0; i < n; i++){
        soma += arr[i];
    }
    mean = (float)soma / n;

    for (int r = 0; r < n; r++){
        somatoriodist += pow(arr[r] - mean, 2);
    }

    return sqrt(somatoriodist / n);
}

void moda(int arr[], int n){
    int *cont = malloc(n * sizeof(int));
    int v = 0;
    int frequenciamaior = 0;

    // O array cont recebe a frenquência de todos o números
    for (int i = 0; i < n; i++){
        cont[i] = 0;
    }

    // Contando a frequência de cada número
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i] == arr[j]){
                cont[i]++;
            }
        }
    }

    // Colocando 0 nos índices das frequências onde o número em arr[] se repete
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] == arr[j]){
                cont[j] = 0;
            }
        }
    }

    // Descubrindo qual a maior frequencia e a qual valor ela se refere
    for (int i = 0; i < n; i++){
        if (frequenciamaior < cont[i]){
            frequenciamaior = cont[i];
        }
    }

    if (frequenciamaior == 1){
        printf("- Esse conjunto de notas nao possui moda");
    }
    else{
        printf("- A moda eh: ");
        for (int i = 0; i < n; i++){
            if(frequenciamaior == cont[i]){ 
                printf("%d ", arr[i]);
            }
        }
    }
}