/*
Escreva um programa que leia um número natural N e calcule seu fatorial: n! = 1 * 2 * 3 * 4 * ... *n 

Considere que 0! = 1, isto é, "O fatorial de 0 (zero) é igual a 1".

Utilize variáveis inteiras. 
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int fatorial = 1;    
    if(n == 0){
        printf("%d", fatorial);
    } else{
        for(int i = n; i >=2; i--){
            fatorial *= i;
        }
        
        printf("%d", fatorial);
    }
    
    return 0;
}