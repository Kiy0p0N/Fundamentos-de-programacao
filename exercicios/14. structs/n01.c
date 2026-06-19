/*
Escreva um programa em linguagem C que defina um tipo "struct pessoa" com os campos nome (char[50]), idade e endereço (char[50]).
Solicite um inteiro positivo N e crie um vetor de N pessoas.
Popule esse vetor com N pessoas.
Finalmente imprima na tela os dados das pessoas na seguinte ordem, separados por um espaço em branco: Nome, idade e endereço.
Pule uma linha extra entre cada pessoa.
Ordem de entrada: Valor N, seguido de Nome, endereço,idade para cada nova pessoa.
*/

#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[50];
    int idade;
    char endereco[50];
};


int main(){
    int n;
    scanf("%d", &n);
    getchar();

    struct pessoa p1[n];

    // populando vetor
    for(int i = 0; i < n; i++){
        // nome
        fgets(p1[i].nome, 50, stdin);
        p1[i].nome[strcspn(p1[i].nome, "\n")] = '\0';

        // endereço
        fgets(p1[i].endereco, 50, stdin);
        p1[i].endereco[strcspn(p1[i].endereco, "\n")] = '\0';

        // idade
        scanf("%d", &p1[i].idade);
        getchar();
    }

    // exibindo informações
    for(int i = 0; i < n; i++){
        printf("%s %d %s\n", p1[i].nome, p1[i].idade, p1[i].endereco);
    }

    return 0;
}