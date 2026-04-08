/*
Escreva um programa que faz a divisão entre dois números reais verificando se o divisor é igual a zero. 
A operação só pode ser concluída se o divisor for válido. Se o divisor for inválido, 
o(a) usuário(a) deverá digitar um novo divisor até que seja válido. 
Utilize variáveis de precisão simples e três casas decimais na saída para apresentar a saída.

Ordem de entrada: Dividendo, seguido do divisor.
*/

#include <stdio.h>

int main(){
    float n1, n2, quoc;

    scanf("%f", &n1);
    scanf("%f", &n2);

    if (n2 == 0){
        while (n2 == 0){
            scanf("%f", &n2);
        }
    }

    quoc = n1 / n2;

    printf("%.3f", quoc);

    return 0;
}