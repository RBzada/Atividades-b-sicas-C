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

Matrix create_matrix(int *data, int n_rows, int n_cols);

void print_matrix(Matrix matrix);

Matrix zeros_matrix(int n_rows, int n_cols);

#endif
