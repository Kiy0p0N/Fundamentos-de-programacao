/*
Suponha que v é um vetor de inteiros.
Faça um programa que demonstre a diferença das expressões v[3], *(v+3), &v[3] e v+3.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int* v = (int*)malloc(sizeof(int) * 4);

    // v[3]
    v[3] = 10;
    printf("v[3]: %d", v[3]);
    printf("\n");

    // *(v+3)
    *(v+3) = 27;
    printf("*(v+3): %d", *(v+3));
    printf("\n");

    // &v[3]
    printf("&v[3]: %p", &v[3]);
    printf("\n");

    // v+3
    printf("Endereço de v antes do v+3: %p", v);
    printf("\n");

    printf("Endereço de v depois do v+3: %p", v+3);
    printf("\n");


    free(v);

    return 0;
}