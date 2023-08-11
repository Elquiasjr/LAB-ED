// Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da pessoa e a palavra “ACEITA”, caso contrário imprimir “NÃO ACEITA”. 

#include <stdio.h>
#include <string.h>

int main(){
    char nome[50], sexo[10];
    int idade;

    printf("Insira seu nome:\n");
    fgets(nome, 50, stdin);
    printf("Insira seu sexo:\n");
    fgets(sexo, 10, stdin);
    printf("Insira sua idade:\n");
    scanf("%d", &idade);

    if(strcmp(sexo, "feminino\n") == 0 && idade < 25){
        printf("ACEITA");
    }
    else{
        printf("NÃO ACEITA");
    }

    return 0;
}