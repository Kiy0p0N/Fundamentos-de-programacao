/*
Escreva um programa que peça dois valores inteiros positivo N1 e N2. 
Imprima todos os números primos entre N1(inclusive) e N2(inclusive). 
Um número é primo se for divisível apenas ele mesmo e por 1 (um). 
Imprima os valores em uma única linha, separados por um único caractere. 
O primeiro número primo é o 2 (dois). Utilize variáveis inteiras.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    for(int i = n1; i <= n2; i++){
        if(i == 2){  // imprime o 2, caso ele esteja na sequencia
            printf("%d ", i);
        }

        if(i % 2 != 0){  // caso o número não seja divisível por 2
            int cont = 0;

            for(int j = 3; j <= sqrt(i); j+=2){  // para verificar números primos, precisamos verificar somente até sua raiz quadrada
                if(i % j == 0){
                    cont++;
                    break;
                }
            }

            if(cont == 0){
                printf("%d ", i);
            }
        }
    }

    return 0;
}