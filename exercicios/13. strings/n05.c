/*
Escreva um programa em C que leia uma string de até 30 caracteres (os 30 caracteres podem fazer parte da string).
Informe se a palavra é palíndromo ou não.
Uma palavra é um palíndromo se ao ser lida da direita para esquerda ou esquerda para a direita produz a mesma palavra.
Exemplos: ovo, arara,asa.

Se for palíndromo imprimir "ok". Caso contrário imprimir "nok"
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str1[31];
    char str2[31];  // invertida

    scanf("%s", str1);

    int tam = 0, j = 0;
    for(tam; *(str1+tam) != '\0'; tam++);  // verifica o tamanho da palavra

    // passa a palavra de str1 ao contraria para str2
    for(int i = tam-1; i >= 0; i--){
        *(str2+j) = *(str1+i);
        j++;
    }

    *(str2+j) = '\0';

    if(strcmp(str1, str2) == 0){
        printf("ok");
    } else {
        printf("nok");
    }

    return 0;
}