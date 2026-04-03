/*
Escreva um programa que faz a divisão entre dois números reais verificando se o divisor é igual a zero. 
A operação só pode ser concluída se o divisor for válido. Utilize variáveis de precisão simples e três casas decimais na saída. 
Caso o divisor seja 0 (zero), imprimir: "Impossivel divisao por 0 (zero)" (sem acentuação).
*/

#include <stdio.h>

int main(){
    float a, b, quoc;
    
    scanf("%f", &a);
    scanf("%f", &b);
    
    if (b == 0) {
        printf("Impossivel divisao por 0 (zero)");
    } else {
        quoc = a / b;
        printf("%.3f", quoc);
    }
    
    
    return 0;
}