/*
Escreva um programa que calcule o salário semanal de uma pessoa, determinado pelas seguintes condições. 
Caso o número de horas trabalhadas seja menor ou igual a 40, a pessoa recebe 8 reais por hora trabalhada. 
Caso contrário, ela recebe 320 reais fixos e mais 12 reais para cada hora extra que excede as 40 horas. 
O número de horas trabalhadas (entrada de dado) é um valor inteiro. O salário pago é um valor real de precisão simples. 
Formate a saída com duas casas decimais.
*/

#include <stdio.h>

int main(){
    float salario, fixo, h;

    fixo = 320;

    scanf("%f", &h);

    if (h <= 40){
        salario = h * 8;
    } else {
        salario = fixo + (12 * (h - 40));
    }

    printf("%.2f", salario);

    return 0;
}