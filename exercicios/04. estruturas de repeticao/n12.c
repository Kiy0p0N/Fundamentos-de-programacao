/*
Escreva um programa que leia um valor natural N e informe todos os valores que são um quadrado perfeito até N (inclusive).
Um número é um quadrado perfeito se, ao extrair sua raiz quadrada, o resultado é outro número natural. 
Exemplos: 1,4,9,16,25,...

Informe os valores em um única linha.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float quoc;

    scanf("%d", &n);

    while(n < 0){
       scanf("%d", &n); 
    }

    for(int i = 1; i <= n; i++){
        quoc = sqrt(i);

        if(quoc - (int)quoc == 0){
            printf("%d ", i);
        }
    }

    return 0;
}