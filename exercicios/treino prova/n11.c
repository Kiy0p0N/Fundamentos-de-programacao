/*
Escreva um programa que leia um valor inteiro positivo N e verifique se é um palíndromo.

O palíndromo é um número que lido da esquerda para direita  ou da direita para equerda é igual.

Sua saída deve ser "ok" se for palíndromo e "nok" caso contrário.

Ex: 2332, 1221
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n < 0){
        scanf("%d", &n);
    }

    int original = n;
    int reverso = 0;

    while(n > 0){
        int digito = n % 10;
        reverso = reverso * 10 + digito;
        n = n / 10;
    }

    if(original == reverso){
        printf("ok");
    } else{
        printf("nok");
    }

    return 0;
}