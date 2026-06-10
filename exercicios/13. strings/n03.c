/*
Escreva um programa em C que leia uma string de até 30 caracteres (os 30 caracteres podem fazer parte da string). 
Após leitura informe a quantidade de caracteres.
*/

#include <stdio.h>

int main(){
    char str[31];
    scanf("%s", str);

    int cont = 0;

    for(int i = 0; *(str+i) != '\0'; i++){
        cont++;
    }

    printf("%d", cont);

    return 0;
}