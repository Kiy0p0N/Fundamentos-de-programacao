/*
Escreva um programa que leia dois inteiros positivos N e X. 
A seguir, mostre quais são os N primeiros números naturais que são múltiplos de X. 
Imprima os números em uma única linha, separados entre si por um único espaço.
 

Ordem de entrada: N e X.
*/

#include <stdio.h>

int main(){
    int n, x;
    int multiplo;

    scanf("%d", &n);
    scanf("%d", &x);

    while(n < 0 || x < 0){
        scanf("%d", &n);
        scanf("%d", &x);  
    }

    for(int i = 1; i <= n; i++){  
        multiplo = x * i; 
        printf("%d ", multiplo);
    }

    return 0;
}