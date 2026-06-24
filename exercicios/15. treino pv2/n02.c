/*
Escreva um programa em linguagem C que gere uma matriz estritamente triangular inferior de ordem M. 
A matriz estritamente triangular inferior é quadrada e possui todas as posições acima da diagonal principal zeradas, inclusive a própria diagonal principal.

As demais posições deverão ser preenchidas com os valores inseridos pelo(a) usuário(a). 
Utilize apenas variáveis inteiras. Imprima cada posição ocupando 3 (três) espaços

Exemplo de uma matriz estritamente triangular inferior de ordem 3 com a condição solicitada

0     0     0  

1     0     0    

2     3     0      

Dicas: 

printf("%xd") irá imprimir um valor ocupando 'x' dígitos.
Ordem de entrada: Ordem da matriz, seguido dos valores 
*/

#include <stdio.h>

int main(){
    int m;
    scanf("%d", &m);

    int matriz[m][m];

    // populando matriz
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(i == j || i < j){
                matriz[i][j] = 0;
            } else{
                scanf("%d", &matriz[i][j]);
            }
        }
    }

    // imprimindo
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}