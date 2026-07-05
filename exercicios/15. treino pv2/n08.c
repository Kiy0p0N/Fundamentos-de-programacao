/*
Um professor muito legal voltou a ter uma ideia incrível.
Resolveu implementar um sistema com N avaliações, e descartar a menor nota.
Nesse formato, a média final levará em consideração as N-1 maiores notas.
Após eliminar a menor nota e calcular a média, informe se o(a) aluno(a) está "ok" ou "nok". Informe também a menor nota.
Utilize variáveis de precisão simples e mostre a saída com duas casas decimais. 

O seu programa deverá solicitar uma quantidade N (onde N é um número natural) notas e poderá apenas consumir os valores diretamente (scanf).

Caso N seja 1, a média e a menor nota será a própria nota inserida.

Ordem de entrada: N, seguido das notas

Ordem de saida: Menor nota media situacao (ok/nok)
*/

#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);

    float nota;
    float menorNota = INT_MAX;
    float media = 0;

    for(int i = 0; i < n; i++){
        scanf("%f", &nota);

        if(nota < menorNota){
            menorNota = nota;
        }

        media += nota;
    }

    if(n > 1){
        media = (media - menorNota) / (n--);
    }

    printf("%.2f ", menorNota);
    printf("%.2f ", media);

    if(media >= 6.0){
        printf("ok");
    } else{
        printf("nok");
    }

    return 0;
}