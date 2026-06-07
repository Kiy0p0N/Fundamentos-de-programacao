/*
De acordo com a EMBRAPA, a temperatura média para se cultivar o café arábica deve ser entre 18ºC (inclusive) e 22ºC (inclusive). 
Um sensor de temperatura foi colocado no terreno e fornece 6 (seis) medidas diárias. 
Escreva um programa em linguagem C que faça a leitura de 6 (seis) temperaturas e execute os seguintes processamentos:

- Informe a menor temperatura

- Informe a maior temperatura

- Informe a temperatura média

- Informe se o terreno é ou não adequado ("ok" ou "nok")

Informe os valores de saída com duas casas decimais na mesma linha separados por um espaço em branco. 
Utilize variáveis de precisão simples. Na linha abaixo informe "ok" ou "nok".
*/

#include <stdio.h>

int main(){
    int qtdMedidas = 6;
    float temperaturas[6], soma, menor, maior, media;

    for(int i = 0; i < qtdMedidas; i++){
        scanf("%f", &temperaturas[i]);
    }

    menor = temperaturas[0];
    maior = temperaturas[0];
    soma = temperaturas[0];

    for(int i = 1; i < qtdMedidas; i++){
        if(temperaturas[i] < menor){
            menor = temperaturas[i];
        }

        if(temperaturas[i] > maior){
            maior = temperaturas[i];
        }

        soma = soma + temperaturas[i];
    }

    media = soma / 6;

    printf("%.2f %.2f %.2f\n", menor, maior, media);

    if(media >= 18.0 && media <= 22.0){
        printf("ok");
    } else {
        printf("nok");
    }

    return 0;
}