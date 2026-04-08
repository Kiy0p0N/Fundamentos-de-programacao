/*
Escreva um programa que leia um valor inteiro positivo N. 
Não há necessidade de validar esse valor. 
Em seguida imprima o valor da soma dos valores da série: 1/1 + 1/2 + 1/3 + ...  + 1/N.  
Se N for 0 (zero),  o somatório deverá ser 0.000000. Utilize variáveis de precisão simples na saída com número padrão de casas decimais.

OBS: Utilize (1.0) como numerador.
*/

#include <stdio.h>

int main(){

    int n;
    float quoc, i;

    quoc = 0;

    scanf("%d", &n);

    if (n == 0){
        printf("%f" ,quoc);
        return 0;
    }

    for (i = 1; i <= n; i++){
        quoc = quoc + (1 / i);
    }

    printf("%f", quoc);

    return 0;
}