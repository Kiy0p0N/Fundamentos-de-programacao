/*
Escreva um programa que leia dois vetores A e B, cada um com N elementos inteiros positivos.
Crie um terceiro vetor C que contém a soma de A e B.
Imprima os valores do vetor C, todos os valores na mesma linha separados por um espaço em branco.

Ordem de entrada dos dados: Valor N, valores do vetor A, e valores do vetor  B. 
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int vetorA[n], vetorB[n], vetorC[n];

    for(int i = 0; i < n; i++){  // populando vetor A
        scanf("%d", &vetorA[i]);
    }

    for(int i = 0; i < n; i++){  // populando vetor B
        scanf("%d", &vetorB[i]);
    }

    for(int i = 0; i < n; i++){  // populando vetor C
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    for(int i = 0; i < n; i++){  // impriminto vetor C
        printf("%d ", vetorC[i]);
    }

    return 0;
}