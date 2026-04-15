/*
Escreva um programa que leia N notas e as armazene em um array. 
N é um número natural. Calcule a média das notas.

Como saída do programa apresente quais são as notas maiores que a média que foi calculada. 
Utilize variáveis de precisão simples e duas casas decimais para formatar a saída. Apresente as notas em uma mesma linha.

Ordem de entrada dos dados: Número de notas, seguido das notas.
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float notas[n], soma, media;

    soma = 0;

    for(int i = 0; i < n; i++){
        scanf("%f", &notas[i]);

        soma = soma + notas[i];
    }

    media = soma / n;

    for(int i = 0; i < n; i++){
        if(notas[i] > media){
            printf("%.2f ", notas[i]);
        }
    }

    return 0;
}