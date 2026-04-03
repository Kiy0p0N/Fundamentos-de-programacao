/*
Fazer um programa para calcular a área de um trapézio. 
Entradas podem ser inteiras ou número real.
Fórmula: A = ((B+b)*h)/2  , onde B = base maior, b = base menor e h = altura.
Ordem de entrada: Base Menor, Base Maior, Altura.
*/

#include <stdio.h>

int main(){
    float area, bMa, bMe, h;

    scanf("%f", &bMa);

    scanf("%f", &bMe);

    scanf("%f", &h);

    area = ((bMa + bMe) * h) / 2;

    printf("%f", area);

    return 0;
}