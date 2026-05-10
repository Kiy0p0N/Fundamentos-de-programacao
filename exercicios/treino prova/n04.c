/*
Escreva um programa em linguagem C que gere uma matriz A de ordem MxN.
Solicite ao usuário(a) MxN valores inteiros positivos e preencha a matriz (basta ler os valores com scanf).
Os valores serão inseridos sequencialmente preenchendo as linhas.
Em seguida gere a matriz transposta AT.
A matriz transposta é aquela que se obtém ao trocar as linhas e colunas de uma matriz.
Imprima a matriz A e AT. Imprima cada dígito ocupando 4 (quatro) espaços. 
Dica: printf("%xd") irá imprimir um valor com 'x' dígitos de espaço.

Imprimir a Matriz A, pular uma linha e imprimir a sua transposta.

Ordem de entrada: Número de linhas seguido de número de colunas. 
Valores a serem populados nas células da matriz.
*/

#include <stdio.h>

int main(){
    int num;
    int m, n;
    scanf("%d %d", &m, &n);
    
    while(m < 0 || n < 0){
        scanf("%d %d", &m, &n);
    }
    
    int matrizA[m][n], matrizT[n][m];
    
    // povoar matrizes
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &num);
            matrizA[i][j] = num;
            matrizT[j][i] = num;
        }
    }
    
    // imprimir matriz a
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%4d", matrizA[i][j]);
        }
        
        printf("\n");
    }
    
    printf("\n");
    
    // imprimir matriz t
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%4d", matrizT[i][j]);
        }
        
        printf("\n");
    }
    return 0;
}