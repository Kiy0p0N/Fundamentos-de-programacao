/*
Escreva um programa que leia um valor inteiro positivo N e em seguida imprima o valor reverso desse número. 
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n < 0){
        scanf("%d", &n);
    }

    int reverso = 0;

    while(n > 0){
        int digito = n % 10;
        reverso = reverso * 10 + digito;
        n = n / 10;
    }

    printf("%d", reverso);

    return 0;
}