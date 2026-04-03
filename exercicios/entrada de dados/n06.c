/*
Escreva um programa para converter um ângulo de graus para radianos. 
Utilize variáveis de precisão dupla e a constante M_PI da biblioteca <math.h>
Fórmula: Rad = G/180 * π 
*/

#include <stdio.h>
#include <math.h>

int main() {
    double g, rad;

    scanf("%lf", &g);

    rad = (g / 180) * M_PI;

    printf("%lf", rad);

    return 0;
}