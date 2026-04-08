/*
Escreva um programa que some os números naturais menores que 1000 que são múltiplos de 3 ou 5. Não há valor de entrada.
*/

#include <stdio.h>

int main(){

    int quoc, i;

    quoc = 0;

    for (i = 3; i < 1000; i++){
        if ((i % 3 == 0) || (i % 5 == 0)){
            quoc = quoc + i;
        }
    }

    printf("%d", quoc);

    return 0;
}