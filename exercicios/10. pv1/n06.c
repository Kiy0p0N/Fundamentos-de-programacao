/*
A disciplina de "Introdução ao Moodle", na UNIFEI, aplica quatro avaliações.
Foi solicitado que você escrevesse um programa que seja capaz de ler as notas das avaliações e calcular a média final. 
O programa deverá imprimir a média final, com duas casas decimais. 
Utilize variáveis de precisão simples para os cálculos. As notas são valores inteiros no intervalor [0,10]. 
Não é necessário validar os dados de entrada.
*/

#include <stdio.h>

int main(){
    int nAv = 4;
    float nota;
    float media = 0;
    
    for(int i = 0; i < nAv; i++){
        scanf("%f", &nota);
        media += nota;
    }
    
    media = media / nAv;
    
    printf("%.2f", media);
    
    return 0;
}