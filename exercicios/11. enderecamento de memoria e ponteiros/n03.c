/*
Escreva uma função que troque o valor do endereço para onde os ponteiros “pa” e “pb” apontam!
*/

#include <stdio.h>

void trocaEndereco(int** pa, int** pb){
    int temp = **pa;
    **pa = **pb;
    **pb = temp;
}

int main(){
    int a = 1, b = 2;
    int *pa = &a, *pb = &b;

    printf("%d, %d\n", *pa, *pb); //1, 2

    trocaEndereco(&pa, &pb);

    printf("%d, %d", *pa, *pb); //2, 1

    return 0;
}