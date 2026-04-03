/*
Escreva um programa que leia um valor inteiro e informe se o valor lido é ou não é um múltiplo de 11.
O programa deve imprimir como resposta apenas "sim" ou "nao".
*/

#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    if(n % 11 == 0) {
        printf("sim");
    } else{
        printf("nao");
    }

    return 0;
}