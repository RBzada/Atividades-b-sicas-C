// Nome: Rafael Barboza de Almeida
// Matrícula: 20210026760

#include <stdio.h>
#include <stdlib.h>
#include "histograma.h"
#include "analisedado.h"

void histograma(int arr[], int n){
    int *cont = malloc(n * sizeof(int));
    int max;

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

    // Colocando 0 nos índices dos números ele se repete em arr[]
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] == arr[j]){
                arr[j] = 0;
            }
        }
    }

    max = vmax(cont, n);
    printf("\n\n");

    for (int i = 0; i < 10 + (max/2); i++){
        printf(" ");
    }

    printf("HISTOGRAMA DAS NOTAS\n");
    printf("Notas");
    printf("\n");

    for (int i = 0; i < n; i++){
        if (arr[i] > 0 || cont[i] != 0){
            if(arr[i] < 10){
                printf("   %d |", arr[i]);      
            }   
            else{
                printf("  %d |", arr[i]);      

            }
        }
        if (arr[i] > 0 || cont[i] != 0){
            for (int j = 0; j < cont[i]; j++){
                printf("■   ");
            }
            printf("\n");
        }
    }

    printf("▬ ▬ ▬ ▬ ▬ ▬ ▬ ▬ ▬ ▬ ▬ ▬ ▬ ▬ ▬");

    for(int i = 0; i < max; i++){
        printf(" ▬");
    }
    
    printf("\n    ");

    for(int i = 1; i <= max; i++){
        if(i <= 10){
        printf("  %d ", i);
        }
        else{
            printf(" %d ", i);
        }
    }

    printf("\n");

    for (int i = 0; i < 10 + (max/2); i++){
        printf(" ");
    }

    printf("Frequência");

}