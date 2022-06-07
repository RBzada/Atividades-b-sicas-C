#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    int *data;
    int n_rows;
    int n_cols;
    int stride_rows;
    int stride_cols;
    int offset;
} Matrix;


// Funções para criação de matrizes:

Matrix create_matrix(int *data, int n_rows, int n_cols);

Matrix zeros_matrix(int n_rows, int n_cols);

Matrix full_matrix(int n_rows, int n_cols, int value);

Matrix i_matrix(int n);




// Funções para acessar elementos:

int get_element(Matrix matrix, int ri, int ci);

void put_element(Matrix matrix, int ri, int ci, int elem);

void print_matrix(Matrix matrix);

#endif
