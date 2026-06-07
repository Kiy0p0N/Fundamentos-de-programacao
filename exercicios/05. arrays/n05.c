/*
Escreva um programa que leia um valor inteiro positivo N e em seguida solicite N números inteiros positivos.
Mostre o maior valor e qual a ordem que este foi inserido no programa.  

Ordem de entrada dos dados: Valor de N, seguido por N número inteiros positivos.
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    while (n <= 0){
        scanf("%d", &n);
    }

    int numeros[n], maior, posicao;

    for(int i = 0; i < n; i++){
        scanf("%d", &numeros[i]);

        while(numeros[i] < 0){
            scanf("%d", &numeros[i]);
        }
    }

    maior = numeros[0];
    posicao = 0;

    for(int i = 1; i < n; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
            posicao = i;
        }
    }

    printf("%d %d", maior, posicao + 1);

    return 0;
}