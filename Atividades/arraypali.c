#include <stdio.h>
#define N = 0

int pali(int n, int arr[], int indice);

int main(){
    int n = 0, num, c;
    int arr[0];

    for(c = 0;;c++){
        printf("Digite o %d numero da lista(digite -1 para finalizar): ", c);
        scanf("%d", &num);
        if (num == -1){
            break;
        }
        n++;
        arr[c] = num;
    }
    
    pali(n, arr, 0);
    return 0;
 }

int pali(int n, int arr[], int indice){
    int cont = 0;
    n--;
    if (arr[indice] == arr[n]){
        cont++;
        if (cont == (n/2)){
            return 0;
        }
    }
    else{
        indice++;
        n--;
        printf("False");
        pali(n, arr, indice);
    }
}