/*
Escreva um programa que leia um valor inteiro positivo N e popule um array de valores reais (float) com N posições.
Calcule e mostre a média e o desvio padrão dos valores de entrada.

Utilize variáveis de precisão simples e três casas decimais para formatar a saída. 
Imprima a média e o desvio padrão em uma única linha separados por um espaço.

O desvio padrão é calculado com a seguinte fórmula:

    σ = sqrt( (Σ(i=1 até N) (xi - μ)^2) / N )

Onde:
- μ é a média aritmética dos dados de entrada
- N é a quantidade de elementos
- xi representa cada elemento

Exemplo do cálculo do desvio padrão:

Entrada: 4.56 7.89 5.23

Média:
    μ = (4.56 + 7.89 + 5.23) / 3 = 5.893

(Para os cálculos, use precisão normal. Formate apenas a saída final.)

Desvio padrão:
    σ = sqrt( ((4.56 - 5.893)^2 + (7.89 - 5.893)^2 + (5.23 - 5.893)^2) / 3 )

    σ = sqrt( (1.777 + 3.988 + 0.44) / 3 )
    σ = sqrt( 2.068 )
    σ = 1.438

Dica:
Use um somatório com laço de repetição para implementar o cálculo.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);

    /* se o valor de n for menor ou igual a zero, pede um novo valor para n */
    while (n <= 0){
        scanf("%d", &n);
    }

    float valores[n], soma, media, desvio, somatoria;
    
    soma = 0;
    somatoria = 0;

    /* recebe os valores de entrada e os soma */
    for(int i = 0; i < n; i++){
        scanf("%f", &valores[i]);
        soma = soma + valores[i];
    }

    media = soma / n;  // calcula a media

    /* laco de repeticao para calcular o somatorio*/
    for(int i = 0; i < n; i++){
        somatoria = somatoria + pow(valores[i] - media, 2);
    }

    desvio = sqrt(somatoria / n);  // calcula o desvio

    // imprimir resultados
    printf("%.3f ", media);
    printf("%.3f", desvio);

    return 0;
}