/*
Preocupado com a alta taxa de inadimplência dos correntistas que solicitam empréstimo, o gerente de um banco resolveu adotar uma tática: 
verificar a possibilidade de conceder ou não empréstimo ao cliente com base em seu salário, no valor do empréstimo e na quantidade de prestações que o cliente deseja dividir o valor. 
Nesse caso, caso o valor da prestação do empréstimo seja maior que 20% do salário mensal do cliente, o empréstimo não é concedido. 

Sua tarefa é escrever um programa que determine se o cliente consegue ou não realizar um empréstimo. 
Sabe-se que o banco cobra uma taxa de 10% sobre o valor total  do empréstimo, que também é diluída nas prestações. 
O programa deve imprimir como resposta apenas "sim" ou "nao". Utilize variáveis de precisão simples.
 
Ordem de entrada dos dados: Salario, valor do emprestimo, numero de parcelas:
*/

#include <stdio.h>

int main(){

    float salario, vEmp, numP;

    scanf("%f", &salario);
    scanf("%f", &vEmp);
    scanf("%f", &numP);

    // +10% sobre o valor do empréstimo 
    vEmp = vEmp * 1.1;

    /* 
    se o valor do empréstimo divido pelo número de prestações for maior que 20% do salário
    */ 
    if ((vEmp / numP) > (salario * 0.2)){
        printf("nao");
    } else {
        printf("sim");
    }

    return 0;
}