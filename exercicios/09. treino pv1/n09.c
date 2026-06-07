/*
Escreva um programa que leia um valor inteiro positivo N. 
Em seguida imprima o valor de um contador mostrando os valores de N até 1. Cada valor em uma linha. 
Se o valor digitado N não for positivo, não imprima nada.
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    if(n < 1){
        return 0;
    }

    for(int i = n; i > 1; i--){
        printf("%d", i);
    }

    return 0;
}