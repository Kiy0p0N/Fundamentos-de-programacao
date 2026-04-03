/*
Escreva um programa para calcular a área de um círculo.
Entradas podem ser inteiras ou número real.
Utilize a constante M_PI para representar o número π. Utilize variáveis de precisão dupla.
Fórmula: A = π * r2, onde r = raio.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double r, area;

    scanf("%lf", &r);

    area = M_PI * r * r;

    printf("%lf", area);

    return 0;
}