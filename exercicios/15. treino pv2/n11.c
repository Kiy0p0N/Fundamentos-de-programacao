/*
Escreva um programa em C que leia uma string de até 30 caracteres (os 30 caracteres podem fazer parte da string).
Imprimir a mesma palavra em caixa alta.

Dica: Variáveis do tipo char são inteiros (nos bastidores).
É possível somar e subtrair valores. Subtraia o número 32 de cada letra antes de imprimir.

As entradas são compostas apenas de palavras em caixa baixa.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[31];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int tam = strlen(str);
    for(int i = 0; i < tam; i++){
        printf("%c", str[i] - 32);
    }

    return 0;
}