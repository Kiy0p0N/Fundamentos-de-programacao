/*
Escreva um programa que leia N números inteiros positivos. 
Mostre todos os números pares em ordem reversa em uma mesma linha separados por um espaço em branco. 
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int colecao[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &colecao[i]);
    }

    for(int i = n - 1; i >= 0; i--){
        if(colecao[i] % 2 == 0){
            printf("%d ", colecao[i]);
        }
    }

    return 0;
}