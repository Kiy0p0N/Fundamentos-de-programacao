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
    float preKg = 22.99;
    
    int nRef;
    int maisTrez = 0;
    
    float pesoRef;
    float pesoTot = 0;
    float valorTotal = 0;
    
    scanf("%d", &nRef);
    
    for(int i = 0; i < nRef; i++){
        scanf("%f", &pesoRef);
        
        if(pesoRef >= 300){
            maisTrez++;
        }
        
        pesoTot += pesoRef;
    }
    
    valorTotal = (pesoTot / 1000) * preKg;
    
    if(maisTrez >= 3){
        valorTotal *= 0.88;
    }
    
    printf("%.2f", valorTotal);
    
    return 0;
}