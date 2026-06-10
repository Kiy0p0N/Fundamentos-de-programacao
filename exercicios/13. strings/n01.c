/*
Escreva um programa em C que leia uma string de até 30 caracteres (os 30 caracteres podem fazer parte da string). 
Após leitura, imprima a palavra na tela.
*/

#include <stdio.h>

int main() {
    char str[31];

    fgets(str, 31, stdin);

    printf("%s", str);

    return 0;
}