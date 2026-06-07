/*
Escreva um programa que receba quatro números inteiros e imprima, nesta ordem, quantos são pares e quantos são ímpares. 
Imprima cada valor em uma única linha, separados por um único espaço.
*/

#include <stdio.h>

int main(){
    int n;
    int par = 0;
    int impar = 0;
    
    for(int i = 0; i < 4; i++){
        scanf("%d", &n);
        
        if(n % 2 == 0){
            par += 1;
        } else {
            impar += 1;
        }
    }
    
    printf("%d %d", par, impar);
    
    return 0;
}