#include <stdio.h>
/*
Na passagem por referência, o que é enviado para a função
não é o valor da variável, mas sim o endereço de memória onde 
o valor está guardado. Assim, a função passa a acessar diretamente
a variável original, podendo modificá-la de forma permanente.
 Observe o código abaixo para compreender melhor:
 */
void troca(int *a, int *b){
    int aux = *a;

    *a = *b;

    *b = aux;

    printf("troca -> a = %d e b = %d\n", *a, *b);
}

int main(){
    int a = 1;

    int b = 2;

    printf("main -> a = %d e b = %d\n", a, b);
    
    troca(&a, &b);

    printf("main -> a = %d e b = %d\n", a, b);

    /* Saída:
        main -> a = 1 e b = 2
        troca -> a = 2 e b = 1
    main -> a = 2 e b = 1

*/
}