#include <stdio.h>
#define pi  3.14

int menu(int n, int m);
float area_quadrado(float L);
float area_cicle(float r);
float volume_cili(float h,float r);
float volume_piramide(float h, float L);
    
int main(){   
    
    int n, m;
    printf("Digite 1 para calcular area ou 2 para calcular o volume: ");
    scanf("%d", &n);

    while (n < 1 | n > 2){
        printf("O valor digitado nao esta disponivel. Tente novamente!\n");
        printf("\nDigite 1 para calcular area ou 2 para calcular o volume: ");
        scanf("%d", &n);
    }

    if (n == 1){
        printf("\nDigite 1 para area do quadrado ou 2 para area do circulo: ");
        scanf("%d", &m);

        while (m < 1 | m > 2){
            printf("\nEsse valor nao esta disponivel! Tente novamente.");
            printf("\nDigite 1 para area do quadrado e 2 para área do circulo: ");
            scanf("%d", &m);
        }
    }

    if (n == 2){
        printf("\nDigite 1 para o volume do cilindro ou 2 para volume da piramide: ");
        scanf("%d", &m);

        while (m < 1 | m > 2){
            printf("\nEsse valor nao esta disponivel! Tente novamente.");
            printf("\nDigite 1 para o volume do cilindro ou 2 para volume da piramide quadrangular: ");
            scanf("%d", &m);
        }
    }

    menu(n, m);
    return 0;
}

int menu(int n, int m){
    
    if (n == 1){
        if (m == 1){
            float L;
            printf("\nDigite o lado do quadrado: ");
            scanf("%f", &L);
            printf("\nO valor da area do quadrado eh: %.2f", area_quadrado(L));
        }
        else{
            float r;
            printf("\nDigite o raio do circulo: ");
            scanf("%f", &r);
            printf("\nO valor da area do circulo eh: %.2f", area_cicle(r));
        }
        
    }
    else if(n == 2){
        
        if (m == 1){
            float h, r;
            printf("\nDigite a altura do cilindro: ");
            scanf("%f", &h);
            printf("Digite o raio da base do cilindro: ");
            scanf("%f", &r);
            printf("\nO volume do cilindro eh: %.2f", volume_cili(h, r));
        }
        else{
            float h, L;
            printf("\nDigite a altura da piramide: ");
            scanf("%f", &h);
            printf("Digite o lado do quadrado da base: ");
            scanf("%f", &L);
            printf("\nO volume da piramide eh: %.2f", volume_piramide(h, L));
        }
    }
}


float area_quadrado(float L){
    return (L * L);
} 


float area_cicle(float r){
    return (pi * r * r);
}


float volume_cili(float h, float r){
    return area_cicle(r) * h;
}

float volume_piramide(float h, float L){
    return (area_quadrado(L) * h) / 3;
}










