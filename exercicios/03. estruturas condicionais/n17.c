/*
Escreva um programa que leia um valor inteiro e, caso este valor seja positivo, calcule a sua raiz quadrada. 
Caso ele seja negativo, calcule o seu quadrado. 
Na saída, utilize duas casas decimais considerando variáveis de precisão dupla.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double quoc;

    scanf("%d", &n);

    if (n <= 0){
        quoc = pow(n, 2);  // pontenciacao
    } else {
        quoc = sqrt(n);  // raiz quadrada
    }

    printf("%.2lf", quoc);

    return 0;
}