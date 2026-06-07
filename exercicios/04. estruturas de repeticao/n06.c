/*
Escreva um programa que calcula a área de um triângulo, e impeça os(as) usuário(as) de digitar base e altura inválidas, isto é, <= 0. 
Utilize variáveis de precisão simples. 
Não há necessidade de informar qual valor foi inserido de forma inválida (base ou altura). 
Qualquer um dos dois valores que forem inválidos, o programa deve solicitar novamente todas as entradas.

A = (b * h)/2

Ordem de entrada: Base, altura
*/

#include <stdio.h>

int main(){

    float b, h, area;

    scanf("%f", &b);
    scanf("%f", &h);

    while (b <= 0 || h <= 0){
        scanf("%f", &b);
        scanf("%f", &h);
    }

    area = (b * h) / 2;

    printf("%f", area);

    return 0;
}