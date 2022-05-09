#include <stdio.h>
#include "statistcs.h"
#define N 6

int main(){
    int notas[6] = {5, 7, 8, -5, 15, 10};
    
    printf("A media das notas foi: %f", media(notas, N));
    printf("\nA nota maxima foi: %d", max(notas, N));
    printf("\nA nota minima foi: %d", min(notas, N));

    return 0;
}
