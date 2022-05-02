#include <stdio.h>

int search(int *arr, int n, int v);

int main(){
    int *p, arr[8] = {1, 2, 3, 5, 10, -8, 7, 1};

    search(arr, 8, 7);
    return 0;
}

int search(int *arr, int n, int v){
    int *p, cont = 0;
    for (p = arr; p < (arr + n); p++){
        if (*p == v){
            printf("%d", cont);
            return 0;
        }
        cont += 1;
    }
    printf("-1");
}