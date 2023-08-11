// 10. Faça um programa que receba uma palavra e a imprima de trás-para-frente. 

#include <stdio.h>
#include <string.h>

int main(){

    char palavra[50], tras_frente[50];
    fgets(palavra, 50, stdin);
    int tamanho = strlen(palavra) - 2, j = 0;

    for(int i = tamanho; i >= 0; i--){
        tras_frente[j] = palavra[i];
        j++;
    }

    printf("%s\n", tras_frente);
    return 0;
}