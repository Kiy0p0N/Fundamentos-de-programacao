/*
Cada estado da região sudeste possui uma taxa de imposto distinta sobre o valor dos produtos nele comercializados. 
Faça um programa que leia o preço de um produto e o estado (use 1 = MG; 2 = SP; 3 = RJ; e 4 = ES), 
e mostre o preço final acrescido do imposto, de acordo com as seguintes taxas: 
MG = 12%; SP = 7%; RJ = 15%; ES = 8%. Utilize variáveis de precisão simples e duas casas decimais na saída.

Ordem de leitura: Estado (Número inteiro), preço do produto (float).
*/

#include <stdio.h>

int main(){

    int estado;
    float precoI, precoF;

    scanf("%d", &estado);
    scanf("%f", &precoI);

    if (estado == 1){
        precoF = precoI * 1.12;
    } else if (estado == 2){
        precoF = precoI * 1.07;
    } else if (estado == 3){
        precoF = precoI * 1.15;
    } else if (estado == 4){
        precoF = precoI * 1.08;
    } else {
        printf("estado nao listado");
    }

    printf("%.2f", precoF);

    return 0;
}