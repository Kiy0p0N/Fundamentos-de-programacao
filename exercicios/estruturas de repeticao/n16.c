/*
Escreva um programa que leia uma quantidade desconhecida de valores inteiros não-negativos e mostre a média (desses valores), com 2 (dois) casa decimal. 
O programa deve ler valores (solicitar para o(a) usuário(a)) continuamente até um valor negativo ser inserido para interromper. O valor negativo não deverá ser considerado para o cálculo da média. 
Utilize variáveis de precisão simples para o cálculo da média.
*/

#include <stdio.h>

int main(){
    int n, soma, totalN;
    float media;

    soma = 0;
    totalN = 0;

    while(n >= 0){
        scanf("%d", &n);

        if(n >= 0){
            soma = soma + n;
            totalN++;
        }
    }

    media = (float)soma / totalN;

    printf("%.2f", media);

    return 0;
}