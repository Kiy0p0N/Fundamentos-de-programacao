/*
Escreva um programa que leia o valor de um produto e calcule o desconto de 12%. 
Imprima o valor final com desconto e imprima o valor do desconto. 
Utilize variáveis de precisão simples e duas casas decimais na saída.
*/

#include <stdio.h>

int main() {

    float p, d, vF;

    scanf("%f", &p);

    d = p * 0.12;
    vF = p - d;

    printf("%.2f\n", d);
    printf("%.2f\n", vF);

    return 0;
}