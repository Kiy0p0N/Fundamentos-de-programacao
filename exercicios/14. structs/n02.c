/*
Escreva um programa em linguagem C que defina um tipo "struct ponto" para representar pontos no plano.
Faça a leitura das coordenadas X e Y e imprima a distância desse ponto até a origem (0,0).
Utilize variáveis de precisão simples.
Ordem de entrada: Valor X, Valor Y;
*/

#include <stdio.h>
#include <math.h>

struct ponto{
    float x;
    float y;
};

int main(){
    struct ponto p;

    scanf("%f", &p.x);
    scanf("%f", &p.y);

    /* 
    A distâcia de um ponto até a origem (0, 0) é igual a hipotenusa.
    A fórmula para calcular a hipotenusa é:
    hipotenusa = raiz quadrada(cateto adjacente ao quadrado(no nosso caso é a variavel x) + cateto oposto ao quadrado(no nosso caso é a variavel y))
    */
    float h = sqrt(pow(p.x, 2) + pow(p.y, 2));

    printf("%.2f", h);

    return 0;
}