/*
Faça uma função chamada mostraVetor que imprima os endereços e o conteúdo de todas as posições de um vetor.
O vetor deve ser declarado utilizando alocação dinâmica dentro da função main.
*/

#include <stdio.h>
#include <stdlib.h>

void mostraVetor(int* v, int n){
    int* c;

    // imprimir endereços
    for(c = v; c < v+n; c++){
        printf("%p\n", c);
    }

    // imprimir conteúdos
    for(c = v; c < v+n; c++){
        printf("%d ", *c);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int* v = (int*)malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++){
        scanf("%d", &*(v+i));
    }

    mostraVetor(v, n);

    return 0;
}