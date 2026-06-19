/*
Escreva um programa em linguagem C que defina um tipo "struct ponto" para representar pontos no plano.
Faça a leitura das coordenadas X e Y de dois pontos e imprima a distância entre esses.
Utilize variáveis de precisão simples.
Ordem de entrada: Valor X, Valor Y do Ponto1, Valor X e Valor y do Ponto 2.
*/

#include <stdio.h>
#include <math.h>

struct ponto{
    float x;
    float y;
};

int main(){
    struct ponto p[2];

    // populando o vetor com as coordenadas
    for(int i = 0; i < 2; i++){
        scanf("%f %f", &p[i].x, &p[i].y);
    }

    /*
    Para calcular a distância entre dois pontos é necessário calcular a hipotenusa do triângulo retângulo formado por esses dois pontos.
    Para isso a fórmula é:
    hipotenusa = raiz quadrada((x1 - x0)² + (y1 - y0)²) 
    */
    float h;  // hipotenusa
    h = pow(p[1].x - p[0].x, 2) + pow(p[1].y - p[0].y, 2);
    h = sqrt(h);

    printf("%.2f", h);

    return 0;
}
