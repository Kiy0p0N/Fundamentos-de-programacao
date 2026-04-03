/*
Escreva um programa que receba um número inteiro e informe se este número é par ou ímpar. 
Seu programa deve imprimir como resposta apenas "par" ou "impar"
*/

#include <stdio.h>

int main(){
    int n, q;

    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("par");
    } else {
        printf("impar");
    }

    return 0;
}