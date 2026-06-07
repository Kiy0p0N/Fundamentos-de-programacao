/*
Escreva um programa que peça um valor inteiro positivo N e imprima todos os números primos entre 2 (dois) e N. 
Um número é primo se for divisível apenas ele mesmo e por 1 (um). 
Imprima os valores em uma única linha, separados por um único caractere. 
O primeiro número primo é o 2 (dois). Utilize variáveis inteiras.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n, raiz, qtdDiv;

    scanf("%d", &n);
    while(n < 0){
        scanf("%d", &n);
    }

    for(int i = 2; i <= n; i++){
        qtdDiv = 0;

        if(i == 2){
            printf("%d ", i);
        }

        if(i % 2 != 0){
            raiz = floor(sqrt(i));

            for(int x = 3; x <= raiz; x += 2){
                if(i % x == 0){
                    qtdDiv += 1;
                }

                if(qtdDiv == 1){
                    break;
                }
            }

            if(qtdDiv == 0){
                printf("%d ", i);
            }
        }
    }

    return 0;
}