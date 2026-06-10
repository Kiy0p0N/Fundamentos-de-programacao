/*
Escreva um programa em C que leia uma string de até 30 caracteres (os 30 caracteres podem fazer parte da string). 
Após leitura imprima a palavra de forma reversa
*/

#include <stdio.h>

int main(){
    char str[31];
    scanf("%s", str);

    int cont;
    for(cont = 0; *(str+cont) != '\0'; cont++);

    for(int i = cont-1; i >= 0; i--){
        printf("%c", str[i]);
    }

    return 0;
}