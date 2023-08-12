// 13. Faça um programa que receba duas frases distintas e imprima de maneira invertida, trocando as letras A por *. 

#include <stdio.h>
#include <string.h>

int main (){

    char frase1[50], frase2[50];
    fgets(frase1, 50, stdin);
    fgets(frase2, 50, stdin);

    int tamanho1 = strlen(frase1), tamanho2 = strlen(frase2);
    for(int i = 0; i < tamanho1; i++){
        if(frase1[i] == 'a' || frase1[i] == 'A'){
            frase1[i] = '*';
        }
    }

    for(int i = 0; i < tamanho2; i++ ){
        if(frase2[i] == 'a' || frase2[i] == 'A'){
            frase2[i] = '*';
        }
    }

    printf("%s%s", frase2, frase1);
    return 0;
}