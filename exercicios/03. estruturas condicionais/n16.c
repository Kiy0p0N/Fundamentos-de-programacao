/*
Uma empresa decidiu dar um aumento aos seus funcionários de acordo com uma tabela que considera o salário atual e o tempo de serviço de cada trabalhador.
Os funcionários com menor salário terão um aumento proporcionalmente maior que os funcionários com maior salário e, conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário.

Faça um programa que leia o valor do salário atual (variavel de precisão simples) do funcionário e o tempo de serviço que ele tem na empresa em anos (número inteiro).
Com base na tabela abaixo, calcule o valor de seu salário reajustado. 
Na linha debaixo, caso o funcionário não tenha direito ao reajuste ou a nenhum bônus, mostre as mensagens "sem reajuste" e/ou "sem bonus" (cada saída em uma linha). 
Utilize variáveis de precisão simples na saída e formate com duas casas decimais. Na entrada o primeiro valor lido é o salário, seguido do tempo de serviço. 
Na saída também há um printf() formatado com texto para facilitar a reposta. Veja nos exemplos (precheck).

Tabela de reajuste salarial:

Salário Atual (R$) | Reajuste (%)
Até 500            | 25%
Até 1000           | 20%
Até 1500           | 15%
Até 2000           | 10%
Acima de 2000      | Sem reajuste

-----------------------------------------------

Tabela de bônus por tempo de serviço:

Tempo de Serviço   | Bônus (R$)
Até 1 ano          | Sem bônus
De 2 a 3 anos      | 100
De 4 a 6 anos      | 200
De 7 a 10 anos     | 300
Mais que 10 anos   | 500

*/

#include <stdio.h>

int main(){
    int tempS;
    float salA, salN, bonus;

    scanf("%f", &salA);
    scanf("%d", &tempS);

    // calcular novo salario
    if (salA <= 500){
        salN = salA * 1.25;
    } else if (salA <= 1000){
        salN = salA * 1.2;
    } else if (salA <= 1500){
        salN = salA * 1.15;
    } else if (salA <= 2000){
        salN = salA * 1.1;
    } else {
        salN =salA;
    }

    // calcular bonus
    if (tempS <= 1){
        bonus = 0;
    } else if (tempS <= 3){
        bonus = 100;
    } else if (tempS <= 6){
        bonus = 200;
    } else if (tempS <= 10){
        bonus = 300;
    } else {
        bonus = 500;
    }
    

    // exibir resposta
    if (salA > 2000){
        printf("Sem Reajuste\n");
    } else {
        printf("Salario Novo = %.2f\n", salN);
    }

    if (bonus == 0){
        printf("Sem Bonus");
    } else {
        printf("Bonus = R$ %.2f", bonus);
    }


    return 0;
}