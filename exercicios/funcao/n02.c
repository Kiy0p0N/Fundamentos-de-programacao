/*
Implemente uma função em Linguagem C que encontre uma raíz aproximada de uma função polinomial utilizando o método de Newton-Raphson.

Considere a função f(x)=3x3+2x2−7, e sua derivada f′(x)=9x2+4x.
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void nr(float valorInicial, float erro, int qtdTentativas){
    float x0 = valorInicial;
    float x1;
    bool raiz = false;

    for(int i = 0; i < qtdTentativas; i++){
        x1 = x0 - (3*pow(x0, 3) + 2*pow(x0, 2) - 7) / (9*pow(x0, 2) + 4*x0);

        if(fabs(x1 - x0) <= erro){
            printf("Raiz: %f", x1);
            raiz = true;
            break;
        }
        x0 = x1;
    }

    if(!raiz){
        printf("Nao foi possivel calcular a raiz com a precisao solicitada.");
    }
}

int main(){
    float vI, erro, qtdTent;

    scanf("%f %f %f", &vI, &erro, &qtdTent);

    nr(vI, erro, qtdTent);

    return 0;
}