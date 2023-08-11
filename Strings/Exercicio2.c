// 2. Crie um programa que calcula o comprimento de uma string (nao use a função strlen).

// a função fgets lê a entrada até a quebra de linha, e a quebra de linha é incluida na leitura
#include <stdio.h>

int main(){

    char palavra[30];
    printf("Escreva uma palavra: \n");
    fgets(palavra, 30, stdin);

    int tamanho = 0, i = 0;

    while(palavra[i] != 10){
        printf("letra: %d\n", (int)palavra[i] );
        tamanho++;
        i++;
    }

    printf("O tamanho da palavra é: %d\n", tamanho);

    return 0;
}