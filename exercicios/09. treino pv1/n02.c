/*
Escreva um programa que receba quatro números inteiros e imprima, nesta ordem, quantos são pares e quantos são ímpares. 
Imprima cada valor em uma única linha, separados por um único espaço.
*/

#include <stdio.h>

int main(){
    int qtdN = 4;
    int n;
    int par = 0;
    int impar = 0;
    
    for(int i = 0; i < qtdN; i++){
        scanf("%d", &n);
        
        if(n % 2 == 0){
            par++;
        } else{
            impar++;
        }
    }
    
    printf("%d %d", par, impar);
    
    return 0;
}