// 3. Crie um programa que compara duas strings (não use a função ao strcmp).

#include <stdio.h>
#include <string.h>

int main(){

    char primeira[30], segunda[30];
    printf("Insira a primeira string: \n");
    fgets(primeira, 30, stdin);

    printf("Insira a segunda string: \n");
    fgets(segunda, 30, stdin);

    int tamanho1 = strlen(primeira), tamanho2 = strlen(segunda);
    printf("%d %d \n", tamanho1, tamanho2);
    int iguais = tamanho1 == tamanho2;
    if(iguais == 0){
        printf("As strings são diferentes");
    }
    else{
        for(int i = 0; i < tamanho1; i++){
            if(primeira[i] == segunda[i]){
                continue;
            }
            if(primeira[i] != segunda[i]){
                printf("As strings são diferentes");
                iguais = 0;
                break;
            }
        }
        if(iguais == 1){
            printf("As strings são iguais\n");
        }
    }

    return 0;
}