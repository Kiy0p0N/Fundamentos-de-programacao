/*
Escreva um programa que leia um inteiro N positivo e mostre quais são os N primeiros números ímpares. 
Imprima os números em uma única linha, separados entre si por um único espaço. 
Dica: Observe que estamos lidando com um único valor de entrada, representado pela variável N.
*/

#include <stdio.h>

int main(){
    int n;
    int impar = 1;

    scanf("%d", &n);

    while(n < 0){
        scanf("%d", &n);
    }

    for(int i = 0; i < n; i++){
        if(impar % 2 == 0){
            impar++;
        }

        printf("%d ", impar);

        impar++;
    }

    return 0;
}