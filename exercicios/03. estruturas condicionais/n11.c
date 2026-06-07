/*
Escreva um programa que receba quatro números inteiros e imprima, nesta ordem, qual deles é o menor e qual deles é o maior.
*/

#include <stdio.h>

int main(){
    
    int n1, n2, n3, n4, menor, maior;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    menor = n1;
    maior = n1;

    if (n2 > maior){
        maior = n2;
    }
    if (n2 < menor){
        menor = n2;
    }

    if (n3 > maior){
        maior = n3;
    }
    if (n3 < menor){
        menor = n3;
    }

    if (n4 > maior){
        maior = n4;
    }
    if (n4 < menor){
        menor = n4;
    }

    printf("%d %d", menor, maior);

    return 0;
}