/*
Escreva um programa para converter uma dada temperatura em graus Celsius para graus Fahrenheit. 
Utilize variáveis de precisão simples.
Fórmula: F = (9/5 * C) + 32
*/

#include <stdio.h>

int main(){
    
    float c, fa;
    
    scanf("%f", &c);
    
    fa = ((9.0 / 5.0) * c) + 32;

    printf("%f", fa);

    return 0;
}