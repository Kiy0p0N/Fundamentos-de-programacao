/*
Escreva um programa em linguagem C que gere uma matriz triangular superior de ordem M.
Solicite ao(a) usuário(a) valores inteiros positivos e preencha a matriz.
A matriz triangular superior é quadrada e possui todas as posições abaixo da diagonal principal zeradas.
Os valores inseridos devem popular apenas as posições que caracterizam a matriz triangular superior, pois as demais posições possuem valor 0 (zero).
Imprima a matriz resultante com cada dígito ocupando 3 (três) espaços. 

Exemplo de uma matriz triangular superior de ordem 4.

1    2    3    4 

0    5    6    7 

0    0    8    9

0    0    0  10 

Dicas: 

printf("%xd") irá imprimir um valor ocupando 'x' dígitos.
Pense qual será a combinação dos índices da linha e coluna que resultará em uma posição na matriz superior. Por exemplo, quando os índices da linha e coluna são iguais estamos na diagonal principal. A matriz triangular superior possui, além da diagonal principal preenchida, todas as outras posições acima dela. A estratégia é identificar qual a combinação dos índice de linha e coluna. Pensando na implementação, os valores de "i" e "j". 
Ordem de entrada: Ordem da matriz, seguido dos valores para as células da matriz (menos as células cujo valor é 0 - zero).
*/

#include <stdio.h>

int main(){
    int m;
    
    scanf("%d", &m);
    while(m < 0){
        scanf("%d", &m);
    }

    int matriz[m][m];
    int number;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(i <= j){
                scanf("%d", &number);
                while(number < 0){
                    scanf("%d", &number);
                }

                matriz[i][j] = number;
            } else{
                matriz[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            printf("%3d", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}