/*
Escreva um programa que leia um valor inteiro positivo N. Não há necessidade de validar esse valor. 
Em seguida imprima o valor da soma acumulada dos valores de 1 até N. Se o valor digitado N não for positivo, o somatório deverá ser 0 (zero).
*/

#include <stdio.h>

int main(){

    int n, quoc, i;

    quoc = 0;

    scanf("%d", &n);

    if (n < 0){
        printf("%d", quoc);

        return 0;
    }

    for (i = 0; i <= n; i++){
        quoc = quoc + i;
    }

    printf("%d", quoc);

    return 0;
}