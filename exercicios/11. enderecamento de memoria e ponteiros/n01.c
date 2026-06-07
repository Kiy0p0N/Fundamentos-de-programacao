/*
Sendo p um ponteiro, qual a diferença entre:
a) p++; //++p
b) (*p)++; //++(*p)
c) *(p++); //*(++p)
Faça um programa exemplo que ilustre estas diferenças e adicione comentários ao código de modo a explicá-las.
*/

#include <stdio.h>

int main(){
    int n = 10; 

    int* p = &n; // ponteiro para n

    printf("Valor inicial de p: %p\n", p);
    // Exemplo de saída: Valor de p: 0x7ffcb9bb87ec


    /* 
    a) p++; //++p

    Se incrementarmos um ponteiro, ele "andará" um espaço na memória.
    Quanto ele andará depende do tipo da vaviável, por exemplo, int = 4 bytes, char = 1 byte.
    */
    p++;
    printf("Valor de p após p++: %p\n", p);
    // Exemplo de saída: Valor de n após p++: 0x7ffcb9bb87f0
    

    /*
    b) (*p)++; //++(*p)

    Nesse caso estamos inclementando após desreferenciar o ponteiro p, ou seja, estamos inclementando no valor de n.
    Como n vale 10, após (*p)++ n passará a valer 11.
    */
    (*p)++;
    printf("Valor de n após (*p)++: %d\n", n);
    // Exemplo de saída: Valor de n após (*p)++: 11


    /*
    c) *(p++); //*(++p)

    Aqui primeiro estamos inclementando no ponteiro p, que, como no exemplo a, fará com que ele ande na memória.
    Após a inclementação estamos desreferenciando p, que agora está apontando para um valor aleatório da memória, não mais para n. 
    */
    *(p++);
    printf("Valor apontado por p após *(p++): %d\n", *p);
    // Exemplo de saída: Valor apontado por p após *(p++): 1067629200

    return 0;
}