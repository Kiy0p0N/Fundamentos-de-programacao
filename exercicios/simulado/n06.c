/*
Escreva um programa em linguagem C que gere uma matriz quadrada de ordem M com números inteiros não-negativos. 
Nessa matriz os valores dos elementos da diagonal principal deverá ser a soma dos seus índices de linha e coluna. 
Os demais elementos fora da diagonal principal devem ser 0 (zero). 
Imprima a matriz resultante com cada dígito ocupando 3 (três) espaços. 

Exemplo da matriz solicitada de ordem 4.

0    0    0    0 

0    2    0    0 

0    0    4    0

0    0    0    6 
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n < 0){
        scanf("%d", &n);
    }
    
    int matriz[n][n];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                matriz[i][j] = i + j;
            } else{
                matriz[i][j] = 0;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}