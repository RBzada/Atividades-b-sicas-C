#include <stdio.h>
int fatorial(int num);
int permutacao(int m, int n);
int arranjo(int m, int n);
int combinacao(int m, int n);

int main()
{
    int m, n;
    printf("Digite a quantidade de valores disponiveis: ");
    scanf("%d", &m);
    printf("Digite a quantidade de posicoes possiveis:");
    scanf("%d", &n);

    while (m < n){
        printf("O numero de posicoes possiveis deve ser menor que o de valores disponiveis!\n");
        printf("\nDigite a quantidade de valores disponiveis: ");
        scanf("%d", &m);
        printf("Digite a quantidade de posicoes possiveis:");
        scanf("%d", &n);
        if (m > n){
            break;
        }
    }

    if (m == n){
        printf("\nIsso eh uma permutacao\n");
        printf("A formula eh: P = n!\n");
        printf("O resultado dessa permutacao eh: %d", permutacao(m, n));
    }

    else if (m > n){
        int importa;
        printf("A ordem das posicoes importa? Digite 1 para sim e 0 para nao: ");
        scanf("%d", &importa);

        while (importa!= 0 && importa != 1){
            printf("Esse valor nao eh valido, tente novamente!\n");
            printf("A ordem das posicoes importa? Digite 1 para sim e 0 para nao: ");
            scanf("%d", &importa);
            if (importa == 1 | importa == 0){
                break;
            }
        }

        if (importa == 1){
            printf("\nIsso eh um arranjo. A formula eh: A(n,p) = n!/(n - p)!");
            printf("\nO resultado desse arranjo eh: %d", arranjo(m,n));  
            return 0;
            
        }

        else if(importa == 0){
            printf("\nIsso eh uma combinacao. A formula eh: C(n,p) = n!/(n-p)!p!");
            printf("\nO resultado dessa combinacao eh: %d", combinacao(m, n));
            return 0;
        }
    }
    return 0;
}


int fatorial(int num){
    int resultado = 1;
    for (int c = 1; c <= num; c++){
         resultado *= c;
    }
    return resultado;
}

int permutacao(int m, int n){
        return fatorial(m);
}

int arranjo(int m, int n){
    return fatorial(m)/fatorial((m-n));
}

int combinacao(int m, int n){
    return fatorial(m)/(fatorial(m-n)*fatorial(n));
}