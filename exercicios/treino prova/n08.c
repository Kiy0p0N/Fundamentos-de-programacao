/*
Considerando uma função f(x), sua raiz (ou zero da função) é o ponto que ela intercepta os eixos das abscissas (ou eixo X) no plano cartesiano.

Por exemplo, considere a função f(x)=3x+6, para qual valor de x ela intercepta o eixo das abscissas?

Para esse tipo de função é bem simples, basta uma pequena manipulação algébrica e detectamos que a raiz é −2. 
No gráfico abaixo notamos que a reta intercepta o eixo das abscissas quando x=−2

Mas nem toda função permite encontrar suas raízes de forma trivial e por isso podemos utilizar métodos numéricos para nos entregar valores aproximados.

Um método bastante conhecido é o Newton-Raphson. Consiste em uma solução iterativa.

O método funciona com os seguintes valores de entrada:

Um erro tolerável
Um número máximo de iterações (o método pode não convergir)
Um "chute" inicial
O método consiste no seguinte cálculo:

xn+1=xn−f(xn)f´(xn), onde
- f(x) é a função que se deseja obter a raíz
- f′(x) é derivada da função f(x)
A cada iteração é verificado se o resultado atende os requisitos do erro, isto é:
|(xn+1−xn)|≤erro (Módulo de (xn+1−xn))

Caso o valor seja menor ou igual ao erro, temos o valor da raíz aproximada.
Caso contrário fazemos nova iteração até atingir o valor aproximado ou o método atingir o número máximo de iterações permitidas. 
Nesse último cenário dizemos que o método "não convergiu".

Exemplo:
Encontre uma raíz aproximada da função f(x)=4x2+3x, considere o erro de 0.3, valor inicial -2 e 20 iterações máximas.

1º Passo: Determinar a derivada de f(x). Usando a regra do "tombo" vemos que:
- f′(x)=8x+3

2ª Passo: Calcular a aproximação para os valores iniciais, isto é n = 0. 
Pelo enunciado o valor inicial é -2, assim calculamos x1 a partir de x0
x1=x0−f(x0)f´(x0)
x1=−2−f(−2)f´(−2)
f(−2)=4∗(−22)+3∗(−2)=10
f′(−2)=8∗(−2)+3=−13
x1=−2−10−13=−1.23

Cálculo da diferença:
|(x1−x0)|=|(−1.23−(−2))|=0.77

Verificamos que 0.77 não é menor ou igual a 0.3 e portanto seguimos com o método:

3ª Passo:
x2=x1−f(x1)f´(x1)
x2=−1.23−f(−1.23)f´(−1.23)
f(−1.23)=4∗(−1.232)+3∗(−1.23)=2.36
f′(−1.23)=8∗(−1.23)+3=−6.84
x2=−1.23−2.36−6.84=−0.88

Cálculo da diferença:
|(x2−x1)|=|(−0.88−(−1.23))|=0.35

0.35 não é menor que 0.3 (nosso erro tolerado). Estamos quase. Mais 1 iteração deve resolver.

4ª Passo:
x3=x2−f(x2)f´(x2)
x3=−0.88−f(−0.88)f´(−0.88)
f(−0.88)=4∗(−0.882)+3∗(−0.88)=0.46
f′(−0.88)=8∗(−0.88)+3=−4.04
x3=−0.88−0.46−4.04=−0.77

Cálculo da diferença:
|(x3−x2)|=|(−0.88−(−0.77))|=0.11

0.11 é menor que 0.3 (nosso erro tolerado). Então que na 3º iteração encontramos a raiz apróximada, isto é, -0.77

Raiz = -0.77

Tarefa:
Implemente um programa em Linguagem C que encontre uma raíz aproximada de uma função polinomial utilizando o método de Newton-Raphson.
Considere a função f(x)=5x3+3x2−3, e sua derivada f′(x)=15x2+6x.

Seu programa deverá solicitar o erro esperado, o número máximo de iterações e um chute inicial.

Utilize variáveis de precisão simples e apresente o resultado com a quantidade padrão de casas decimais:

Caso não consiga convergir para a raiz imprima a mensagem:  "Nao foi possivel calcular a raiz com a precisao solicitada."

Dica: Para calcular o módulo utilize a função "fabs(parâmetro)" da biblioteca <math.h>, onde "parâmetro" é o valor que se deseja calcular o módulo.
*/

#include <stdio.h>
#include <math.h>

int main(){
    float erro, x0, x1, raiz;
    int nInt;

    scanf("%f %f %d", &x0, &erro, &nInt);

    for(int i = 0; i < nInt; i++){
        x1 = x0 - ((5*pow(x0, 3) + 3*pow(x0, 2) - 3) / (15*pow(x0, 2) + 6*x0));

        if(fabs(x1 - x0) < erro){
            printf("%f", x1);
            return 0;
        }

        x0 = x1;
    }

    printf("Nao foi possivel calcular a raiz");

    return 0;
}