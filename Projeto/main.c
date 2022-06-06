#include <stdio.h>
#include "matrix.h"

int main(){
    Matrix matriz;
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    create_matrix(arr, 3, 3);
    printf("Matriz: \n");
    print_matrix(matriz);

    return 0;
}

