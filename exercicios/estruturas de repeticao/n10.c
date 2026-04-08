/*
Escreva um programa que leia um número inteiro N e mostre o valor da fórmula:

E = 1/0! + 1/1! + 1/2! + 1/3! +...+1/N!

Utilize variáveis de precisão dupla para calcular a saída e apresente 25 casas decimais.

OBS: Utilize (1.0) no numerado.
*/

#include <stdio.h>

int main(){
    int n, f, i, x;
    double e;

    e = 0;

    scanf("%d", &n);

    /*
    o i comeca com o valor 0 para que possamos calcular o valor de e do menor numero para o maior, ate chegar em n
    */
    for (i = 0; i <= n; i++){

        if (i == 0 || i == 1){  // se o i for 0 ou 1, o fatorial é 1 
            e = e + 1;

        } else {  // caso seje maior ou igual a 2
            f = 1;  // definir o fatorial inicial como 1, seu valor e redefinido a cada interacao nova do loop for

            /*
            calcular o fatorial
            */
            for (x = i; x > 1; x--){
                f = f * x;
            }

            e = e + (1.0 / f);  // realizar a equacao
        }
    }

    printf("%.25lf", e);

    return 0;
}