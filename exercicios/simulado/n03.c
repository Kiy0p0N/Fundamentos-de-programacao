/*
Escreva um programa que solicite um número inteiro positivo N. 
Em seguida o programa deverá calcular o valor da soma dos N termos na seguinte série.

Soma = 1/1 + 2/3 + 4/6 + 6/9 + 8/12 +....

Considerando N = 4, a soma dos 4 primeiros termos é igual a: 1/1 + 2/3 + 4/6 + 6/9 = 3
Considerando N = 6, a soma dos 6 primeiros termos é igual a: 1/1 + 2/3 + 4/6 + 6/9 + 8/12 + 10/15 = 4.33333

Utilize variáveis de precisão dupla e apresente o resultado com 5 (cinco) casas decimais. 
Force numerador e/ou denominador com 1.0 
*/

#include <stdio.h>

int main(){
    int n;
    float soma = 1;
    scanf("%d", &n);
    
    for(int i = 1; i < n; i++){
        soma += (i * 2.0) / (i * 3);
    }
    
    printf("%.5f", soma);
    
    return 0;
}