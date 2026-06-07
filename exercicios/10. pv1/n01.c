/*
A Cafeteria e Doceria “Olhaqui” está implantando uma promoção para clientes mensalistas que consomem Torta.
Ao final de cada mês, o sistema faz algumas validações e verifica se o cliente poderá ter desconto.
Se houver ao menos 4 (quatro) tortas que pesaram 100g ou mais, haverá um desconto que será igual ao maior preço encontrado.
O preço do quilograma (kg) da torta é R$ 59,99.
Faça um programa onde o cliente irá informar quantas tortas consumiu e insira o peso em grama (g) de cada torta.
Em seguida o programa deverá calcular o preço total a ser pago e verificar se o cliente poderá ou não se beneficiar do desconto.

A sua saída deverá ser o preço final já considerando o desconto (se houver).
Utiliza váriávies de precisão simples e apresente a saída formatada com duas casas decimais.
*/

#include <stdio.h>

int main(){
    int mais300 = 0;
    float mPeso = 0;
    float vTotal = 0;
    float pTorta;
    float pTotal = 0;
    float pKg = 59.99;
    
    int nTorta;
    scanf("%d", &nTorta);
    
    for(int i = 0; i < nTorta; i++){
        scanf("%f", &pTorta);
        
        if(pTorta > mPeso){
            mPeso = pTorta;
        }
        
        if(pTorta >= 100){
            mais300 += 1;
        }
        
        pTotal += pTorta;
    }
    
    vTotal = (pTotal / 1000) * pKg;
    
    // aplicar desconto se houver
    if(mais300 >= 4){
        vTotal = vTotal - ((mPeso / 1000) * pKg);
    }
    
    printf("%.2f", vTotal);
    
    return 0;
}