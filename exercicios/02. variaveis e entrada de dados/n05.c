/*
Escreva um programa para converter uma dada temperatura de graus Fahrenheit para graus Celsius. 
Utilize variáveis de precisão simples
Fórmula: C = (F-32) * 5/9
*/

#include <stdio.h>

int main (){

    float c, f;

    scanf("%f", &f);

    c = (f - 32) * 5.0 / 9.0;

    printf("%f", c);

    return 0;
}