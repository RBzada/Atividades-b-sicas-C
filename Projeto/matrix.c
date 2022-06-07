#include <stdio.h>
#include "matrix.h"
#include <stdlib.h>

// Funções para criação de matrizes:

Matrix create_matrix(int *data, int n_rows, int n_cols){
    Matrix matriz;

    matriz.data = data;
    matriz.n_rows = n_rows;
    matriz.n_cols = n_cols;
    matriz.stride_rows = n_cols;
    matriz.stride_cols = 1;
    matriz.offset = 0;

    return matriz;
}

Matrix zeros_matrix(int n_rows, int n_cols){
    int *arr = malloc((n_cols * n_rows) * sizeof(int));

    for (int i = 0; i < (n_cols * n_rows); i++){
        arr[i] = 0;
    }

    return create_matrix(arr, n_rows, n_cols);
}

Matrix full_matrix(int n_rows, int n_cols, int value){
    int *arr = malloc((n_cols * n_rows) * sizeof(int));

    for (int i = 0; i < (n_cols * n_rows); i++){
        arr[i] = value;
    }

    return create_matrix(arr, n_rows, n_cols);
}

Matrix i_matrix(int n){
    int *arr = malloc((n * n) * sizeof(int));

    for (int i = 0; i < (n * n); i++){
        if (i % (n + 1) == 0){
            arr[i] = 1;
        }
        else{
            arr[i] = 0;
        }
    }

    return create_matrix(arr, n, n);
}











// Funções para acessar elementos:
 
int get_element(Matrix matrix, int ri, int ci){    
    return matrix.data[(ri * matrix.stride_rows)  + (ci * matrix.stride_cols)];
}

void put_element(Matrix matrix, int ri, int ci, int elem){
    int contagem = 0;
    for (int linha = 0; linha < matrix.n_rows; linha++){
        for (int coluna = 0; coluna < matrix.n_cols; coluna++){
            if (linha == ri && coluna == ci){
                printf("%d ", elem);
            }
            else{
                printf("%d ", matrix.data[contagem]);
                contagem++;
            }
            
        }
        printf("\n");
    }
}

void print_matrix(Matrix matrix){
    int contagem = 0;
    
    for (int linha = 0; linha < matrix.n_rows; linha++){
        for (int coluna = 0; coluna < matrix.n_cols; coluna++){
            printf("%d ", matrix.data[contagem]);
            contagem++;
        }
        printf("\n");
    }
}


// Funções para manipulação de dimensões:

Matrix reshape(Matrix matrix, int new_n_rows, int new_n_cols){
    return create_matrix(matrix.data, new_n_rows, new_n_cols);
}


// Funções de agregação:

int min(Matrix matrix){
    int min = matrix.data[0];
    for (int i = 0; i < (matrix.n_cols * matrix.n_rows); i++){
        if(matrix.data[i] < min){
            min = matrix.data[i]; 
        }
   }
   return min;
}

int max(Matrix matrix){
    int max = matrix.data[0];
    for (int i = 0; i < (matrix.n_cols * matrix.n_rows); i++){
        if(matrix.data[i] > max){
            max = matrix.data[i]; 
        }
   }
   return max;
}

int argmin(Matrix matrix){
    int min = matrix.data[0];
    int indice = 0;
    for (int i = 0; i < (matrix.n_cols * matrix.n_rows); i++){
        if(matrix.data[i] < min){
            min = matrix.data[i];   
        }
    }

   for (int i = 0; i < (matrix.n_cols * matrix.n_rows); i++){
        if(matrix.data[i] == min){
            return indice;   
        }
        indice++;
   }
}

int argmax(Matrix matrix){
    int max = matrix.data[0];
    int indice = 0;
    for (int i = 0; i < (matrix.n_cols * matrix.n_rows); i++){
        if(matrix.data[i] > max){
            max = matrix.data[i];   
        }
   }

   for (int i = 0; i < (matrix.n_cols * matrix.n_rows); i++){
        if(matrix.data[i] == max){
            return indice;   
        }
        indice++;
   }
}

