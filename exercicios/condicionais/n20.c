/*
Faça um programa que funciona como uma calculadora. 
Ao executar o programa, o(a) usuário(a) deverá ser apresentado com o seguinte menu:
"
Bem Vindo a Calculadora Ultra Megazorde!
Digite + para Soma
Digite - para Subtrair
Digite x para Multiplicar
Digite / para Dividir
Digite r para Raiz Quadrada
Digite p para Potenciacao
Qual sua escolha? 
"
Caso a operação de "Raiz Quadrada" seja escolhida o programa deverá solicitar apenas um operando. 
Nos demais casos o programa deverá solicitar dois operandos.
 
Após executada a operação escolhida, o programa apenas imprime o resultado com duas casas decimais. 
"Resultado: ".
 Utilize variáveis de precisão dupla para os cálculos:
 
Não é permitida divisão por zero. Nesse caso o programa deverá ser interrompido e imprimir "Impossivel divisao por zero". 
Lembre-se que ao escolher "Raiz Quadrada" o programa não poderá solicitar dois valores de entrada.
No caso de escolher "Potenciação", a base será o operando1 e o expoente o operando2.
Caso uma opção inválida seja escolhida, o programa irá imprimir "Opcao invalida" e interromper a execução.
 
Há pre-checks para todos os casos. 
OBS: Diferentemente dos demais exercícios, esse requer o uso de um menu solicitando os dados (printf). 
A razão é para facilitar a entrada de dados. 
Além disso, o tipo de dado utilizado para a leitura dos símbolos é "char". 
Faz parte do desafio buscarem um pouco mais sobre esse tipo de dado e como testar seus valores.
Dica: scanf("%c", &variavelChar);
*/

#include <stdio.h>
#include <math.h>

int main(){
    char op;
    double quoc, n1, n2;

    /* MENU */
    printf("Bem Vindo a Calculadora Ultra Megazorde!\n");
    printf("Digite + para Soma \nDigite - para Subtrair \nDigite x para Multiplicar \nDigite / para Dividir \nDigite r para Raiz Quadrada \nDigite p para Potenciacao \n");
    printf("Qual sua escolha? ");

    scanf("%c", &op);

    /* OPERACOES */
    if (op == '+'){  // adicao 
        printf("Digite operando1: ");
        scanf("%lf", &n1);
        printf("Digite operando2: ");
        scanf("%lf", &n2);

        quoc = n1 + n2;

    } else if (op == '-'){  // subtracao
        printf("Digite operando1: ");
        scanf("%lf", &n1);
        printf("Digite operando2: ");
        scanf("%lf", &n2);

        quoc = n1 - n2;

    } else if (op == 'x'){  // multiplicacao
        printf("Digite operando1: ");
        scanf("%lf", &n1);
        printf("Digite operando2: ");
        scanf("%lf", &n2);

        quoc = n1 * n2;

    } else if (op == '/'){  // divisao
        printf("Digite operando1: ");
        scanf("%lf", &n1);
        printf("Digite operando2: ");
        scanf("%lf", &n2);

        if (n2 == 0){  // verificar divisao por zero
            printf("Impossivel divisao por zero");

            return 0;

        } else {
            quoc = n1 / n2;
        }

    } else if (op == 'r'){  // raiz quadrada
        printf("Digite operando1: ");
        scanf("%lf", &n1);

        quoc = sqrt(n1);

    } else if (op == 'p'){  // potenciacao
        printf("Digite operando1: ");
        scanf("%lf", &n1);
        printf("Digite operando2: ");
        scanf("%lf", &n2);

        quoc = pow(n1, n2);

    } else {
        printf("Opcao invalida");

        return 0;
    }

    printf("Resultado: %.2lf", quoc);

    return 0;
}