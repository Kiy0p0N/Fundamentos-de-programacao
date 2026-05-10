/*
Um e-commerce chamado Gugou é uma plataforma especialista em venda de jogos de tabuleiro. 
Para fidelizar clientes, a empresa lançou uma promoção. 
Caso o carrinho de compras tenha 4 (quatro) ou mais produtos, haverá um desconto de 25% do preço do jogo mais barato. 

Faça um programa que leia a quantidade de jogos adquiridos e peça para o cliente o preço de cada jogo.
Calcule e mostre o valor final da compra com duas casas decimais. 

Utilize variáveis de precisão simples para os cálculos e apresente a saída formatada com duas casas decimais.

Ordem de entrada: Quantidade de jogos seguido dos preços.
*/

#include <stdio.h>

int main(){
    int nJogos;
    scanf("%d", &nJogos);

    float pJogo, maisBarato, pFinal;
    scanf("%f", &pJogo);

    maisBarato = pJogo;
    pFinal = pJogo;

    for(int i = 1; i < nJogos; i++){
        scanf("%f", &pJogo);

        if(pJogo < maisBarato){
            maisBarato = pJogo;
        }

        pFinal += pJogo;
    }

    if(nJogos >= 4){
        pFinal -= maisBarato;  // retira o mais barato da soma final
        maisBarato *= 0.75;    // aplica o desconto de 25%
        pFinal += maisBarato;  // adiciona novamente, mas com o desconto calculado
    }

    printf("%.2f", pFinal);

    return 0;
}