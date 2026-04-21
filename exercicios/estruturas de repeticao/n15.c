/*
Escreva um programa que leia um inteiro N e mostre, com precisão de 3 casas decimais, 
a soma dos N primeiros termos da sequência: S = 1/1 + 3/2 + 5/3 + 7/4 + 9/5 + ...
Utilize variáveis de precisão simples para o cálculo.

OBS: Ao construir sua fórmula, garanta que o numerador será um número real forçando ".0" ao número.
*/

#include <stdio.h>

int main(){
    int n;
    float soma = 0.0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        soma += (i * 2.0 - 1) / (i);
    }

    printf("%.3f ", soma);

    return 0;
}