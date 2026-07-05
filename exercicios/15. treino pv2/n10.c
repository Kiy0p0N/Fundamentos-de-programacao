/*
Escreva um programa em C que leia uma string de até 30 caracteres (os 30 caracteres podem fazer parte da string).
Informe se a palavra é palíndromo ou não.
Uma palavra é um palíndromo se ao ser lida da direita para esquerda ou esquerda para a direita produz a mesma palavra.
Exemplos: ovo, arara,asa.

Se for palíndromo imprimir "ok". Caso contrário imprimir "nok"
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[31];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            printf("nok");
            return 0;
        }
        i++;
        j--;
    }

    printf("ok");
    return 0;
}