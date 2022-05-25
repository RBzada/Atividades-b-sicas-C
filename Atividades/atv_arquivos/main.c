#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *p;
    FILE *p1;
    char ch;

    p = fopen("arquivo.txt", "r");
    if(p == NULL){
        printf("Primeiro arquivo não pôde ser aberto! ");
        exit(1);
    }

    p1 = fopen("arquivo1.txt", "w");
    if(p1 == NULL){
        printf("O segundo arquivo não pôde ser aberto!");
        exit(1);
    }

    while((ch = getc(p)) != EOF){
        putc(ch, p1);
    }

    fclose(p);
    fclose(p1);
    return 0;
}