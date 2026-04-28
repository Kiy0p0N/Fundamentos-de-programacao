/*
Escreva um programa que solicite um valor natural N para ser a ordem da matriz. 
Preencha com 1 a diagonal secundária e com zero as demais posições dessa matriz de ordem N.
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
            if(j == (n - i - 1)){
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