/*
Escreva um programa que calcula a raiz de uma função do primeiro. 
A entrada são os coeficientes A e B.
Função do primeiro grau é representada por: y = Ax+B. A raiz é o valor na qual a reta cruza o eixo X, isto é, o valor de -B/A.
Utilize variáveis de precisão simples e duas casas decimais na saída. 
*/

#include <stdio.h>

int main() {
    float A, B, y;

    scanf("%f", &A);
    scanf("%f", &B);

    y = (-B) / A;

    printf("%.2f", y);
    return 0;
}