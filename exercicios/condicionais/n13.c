/*
Escreva um programa que verifique se um número lido é divisível por 3 OU por 5, mas não pelos dois ao mesmo tempo.
Seu programa deve imprimir como reposta apenas "divisivel por 3" ou "divisivel por 5" ou "nao divisivel".
*/

#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    if ((n % 3 == 0) && (n % 5 == 0)){
        printf("nao divisivel");
    } else if (n % 3 == 0){
        printf("divisivel por 3");
    } else if (n % 5 == 0){
        printf("divisivel por 5");
    } else {
        printf("nao divisivel");
    }

    return 0;
}