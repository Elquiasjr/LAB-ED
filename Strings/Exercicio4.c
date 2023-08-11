// 4. Faça um programa que leia um nome e imprima as 4 primeiras letras do nome. 

#include <stdio.h>

int main(){

    char nome[30];

    printf("Digite um nome: \n");
    fgets(nome, 30, stdin);

    for(int i = 0; i < 4; i++){
        printf("%c", nome[i]);
    }
    printf("\n");

    return 0;
}