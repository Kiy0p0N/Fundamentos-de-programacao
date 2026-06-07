/*
Escreva um programa que leia a nota de 10 alunos e mostre quais são maiores ou iguais  a 6 (média para aprovação). 
Utilize variáveis de precisão simples e duas casas decimais para apresentar a saída.

Mostre cada nota na mesma linha separada por um espaço em branco. Utilze vetores para armazenar os dados de entrada.
*/

#include <stdio.h>

int main(){
    int qtdNotas = 10;
    float media = 6.0;
    float notas[10];

    for(int i = 0; i < qtdNotas; i++){
        scanf("%f", &notas[i]);

        if(notas[i] >= media){
            printf("%.2f ", notas[i]);
        }
    }

    return 0;
}