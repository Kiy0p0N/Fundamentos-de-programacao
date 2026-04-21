/*
Escreva um programa que leia um inteiro N positivo e implemente um contador regressivo, para imprimir na tela os números de N até 1. 
Imprima os números em uma única linha, separados entre si por um único espaço. 
*/

#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    while(n < 0){
        scanf("%d", &n);
    }

    for(int i = n; i > 0; i--){
        printf("%d ", i);
    }

    return 0;
}