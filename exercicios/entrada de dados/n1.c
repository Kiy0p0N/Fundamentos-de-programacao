/*
Fazer um programa para calcular a área de um triângulo. 
Entradas podem ser inteiras ou número real.
Fórmula: A = (b.h)/2 , onde b = base e h = altura
*/

#include <stdio.h>

int main(){

    float area, b, h;

    printf("Digite um valor para a base: \n");
    scanf("%f", &b);

    printf("Digite um valor para a altura: \n");
    scanf("%f", &h);

    area = (b * h) / 2;

    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}