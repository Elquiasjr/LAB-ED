// 15. O codigo de César é uma das mais simples e conhecidas técnicas de
// criptografia. É um tipo de substituição na qual cada letra do texto é substituída
// por outra, que se apresenta no alfabeto abaixo dela um numero fixo de vezes.
// Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se
// tornaria ‘E’, e assim por diante. Implemente um programa que faça uso desse
// Código de César (3 posições), entre com uma string e retorne a string codificada.
// Exemplo:
// String: a ligeira raposa marrom saltou sobre o cachorro cansado 
// Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR 


#include <stdio.h>
#include <string.h>

int main(){

    char string[60], new_string[60];
    fgets(string, 60, stdin);
    int tamanho = strlen(string);

    for(int i = 0; i < tamanho-1; i++){
        if(string[i] == ' '){
            new_string[i] = ' ';
        }else{
            new_string[i] = string[i] - 29;
        }
        
    }
    printf("%s\n", new_string);

    return 0;
}