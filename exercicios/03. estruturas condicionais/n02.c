/*
Escreva um programa que faz a leitura da média final de um estudante. 
Se a nota for maior ou igual a 6, está aprovado(a), caso contrário está reprovado(a). 
Utilize variáveis de precisão simples.
*/

#include <stdio.h>

int main(){
    float media;

    scanf("%f", &media);

    if (media >= 6){
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }

    return 0;
}