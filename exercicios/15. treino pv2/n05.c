/*
Escreva um programa que leia um valor inteiro positivo N.
Em seguida imprima o valor da soma dos N termos da série: 1/1 + 1/2 + 1/3 + ...  + 1/N. 
Utilize variáveis de precisão simples na saída com número três casas decimais.

OBS: Utilize (1.0) como numerador.
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    float soma = 0;

    for(int i = 1; i <= n; i++){
        soma += 1.0 / i;
    }

    printf("%.3f", soma);

    return 0;
}