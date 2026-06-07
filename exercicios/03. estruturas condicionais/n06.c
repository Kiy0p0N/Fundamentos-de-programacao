/*
Escreva um programa que leia um valor inteiro e diga se pertence ou não ao intervalo abaixo.
(−∞,10]∪(14,∞)

A entreda é um valor inteiro. Resposta "ok" ou "nok"
*/

#include <stdio.h>

int main (){
    int n;

    scanf("%d", &n);

    if (n <= 10 || n > 20) {
        printf("ok");
    } else{
        printf("nok");
    }

    return 0;
}