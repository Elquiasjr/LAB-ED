// 14. Escreva um programa que leia duas palavras e diga qual deles vem primeiro na ordem alfabética. Dica: ‘a’ é menor do que ‘b’. 

#include <stdio.h>

int main() {

    char palavra1[20], palavra2[20];

    printf("Escreva a primeira palavra: \n");
    fgets(palavra1, 20, stdin);
    printf("Escreva a segunda palavra: \n");
    fgets(palavra2, 20, stdin);
    
    for(int i = 0; i < 20; i++){
        if(palavra1[i] == palavra2[i]){
            continue;
        } else if(palavra1[i] < palavra2[i]){
            printf("\n%s%s", palavra1, palavra2);
            break;
        } else{
            printf("\n%s%s", palavra2, palavra1);
            break;
        }
    }

    return 0;
}