/*
Uma máquina servidora demora 2 (dois) segundos para processar cada requisição recebida. 
Faça um programa que leia um número inteiro representando uma quantidade de requisições, e apresente o tempo total, em segundos, para o processamento. 
Na linha abaixo, apresente uma mensagem indicando se será uma atividade “Demorada” ou “Normal”. 
Uma atividade é “Demorada” se gastar 60 segundos ou mais. Esse programa somente trabalha com variáveis inteiras.
*/

#include <stdio.h>

int main(){
    int quantReq;
    scanf("%d", &quantReq);
    
    int tempo = quantReq * 2;
    
    printf("%d\n", tempo);
    
    if(tempo >= 60){
        printf("Demorada");
    } else{
        printf("Normal");
    }
    
    return 0;
}