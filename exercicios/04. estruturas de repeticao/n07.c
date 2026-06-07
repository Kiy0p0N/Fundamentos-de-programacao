/*
Escreva um programa que some os números pares de 0 a 100 (inclusive).
*/

#include <stdio.h>

int main(){
    int quoc, i;

    quoc = 0;

    for (i = 2; i <=100; i = i + 2){
        quoc = quoc + i;
    }

    printf("%d", quoc);

    return 0;
}