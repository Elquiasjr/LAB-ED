// 12. Faça um programa que preencha um vetor com os modelos de cinco carros (exemplos de modelos: Fusca, Gol, Vectra, etc.). 
// Preencha outro vetor com o consumo desses carros, isto é, quantos quilómetros cada um deles faz com um litro de combustível. 
// Calcule e mostre: (a) O modelo de carro mais econômico; 
// (b) Quantos litros de combustível cada um dos carros cadastrados consomem para percorrer uma distancia de 1.000 quilômetros. 

#include <stdio.h>

int main(){
    
    char modelos[5][10] = {"Fusca", "Gol", "Vectra", "HB20", "Fiesta"};

    int consumo[5] = {10, 12, 15, 9, 8};
    int menor_consumo = consumo[0], indice = 0;

    for(int i = 1; i < 5; i++){
        if(menor_consumo > consumo[i]){
            menor_consumo = consumo[i];
            indice = i;
        }
    }

    printf("O carro com o menor consumo é o indice: %d\n", indice);
    printf("Consumindo %d litros por quilometro\n", consumo[indice]);
    printf("O modelo de carro é %s\n", modelos[indice]);

    printf("\nLista de quanto cada modelo consome a cada 1.000 quilômetros:\n");
    for(int i = 0; i < 5; i++){
        printf("O modelo %s consome %d litros a cada 1000 quilômetros\n", modelos[i], consumo[i]* 1000);
    }   

    return 0;
}