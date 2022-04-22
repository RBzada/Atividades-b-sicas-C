#include <stdio.h>

int main(){
    char str;
    int letras[26] = {0};
    int mostcomom = 0;
    printf("Digite as palavras em letra maiuscula e aperte enter quando desejar finalizar: ");
    printf("\n");
    while(str != '\n'){
        
        str = getchar();
        if(str >= 65 && str <= 90){
            letras[str - 65]++;
        } 
    }

    for (int i = 0; i < 26; i++){
        if (letras[i] > mostcomom){
            mostcomom = letras[i];
        }
    }
    printf("Seu palpite deve possuir as letras: \n");
    for (int y = 0; y < 26; y++){
        if (letras[y] == mostcomom){
            putchar(y + 'A');
            printf("\n");
        }
    }
    return 0;
}