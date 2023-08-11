// Escreva um programa que substitui as ocorrências de um caractere 0 em uma string por outro caractere 1. 

#include <stdio.h>

int main() {

    char entrada[50];
    int i = 0;

    fgets(entrada, 50, stdin);

    while(entrada[i] != '\0' && entrada[i] != '\n'){
        if(entrada[i] == '0')
            entrada[i] = '1';
        i++;
    }

    printf("String: %s", entrada);
    return 0;
}