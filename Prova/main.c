#include <stdio.h>
#include "limpeza.h"
#include "analisedado.h"
#define N 13

int main(){
    int arr[13] = {5, 3, 3, 8, 7, 10, 10, -5, 2, 7, 12, 9, 14};

    // Printando as notas originais:
    printf("- As notas sao: ");
    for (int i = 0; i < 13; i++){
        printf(" %d", arr[i]);
    }

    // Com a chamada da função as alterações feitas dentro dela vão para fora também:
    clean(arr, N);

    // Printando as novas notas:
    printf("\n- Com a limpeza, as nota ficaram: ");
    for (int i = 0; i < 13; i++){
        printf(" %d", arr[i]);
    }

    // Tirando a média das notas: 
    printf("\n- A media das notas informada eh: %.2f", media(arr, N));
    
    // Tirando a mediana das notas: 
    printf("\n- A mediana das notas informadas eh: %.2f", mediana(arr, N));

    return 0;
}

