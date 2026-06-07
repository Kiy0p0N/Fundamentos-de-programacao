/*
Escreva um programa que leia um valor natural N e informe se é primo. 
Um número é primo se for divisível apenas por si mesmo e por 1 (um). O primeiro número primo é 2.

Se for primo mostre "ok", caso contrário mostre "nok".
*/

#include <stdio.h>

int main (){
    int n, i;

    scanf("%d", &n);

    if (n == 1){
        printf("nok");
        return 0;
    }

    if (n == 2){
        printf("ok");
        return 0;
    }

    if (n % 2 == 0){
        printf("nok");
        return 0;
    }

    for (i = 3; i < n; i = i +2){
        if (n % i == 0){
            printf("nok");
            return 0;
        }
    }

    printf("ok");

    return 0;
}