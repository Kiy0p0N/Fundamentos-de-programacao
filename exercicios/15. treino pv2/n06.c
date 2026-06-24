/*
Escreva um programa que leia um valor inteiro positivo N.
Em seguida imprima o valor de um contador mostrando os valores de 1 até N, um por linha. 
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d\n", i);
    }

    return 0;
}