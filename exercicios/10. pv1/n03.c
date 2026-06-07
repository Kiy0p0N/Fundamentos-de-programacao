/*
Escreva um programa que faz a leitura dos lados de um triângulo e verifica se é um triângulo retângulo.
Utilize variáveis de precisão dupla.

O triângulo é um retângulo se respeitar a fórmula:

h2 = c12 + c22

Ordem de leitura: catetos seguido da hipotenusa.
*/

#include <stdio.h>

int main(){
    double h, c1, c2;
    scanf("%lf %lf %lf", &c1, &c2, &h);
    
    if((h*h) == ((c1*c1) + c2*c2)){
        printf("ok");
    } else{
        printf("nok");
    }
    
    return 0;
}