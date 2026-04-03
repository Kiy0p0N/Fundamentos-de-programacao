/*
Escreva um programa que leia uma nota de um aluno(a) e informe o conceito recebido, de acordo com os seguintes intervalos.
Utilize variáveis de precisão simples. Saída com letra maiúscula.
 
[9, 10] = A
[8, 9) = B
[6, 8) = C
[5, 6) = D
[0, 5) = E
*/

#include <stdio.h>

int main(){
    float n;

    scanf("%f", &n);

    if (9 <= n && n <= 10) {
        printf("A");
    } else if (8 <= n && n < 9) {
        printf("B");
    } else if (6 <= n && n < 8) {
        printf("C");
    } else if (5 <= n && n < 6) {
        printf("D");
    } else if (0 <= n && n < 5) {
        printf("E");
    } else {
        printf("nota invalida");
    }

    return 0;
}