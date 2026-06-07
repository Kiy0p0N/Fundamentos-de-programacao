/*
Escreva um programa que leia um valor natural N e informe se é primo.
Um número é primo se for divisível apenas por si mesmo e por 1 (um). O primeiro número primo é 2.

Se for primo mostre "ok", caso contrário mostre "nok".
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    
    scanf("%d", &n);
    
    int raiz = sqrt(n);
    
    if(n == 1){
        printf("nok");
        return 0;
    }
    
    if(n == 2){
        printf("ok");
        return 0;
    }
    
    if(n % 2 == 0){
        printf("nok");
        return 0;
    }
    
    for(int i = 3; i <= sqrt(n); i++){
        if(n % i == 0){
            printf("nok");
            return 0;
        }
    }
    
    printf("ok");
    
    return 0;
}