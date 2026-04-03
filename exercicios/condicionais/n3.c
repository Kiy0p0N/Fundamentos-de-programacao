/*
Escreva um programa que faz a leitura da temperatura corporal de um paciente. 
Se a temperatura for superior a 37.5 informar que está com febre. 
Caso contrário informar temperatura normal. 
Utilize variáveis de precisão dupla.
*/

#include <stdio.h>

int main(){
    float temp;

    scanf("%f", &temp);

    if (temp > 37.5){
        printf("febre");
    } else{
        printf("normal");
    }

    return 0;
}