/*
O que faz a função no trecho de código abaixo?
*/

void funcao(int *v, int n)
{
    int* c;
    for (c = v; c < v+n; c++){
        printf("%d\n", *c);
    }
}

/*
RESPOSTA:
A função recebe um vetor de inteiros e sua quantidade de elementos (n). 
Em seguida, utiliza um ponteiro auxiliar (c) para percorrer todas as posições do vetor, imprimindo o valor armazenado em cada uma delas. 
O percurso é feito por aritmética de ponteiros, avançando uma posição do vetor a cada iteração do laço for.
*/