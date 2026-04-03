/*
Escreva um programa que leia a temperatura da água em graus Celsius e informe o estado (líquido, sólido ou gasoso). 
Utilize variáveis de precisão simples.
*/

#include <stdio.h>

int main(){
    float c;

    scanf("%f", &c);

    if(c <= 0){
        printf("solido");
    } else if (c >= 100)
    {
        printf("gasoso");
    } else {
        printf("liquido");
    }
    

    return 0;
}