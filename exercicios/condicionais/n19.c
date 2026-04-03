/*
Faça um programa que leia a idade e o tempo de serviço (em anos) de um trabalhador e escreva se ele pode ou não se aposentar. 
As condições para aposentadoria são: 
1 - Ter pelo menos 65 anos, 
2 - Ou ter trabalhado pelo menos 30 anos,
3 - Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. 
Seu programa deve imprimir apenas as respostas “sim” ou “nao” (sem acentuação)
 
Ordem de entrada de dados: Idade (número inteiro), Tempo de Serviço em anos (número inteiro).
*/

#include <stdio.h>

int main(){
    int idade, tempS;

    scanf("%d", &idade);
    scanf("%d", &tempS);

    if ((idade >= 65) || (tempS >= 30) || (idade >= 60 && tempS >= 25)){
        printf("sim");
    } else {
        printf("nao");
    }

    return 0;
}