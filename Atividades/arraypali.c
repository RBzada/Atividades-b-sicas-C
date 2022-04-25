#include <stdio.h>

int pali(int n, int arr[], int indice);

int main(){
    int n = 0, num, c;
    int arr[100] = {0};

    for(c = 0;;c++){
        printf("Digite o %d numero da lista(digite -1 para finalizar): ", c);
        scanf("%d", &num);
        if (num == -1){
            break;
        }
        else{
            n++;
            arr[c] = num;
        }
    }
    if (pali(n - 1, arr, 0) == 0){
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
 }

int pali(int n, int arr[], int indice){
    if (n == 1){
        if (arr[0] == arr[1]){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        if (arr[indice] == arr[n]){
            indice++;
            n--;
            if (n >= indice){
                pali(n, arr, indice);
            }
        }
        else{
            return 0;
        }
    }
}
