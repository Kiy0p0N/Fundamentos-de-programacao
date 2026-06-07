/*
Qual o valor da variável y no final da execução do código a seguir?

int y, *p, x;
y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
x--;
(*p) += x; // *p = *p + x
printf(“%d”, y);

Escreva um comentário em cada comando de atribuição, explicando o que ele faz e o valor da variável à esquerda do ‘=‘ após sua execução.
*/

#include <stdio.h>

int main(){
    int y, *p, x;
    y = 0;  // atribui a y o valor 0

    p = &y;  // o ponteiro p recebe o endereço da variavel y

    x = *p;  // x recebe o valor de y através do desreferenciamento dp ponteiro p

    x = 4;  // x recebe um novo valor, trocando o valor de y por 4

    (*p)++;  // o ponteiro p é desreferenciado e é adicionado 1 ao valor que ele aponta, que antes era 0, agora é 1

    x--;  // é subtraído 1 da variavel x, passande de 4 para 3

    (*p) += x;  // o ponteiro p é desreferenciado e é adicionado o valor de x, que é igual a 3, ao valor para o qual ele aponta, que é o valor de y = 1, após a adição y passa a valer 4

    printf("%d", y);

    return 0;
}