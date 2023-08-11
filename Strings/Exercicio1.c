// 1. Faça um programa que então leia uma string e a imprima. 

#include <stdio.h>

int main (){

    char entrada[10];

    printf("Digite seu nome:\n");
    fgets(entrada, 10, stdin);
    printf("Seu nome é: %s", entrada);

    return 0;
}