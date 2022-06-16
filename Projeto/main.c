// Rafael Barboza de Almeida
// Matrícula 20210026760

#include <stdio.h>
#include "matrix.h"

int main(){
    int arr[9] = {5, 21, 6, 4, 2, 30, 1, 20, 9};
    Matrix matriz;
    matriz.data = arr;
    matriz.n_cols = 3;
    matriz.n_rows = 3;
    matriz.offset = 0;
    matriz.stride_cols = 1;
    matriz.stride_rows = 3;


    int arr1[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Matrix matriz_1;
    matriz_1.data = arr1;
    matriz_1.n_cols = 3;
    matriz_1.n_rows = 3;
    matriz_1.offset = 0;
    matriz_1.stride_cols = 1;
    matriz_1.stride_rows = 3;



    // FUNÇÕES PARA CRIAR MATRIZES: 

    // Criar Matriz:
    printf(" Matriz: \n");
    print_matrix(create_matrix(arr1, 3, 3));


    // Criar Matriz de zeros:
    printf("\n Matriz de zeros: \n");
    print_matrix(zeros_matrix(6, 3));


    // Criar Matriz de valor n:
    printf("\n Matriz de n: \n");
    print_matrix(full_matrix(6, 3, 7));


    // Criar Matriz identidade:
    printf("\n Matriz identidade: \n");
    print_matrix(i_matrix(7));


    //Criar Matriz Tile:
    printf("\n Matriz repetida x vezes: \n");
    print_matrix(tile_matrix(matriz_1, 2));





    // FUNÇÕES PARA ACESSAR ELEMENTO:

    // Pegar elemento:

    printf("\n O elemento escolhido foi: ");
    printf("%d \n", get_element(matriz, 2, 2));
    

    // Colocar elemento:

    printf("\n Matriz original: \n");
    print_matrix(matriz);
    printf("\n Com a mudanca de elemento a matriz fica: \n");
    put_element(matriz, 2, 1, 11);






    // FUNÇÕES PARA MANIPULAÇAO DE DIMENSÕES:

    int arr2[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Matrix matriz_2;
    matriz_2.data = arr1;
    matriz_2.n_cols = 3;
    matriz_2.n_rows = 3;
    matriz_2.offset = 0;
    matriz_2.stride_cols = 1;
    matriz_2.stride_rows = 3;


    // Redimensionar matriz:
    printf("\n A matrix redimensionada fica: \n");
    print_matrix(reshape(matriz_2, 3, 3));


    // Slice de uma matriz:
    //printf("\n Matriz com slice: \n");
    //print_matrix(slice(matriz_2, 0, 2, 1, 3));


    // Matriz transposta:
    printf("\n Matriz transposta: \n");
    print_matrix(transpose(matriz_1));






    // FUNÇÕES DE AGREGAÇÃO:

    // Pegar o menor e maior elemento da matriz:
    //printf("\n O menor elemento é %d, no o índice %d", min(matriz), argmin(matriz));
   // printf("\n O maior elemento é %d, no índice %d", max(matriz), argmax(matriz));





    // FUNÇÕES DE OPERAÇÕES ARITMÉTICAS:

    //Adição dos elementos das matrizes:
   // printf("\n\n Soma dos elementos das matrizes: \n");
   // print_matrix(add(matriz, matriz_1));


    // Subtração dos elementos das matrizes:
   // printf("\n\n Subtração dos elementos das matrizes: \n");
    //print_matrix(sub(matriz, matriz_1));


    // Multiplicação dos elemenos das matrizes:
    //printf("\n\n Multiplicação dos elementos das matrizes: \n");
   // print_matrix(mul(matriz, matriz_1));


    // Divisão dos elemenos das matrizes:
    //printf("\n\n Divisão dos elementos das matrizes: \n");
   // print_matrix(division(matriz, matriz_1));

    return 0;
}

