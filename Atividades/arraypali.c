#include <stdio.h>
#define N = 0

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
    pali(n - 1, arr, 0);
    return 0;
 }

int pali(int n, int arr[], int indice){
    int cont;
    if (arr[indice] == arr[n]){
        indice++;
        n--;
        printf("TRUE");
        if (n >= indice){
            pali(n, arr, indice);
        }
    }
    else{
        printf("FALSE");
        return 0;
    }
}
