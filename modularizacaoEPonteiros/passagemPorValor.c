#include <stdio.h>
/*
É o método padrão. Na passagem por valor, o que é
enviado para a função é apenas uma cópia do valor
da variável original. Isso significa que, dentro
da função, qualquer alteração feita nessa cópia não afeta
a variável original. Para entender melhor, 
observe o exemplo abaixo:*/
void troca(int a, int b){
    int aux = a;

    a = b;

    b = aux;

    printf("troca -> a = %d e b = %d\n", a, b);
}

int main(){
    int a = 1;

    int b = 2;

    printf("main -> a = %d e b = %d\n", a, b);

    troca(a, b);

    printf("main -> a = %d e b = %d\n", a, b);
}
/* Saída:
main -> a = 1 e b = 2
troca -> a = 2 e b = 1
main -> a = 1 e b = 2

*/

