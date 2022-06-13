// Rafael Barboza de Almeida
// Matrícula 20210026760

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



// Funções para manipulação de dimensões:

Matrix reshape(Matrix matrix, int new_n_rows, int new_n_cols);



// Funções de agregação:

int min(Matrix matrix);

int max(Matrix matrix);

int argmin(Matrix matrix);

int argmax(Matrix matrix);



// Funções de operações aritméticas:

Matrix add(Matrix Matrix_1, Matrix matrix_2);

Matrix sub(Matrix Matrix_1, Matrix matrix_2);

Matrix mul(Matrix matrix_1, Matrix matrix_2);

Matrix division(Matrix matrix_1, Matrix matrix_2);


#endif
