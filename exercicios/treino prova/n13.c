/*
Escreva um programa que peça um valor inteiro positivo N e imprima, de forma regressiva, os valores pares de N até 2 (dois). 
Imprima os valores na mesma linha separados por um único espaço. 
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n < 0){
        scanf("%d", &n);
    }

    for(int i = n; i >= 2; i--){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }

    return 0;
}