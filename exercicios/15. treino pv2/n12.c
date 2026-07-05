/*
Escreva uma função em linguagem C que calcule e imprima o desvio padrão dos valores de entrada. Utilize variáveis de precisão simples e três casas decimais para formatar a saída. 

A assinatura da sua função deverá ser: 

"float desvioPadrao(float numeros[], int qtdNum)"

Onde numeros[] é a coleção/array/vetor com os dados que serão utilizados como entrada, e "qtdNum" é o tamanho da coleção "numeros" (ou a quantidade de elementos).

Resgatando o desvio padrão.

O desvio padrão é calculado com a seguinte fórmula:

σ=∑N(i=1)(xi−μ)2N−−−−−−−−−√

Onde μ
 é a média aritmética dos dados de entrada, N é a quantidade de elementos e xi
 representa cada elemento.

Exemplo do cálculo do desvio padrão:

Considere a seguinte entrada: 4.56 7.89 5.23

A média, μ
 é cálculada como: 4.56+7.89+5.233=5.893
 (considerando 3 casas decimais. Para os cálculos no seu programa use a precisão normal. Formate apenas na saída da resposta final.)

O desvio padrão (σ)
 é calculado como: (4.56−5.893)2+(7.89−5.893)2+(5.23−5.893)23−−−−−−−−−−−−−−−−−−−−−−−−−−√

σ=1.777+3.988+0.443−−−−−−−−−−−√

σ=2.068−−−−√

σ=1.438

Dica: Somatório leva a implementação de uma laço de repetição, como já estamos carecas de saber (no meu caso é literalmente).
*/

#include <stdio.h>
#include <math.h>

float desvioPadrao(float numeros[], int qtdNum){
    float media = 0.0;
    float somatorio = 0.0;

    for(int i = 0; i < qtdNum; i++){
        media += numeros[i];
    }

    media /= qtdNum;

    for(int i = 0; i < qtdNum; i++){
        somatorio += pow(numeros[i] - media, 2);
    }

    somatorio /= qtdNum;

    return sqrt(somatorio);
}