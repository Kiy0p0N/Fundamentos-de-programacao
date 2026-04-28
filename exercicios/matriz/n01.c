/*
Escreva um programa que, dada uma matriz 7 x 7, preencha com 1 a diagonal principal e com zero as demais posições. 
Imprima essa matriz ao final. Preencha a matriz utilizando um laço de repetição. 
*/

#include <stdio.h>

int main(){
    int col = 7;
    int row = 7;
    int matriz[col][row];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == j){
                matriz[i][j] = 1;
            } else{
                matriz[i][j] = 0;
            }

            printf("%3d", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}