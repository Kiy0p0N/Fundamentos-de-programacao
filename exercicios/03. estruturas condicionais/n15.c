/*
Os produtos de uma loja vão sofrer aumento de acordo com a tabela abaixo.
Faça um programa que leia o preço antigo de um produto , calcule e mostre o seu novo preço e, na linha debaixo, 
escreva uma mensagem (sem acentos/cedilha) em função do preço novo, de acordo com a seguinte tabela.
 
Tabela de reajuste de preços:

Preço antigo (reais)        | Percentual de aumento
Até 50 (inclusive)          | 20%
Entre 50 e 100 (inclusive)  | 15%
Entre 100 e 200 (inclusive) | 12%
Acima de 200                | 8%

-----------------------------------------------

Classificação do novo preço:

Preço novo                  | Mensagem
Até 80 (inclusive)          | Baratinho!
Entre 80 e 120 (inclusive)  | Preço normal
Entre 120 e 250 (inclusive) | Caro
Acima de 250                | Você é rico!
 
Utilize variáveis de precisão simples e duas casas decimais na saída. 
*/

#include <stdio.h>

int main(){
    float pA, pN;

    scanf("%f", &pA);

    // calcular novo preço
    if (pA <= 50){
        pN = pA * 1.2;
    } else if (pA > 50 && pA <= 100){
        pN = pA * 1.15;
    } else if (pA > 100 && pA <= 200){
        pN = pA * 1.12;
    } else {
        pN = pA * 1.08;
    }

    // exibir mensagem
    if (pN <= 80){
        printf("%.2f\n", pN);
        printf("Baratinho!");
    } else if (pN > 80 && pN <= 120){
        printf("%.2f\n", pN);
        printf("Preco normal!");
    } else if (pN > 120 && pN <= 250){
        printf("%.2f\n", pN);
        printf("Caro!");
    } else {
        printf("%.2f\n", pN);
        printf("Voce e rico!");
    }

    return 0;
}