/*
Uma empresa deseja contratar um(a) novo(a) funcionário(a). 
São considerados(as) aptos(as) à vaga se possuírem mais de 20 anos e o ensino médio completo. 
Escreva um programa que leia a idade e a formação do(a) candidato(a) e informe se está apto(a) ou não para a vaga.
*/

#include <stdio.h>

int main(){
    int i, e;

    scanf("%d", &i);
    scanf("%d", &e);

    if(i > 20 && e == 1){
        printf("ok");
    } else{
        printf("nok");
    }

    return 0;
}