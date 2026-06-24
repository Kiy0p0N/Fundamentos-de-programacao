/*
Uma disciplina na UNIFEI chamada "Introdução a Insanidade II" aplica uma quantidade aleatória de provas ao longo do semestre, dependendo do humor do(a) professor(a). 
Ao longo do semestre N avaliações serão aplicadas. 
Como bônus, caso uma avaliação tenha nota 10 (dez) a média final será acrescida de 15%. 
A média final, porém, não poderá ultrapassar 10 (dez). 
Caso uma avaliação tenha nota 0 (zero), a média final terá uma penalidade de 10%. 
Caso nenhum desses dois cenários ocorram ((a) aluno(a) tenha tirado um 10 (dez) e um 0 (zero)), a média aritmética é calculada normalmente. 
Escreva um programa que leia o valor N de provas aplicadas, e em seguida solicite as N notas. 
No cenário onde um mesmo aluno tirou um 10 e um 0 (zero), calcule a média aritmética normalmente sem bônus e penalidade. 
O bônus é apenas se houver um (ou mais) 10 (dez) e nenhum 0 (zero). 
E a penalidade é apenas se houver um (ou mais) 0 (zero) e nenhum 10 (dez). 

Utilize variáveis de precisão simples e apresente a saída formatada com duas casas decimais.
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    float soma = 0;
    float media;
    float nota;

    int cont0 = 0;
    int cont10 = 0;

    for(int i = 0; i < n; i++){
        scanf("%f", &nota);
        soma += nota;

        if(nota == 0){
            cont0++;
        }
        if(nota == 10){
            cont10++;
        }
    }

    media = soma / n;

    if(cont0 == 0 && cont10 > 0){
        media += media *0.15;
    } else if (cont0 > 0 && cont10 == 0){
        media -= media *0.1;
    }

    if(media > 10){
        media = 10;
    }

    printf("%.2f", media);
    

    return 0;
}