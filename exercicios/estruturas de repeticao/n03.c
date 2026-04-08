/*
Escreva um programa que leia um valor inteiro positivo N. Não há necessidade de validar esse valor. 
Em seguida imprima o valor de um contador mostrando os valores de 1 até N, um por linha. 
Se o valor digitado N não for positivo, nenhum valor de contador deverá ser impresso.
*/

#include <stdio.h>

int main (){
    int n, i;

    scanf("%d", &n);

    if (n < 0){
        return 0;
    }

    for (i = 1; i <= n; i++){
        printf("%d\n", i);
    }

    return 0;
}