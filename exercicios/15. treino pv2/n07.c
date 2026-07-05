/*
Escreva um programa em linguagem C que defina um tipo "struct aluno" com os campos nome (char[50]), e nota (float).
Solicite um inteiro positivo N e crie um vetor de N alunos. 
Popule esse vetor com N alunos. 
A entrada de dados irá informar um nome e uma nota (NF) entre 0.0 e 10.0. 
Para aprovação é necessário que a nota (NF) seja >= 6.0. 
Não é necessário calcular média, a nota de entrada já é a média final do aluno. 
Seu programa deverá imprimir na tela o nome do aluno e, separado por um espaço em branco, sua situação "ok" (se a nota >= 6.0) ou "nok" (se a nota < 6.0).
Para cada novo aluno, pule uma linha.
Ordem de entrada: Valor N, seguido de Nome, e nota para cada novo aluno.
*/

#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[50];
    float nota;
};

int main(){
    int n;
    scanf("%d", &n);

    getchar();

    struct aluno vAlunos[n];

    // populando vetor
    for(int i = 0; i < n; i++){
        fgets(vAlunos[i].nome, 50, stdin);
        vAlunos[i].nome[strcspn(vAlunos[i].nome, "\n")] = '\0';

        scanf("%f", &vAlunos[i].nota);

        getchar();
    }

    // verificando aprovação
    for(int i = 0; i < n; i++){
        printf("%s ", vAlunos[i].nome);

        if(vAlunos[i].nota >= 6.0){
            printf("ok\n");
        } else{
            printf("nok\n");
        }
    }

    return 0;
}
