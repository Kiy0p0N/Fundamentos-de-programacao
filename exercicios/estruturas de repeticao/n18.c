/*
Escreva um programa que leia um valor natural N e imprima a soma acumulada de 1 até N e o produto acumulado de 1 até N. 

Verifique se o valor de entrada N é natural. 
Caso não seja solicite a leitura do número novamente.
Permaneça nesse processo até que seja um valor N válido. Utilize variáveis inteiras.

Exemplos:

1 - Para N = 3;

      Soma Acumulada => 1 + 2 + 3 => 6 (seis) 

      Produto Acumulado => 1 * 2 * 3 => 6 (seis)

2 - Para n = 5;

        Soma acumulada => 1 + 2 + 3 + 4 + 5 => 15 (quinze) 

        Produto acumulado => 1 * 2 * 3 * 4 * 5 => 120 (cento e vinte)
*/

#include <stdio.h>

int main(){
    int n, soma, produto;

    scanf("%d", &n);
    while(n <=0){
        scanf("%d", &n);
    }

    soma = 0;
    produto = 1;

    for(int i = 1; i <= (int)n; i++){
        soma += i;
        produto *= i;
    }

    printf("%d ", soma);
    printf("%d", produto);

    return 0;
}