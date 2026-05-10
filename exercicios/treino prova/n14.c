/*
O Restaurante Acadêmico (RA) da UNIFEI está implantando um processo de fidelização de clientes.
Caso o cliente faça ao menos 3 refeições cujo prato pese 300g ou mais o pagamento terá um desconto de 12%.
O preço do quilograma (kg) é R$ 22,99.
Faça um programa onde o cliente diga quantas refeições fez, e insira o peso em grama (g) de cada refeição.
Em seguida o programa deverá calcular, considerando se há ou não desconto, e apresentar o preço total final.

Utilize variáveis de precisão simples para os cálculos e apresente a saída formatada com duas casas decimais.

Ordem de entrada: Quantidade de refeições seguido do peso de cada refeição em (g).
*/

#include <stdio.h>

int main(){
    float pKg = 22.99;
    int mais300 = 0;
    float pR, pTotal;
    float vFinal = 0;

    int qtdR;
    scanf("%d", &qtdR);

    for(int i = 0; i < qtdR; i++){
        scanf("%f", &pR);

        if(pR >= 300){
            mais300++;
        }

        vFinal += pKg * (pR / 1000);
    }

    if(mais300 >= 3){
        vFinal *= 0.88;
    }

    printf("%.2f", vFinal);

    return 0;
}