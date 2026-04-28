/*
Escreva um programa em linguagem C que gere uma matriz quadrada de ordem M com números inteiros não-negativos. 
Nessa matriz os valores dos elementos da diagonal principal deverá ser a soma dos seus índices de linha e coluna. 
Os demais elementos fora da diagonal principal devem ser 0 (zero). 
Imprima a matriz resultante com cada dígito ocupando 3 (três) espaços. 

Dica: Os índices de linha e coluna de uma matriz se iniciam em 0 (zero).

Exemplo da matriz solicitada de ordem 4.

0    0    0    0 

0    2    0    0 

0    0    4    0

0    0    0    6 
*/

#include <stdio.h>

int main(){
    int m;
    
    scanf("%d", &m);
    while(m < 0){
        scanf("%d", &m);
    }

    int matriz[m][m];
    int number;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(i == j){
                number = i + j;

                matriz[i][j] = number;
            } else{
                matriz[i][j] = 0;
            }

            printf("%3d", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}