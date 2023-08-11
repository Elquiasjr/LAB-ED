// 9. Entre com um nome e imprima o nome somente se a primeira letra do nome for “a” (maiúscula ou minúscula)

#include <stdio.h>

int main(){

    char entrada[50];
    fgets(entrada, 50, stdin);

    if(entrada[0] == 'a' || entrada[0] == 'A'){
        printf("%s\n", entrada);
    }
    else{
        printf("Erro\n");
    }


    return 0;
}