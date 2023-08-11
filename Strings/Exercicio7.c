// Faça um programa que conte o numero de 1’s que aparecem em um string. Exemplo: 0011001 -> 3

#include <stdio.h>

int main(){
    char entrada[50];
    int i = 0, cont = 0;

    fgets(entrada, 50, stdin);

    while(entrada[i] != '\0' && entrada[i] != '\n'){
        if(entrada[i] == '1'){
            cont++;
        }
        i++;
    }

    printf("A quantidade de '1' na string é: %d\n", cont);

    return 0;
}