/*
Escreva um programa que fará a leitura de N valores reais de precisão simples. 
Armazene esses valores em um vetor. 
Calcule e apresente com precisão de 3 casas decimais a soma de todos os valores lidos. 
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    while(n <= 0){
        scanf("%d", &n);
    }

    float vetor[n], soma;
    soma = 0;

    for(int i = 0; i < n; i++){
        scanf("%f", &vetor[i]);

        soma = soma + vetor[i];
    }

    printf("%.3f", soma);

    return 0;
}