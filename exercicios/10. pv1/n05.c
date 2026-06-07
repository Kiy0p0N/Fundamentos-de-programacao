/*
Escreva um programa em linguagem C que gere uma matriz triangular superior de ordem M. 
Solicite ao(a) usuário(a) valores inteiros positivos e preencha a matriz. 
A matriz triangular superior é quadrada e possui todas as posições abaixo da diagonal principal zeradas. 
Os valores inseridos devem popular apenas as posições que caracterizam a matriz triangular superior, pois as demais posições possuem valor 0 (zero). 
Imprima a matriz resultante com cada dígito ocupando 3 (três) espaços. 

Exemplo de uma matriz triangular superior de ordem 4.

1    2    3    4 

0    5    6    7 

0    0    8    9

0    0    0  10 

Dica: printf("%xd") irá imprimir um valor ocupando 'x' dígitos.

Ordem de entrada: Ordem da matriz, seguido dos valores para as células da matriz (menos as células cujo valor é 0 - zero).
*/

#include <stdio.h>

int main(){
    int m;
    scanf("%d", &m);
    
    int matriz[m][m];
    int num;
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(i > j){
                matriz[i][j] = 0;
            } else{
                scanf("%d", &num);
                matriz[i][j] = num;
            }
        }
    }
    
    // imprimir matriz
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            printf("%3d", matriz[i][j]);
        }
        
        printf("\n");  // pular linha
    }
    
    return 0;
}