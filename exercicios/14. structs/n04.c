/*
Escreva uma função em linguagem C para calcular a área sob a curva descrita pela função matemática f(x)=4x2+3x.

A função deverá retornar um valor real com precisão simples e irá receber 3 parâmetros.
Os dois primeiros são os intervalos a e b (números inteiros) e o último a quantidade de sub-intrevalos.

Utilize a regra dos trapézios e crie a função com a seguinte assinatura.

"float regraDosTrapezios(int a, int b, int subIntervalo)"

Regra dos Trapézios:
Considerando um passo constante, podemos aproximar o cálculo da integração pela regra do trapézio com a seguinte fórmula:
S≈h2[f(x0)+f(xn)+∑i=1n−12∗f(xi)]

Onde h é o passo,
f(x) é a função que desejamos calcular a integral definida e 
n é a quantidade de subintervalos. 
Subintervalo está associado com a quantidade de trapézios. 
Note que f(x0) é o valor de f(a), e f(xn) é o valor f(b). 
Os valores intermediários, isto é,  f(x1) até f(xn−1) é calculado de acordo com o passo h.

Calculamos o passo h com a seguinte fórmula:
h=b−an, onde b é o limite superior do intervalo, a é o limite inferior, e n é a quantidade de subintervalos.

 Exemplo: Utilizando a regra dos trapézios e 6 subintervalos aproxime a seguinte integral definida:

 S=∫30x2+5

 1º Passo: Calcular o passo h
.

h=b−an=3−06=0.5

2º Passo: Calcular os valores da função entre 0 e 3 com passo 0.5, isto é:

f(x0)=f(0)=5
Veja que f(x0)n é exatamente f(a)

f(x1)=f(0.5)=5.25
f(x2)=f(1)=6
f(x3)=f(1.5)=7.25
f(x4)=f(2)=9
f(x5)=f(2.5)=11.25
f(x6)=f(3)=14
Veja que f(x6) é exatamente f(b) 

OBS: Tivemos 7 valores, para totalizar 6 subintervalos.  
Observe também que f(xi) depende do passo. 
Os índices de i são valores inteiros, mas o valor de xi incrementa de acordo com h. 
No exemplo que estamos calculando, h = 0.5 e por isso o deslocamento é de 0.5

3º Passo: Calcular o somatório

S≈h2[f(x0)+f(xn)+∑i=1n−12∗f(xi)]
=0.52[5+14+2∗5.25+2∗6+2∗7.25+2∗9+2∗11.25]
=0.52[96.5]
=0.52[96.5]
=24.125
*/

#include <stdio.h>

float funcao(float x){
    return 4*x*x + 3*x;
}

float regraDosTrapezios(int a, int b, int subIntervalo){
    float h = (float)(b - a) / subIntervalo;

    float soma = 0.0f;

    for(int i = 1; i < subIntervalo; i++){
        float x = a + h*i;
        soma += 2.0f * funcao(x);
    }

    float fa = funcao(a);
    float fb = funcao(b);

    return (h / 2.0f) * (fa + fb + soma);
}