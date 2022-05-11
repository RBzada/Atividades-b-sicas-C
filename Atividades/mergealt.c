#include <stdio.h>

void concat(char *str1, char *str2, int x, int y);

int len(char *in);

int main (int argc, char *argv[]){  
    concat(argv[1], argv[2], len(argv[1]), len(argv[2]));
    return 0;
}

void concat(char *str1, char *str2, int tamanho1, int tamanho2){
    int n = 0;
    char str3[41] = "";
    if (tamanho1 == tamanho2){
        for(int i = 0; i < tamanho1; i++){
            if (str1[i] != '\0'){
                str3[n] = str1[i];
            }

            n++;

            if (str2[i] != '\0'){
                str3[n] = str2[i];
            }

            n++;
        }
    }

    else if (tamanho1 > tamanho2){

        for(int i = 0; i < tamanho1; i++){
            if (str1[i] != '\0'){
                str3[n] = str1[i];
            }

            n++;

            if (str2[i] != '\0'){
                str3[n] = str2[i];
                n++;
            }

            
        }
    }

    else{

        for(int i = 0; i < tamanho2; i++){
            if (str1[i] != '\0'){
                str3[n] = str1[i];
                n++;
            }

            

            if (str2[i] != '\0'){
                str3[n] = str2[i];
            }

            n++;
        }
    }

    puts(str3);
}

int len(char *in){
    int i = 0;
    while(in[i] != '\0'){
        i++;
    }
    return i;
}
