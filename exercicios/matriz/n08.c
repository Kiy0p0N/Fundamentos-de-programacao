/*
Escreva um programa em linguagem C que gere uma matriz quadrada de ordem M com números inteiros não-negativos.
Nessa matriz os valores dos elementos da diagonal secundária deverá ser a soma dos seus índices de linha e coluna.
Os demais elementos fora da diagonal secundária devem ser 0 (zero).
Imprima a matriz resultante com cada dígito ocupando 3 (três) espaços. 

Dica: Os índices de linha e coluna de uma matriz se iniciam em 0 (zero).

Exemplo da matriz solicitada de ordem 4.

0    0    0    3 

0    0    3    0 

0    3    0    0

3    0    0    0 
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
            if(j == (m - i - 1)){
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