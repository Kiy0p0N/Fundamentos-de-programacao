/*
Escreva um programa em C que leia uma string de até 30 caracteres (os 30 caracteres podem fazer parte da string).
Após leitura, imprima as 4 primeiras letras.
Na mesma linha separadas por um espaço em branco.
*/

#include <stdio.h>

int main(){
    char str[31];

    scanf("%s", str);

    for(int i = 0; i < 4; i++){
        printf("%c ", *(str+i));
    }

    return 0;
}