/*
Escreva um programa que leia um número natural N e calcule seu fatorial: n! = 1 * 2 * 3 * 4 * ... *n 
Considere que 0! = 1, isto é, "O fatorial de 0 (zero) é igual a 1".

Utilize variáveis inteiras. 
*/

#include <stdio.h>

int main(){

    int n, f, i;
    f = 1;

    scanf("%d", &n);

    if (n == 0 || n == 1){
        printf("1");
        return 0;
    }

    for (i = n; i > 1; i--){
        f = f * i;
    }

    printf("%d", f);

    return 0;
}