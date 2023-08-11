// 5. Digite um nome, calcule e retorne quantas letras tem esse nome.

#include <stdio.h>

int main(){
    char nome[30];
    printf("Digite um nome: \n");
    fgets(nome, 30, stdin);

    int tamanho = 0;

    for(int i = 0; i < 30; i++){
        if(nome[i] == '\0' || nome[i] == '\n'){
            break;
        }
        else if(nome[i] == ' '){
            continue;
        }
        else{
            tamanho++;
        }
    }

    printf("Esse nome tem %d letras\n", tamanho);
    return 0;
}