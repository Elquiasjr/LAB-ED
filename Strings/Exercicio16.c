//18. Faça um programa que, dada uma string, diga se ela e um palíndromo ou não.
// Lembrando que um palíndromo e uma palavra que tenha a propriedade de
// poder ser lida tanto da direita para a esquerda como da esquerda para a
// direita. Exemplo: ovo arara Socorram-me, subi no ônibus em Marrocos.
// Anotaram a data da maratona.

#include <stdio.h>
#include <string.h>

int main(){

    char entrada[40], formated[40];
    fgets(entrada, 40, stdin);
    int tamanho = strlen(entrada), j = 0;

    for(int i = 0; i < tamanho; i++){
        if(entrada[i] < 91 && entrada[i] > 64){
            formated[j] = entrada[i] + 32;
            j++;
        } else if(entrada[i] < 123 && entrada[i] > 96){
            formated[j] = entrada[i];
            j++;
        }
    }

    int tam_form = strlen(formated);
    j = tam_form-1;
    formated[tam_form] = '\0';

    int palindromo = 1;
    for(int i = 0; i < tam_form; i++){
        if(formated[i] != formated[j]){
            printf("Não é palindromo!\n");
            palindromo = 0;
            break;
        }
        else{
            j--;
        }
    }

    if(palindromo == 1){
        printf("É palindromo!\n");
    }

    return 0;
}