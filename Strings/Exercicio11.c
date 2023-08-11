// 11. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra. 
// Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.

#include <stdio.h>

int main(){

    char palavra[50], sub;
    fgets(palavra, 50, stdin);
    int cont = 0, i = 0;
    int posicoes[50];

    while(palavra[i] != '\0' && palavra[i] != '\n'){
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            posicoes[cont] = i;
            cont ++;
        }
        i++;
    }
    printf("Quantidade de vogais é: %d\n", cont);

    printf("Insira um caractere para substituir todas as vogais da palavra\n");
    scanf("%c", &sub);

    for(int j = 0; j < cont ; j++){
        palavra[posicoes[j]] = sub;
    }

    printf("A nova palavra é: %s\n", palavra);

    return 0;
}
