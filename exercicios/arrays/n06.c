/*
Escreva um programa que leia dois arrays A e B, cada um com N elementos inteiros positivos. 
Crie um terceiro array C que contém a soma de A e B. 
Imprima os valores do array C, todos os valores na mesma linha separados por um espaço em branco.

Ordem de entrada dos dados: Valor N, seguido pelos valores do vetor A e B. 
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    while(n <= 0){
        scanf("%d", &n);
    }

    int a[n], b[n], c[n];

    /* le os valores para a */
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);

        while(a[i] < 0){
            scanf("%d", &a[i]);
        }
    }

    /* le os valores para b */
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);

        while(b[i] < 0){
            scanf("%d", &b[i]);
        }
    }

    /* adiciona a soma dos valores de a + b em c, e imprime os resultados */
    for(int i = 0; i < n; i++){
        c[i] = a[i] + b[i];

        printf("%d ", c[i]);
    }

    return 0;
}