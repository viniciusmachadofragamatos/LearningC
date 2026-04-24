#include <stdio.h>
/*
O QUE É UM PONTEIRO?
Um ponteiro é uma variável especial que armazena o endereço 
de outra variável na memória. Assim, em vez de armazenar um 
valor como 5 ou 'A', um ponteiro armazena o endereço de memória 
onde esse valor está guardado.

ESTRUTURA DE DECLARAÇÃO:

<tipo> *<nome>;

Na declaração de um ponteiro, o tipo representa qual tipo de dado 
está sendo armazenado na posição de memória guardada pelo ponteiro. 
Ou seja, se uma determinada posição de memória é usada para 
armazenar inteiros, então um ponteiro que guardará o endereço dessa 
posição deverá ser do tipo int. Além disso, o * indica que a variável 
é um ponteiro.

ARITMETICA DE PONTEIRO
Ao tentar somar ou subtrair valores de um ponteiro, o endereço de memória 
ao qual ele "aponta" será alterado. Ou seja, se somarmos 1 a um ponteiro que 
"aponta" para um inteiro, então ele passará a apontar para a próxima região 
de memória.
E.g:

Se um int ocupa 4 bytes, então p + 1 irá apontar para um endereço 4 bytes à 
frente de p.

TAMANHO
A linguagem C possui um operador unário que retorna o tamanho em bytes de algo 
(a quantidade de memória ocupada por um dado específico, por exemplo): o sizeof.

Exemplos:

    sizeof(int) = 4
    sizeof(float) = 4
    sizeof(double) = 8
    sizeof(char) = 1

se adicionarmos 11 a um ponteiro que aponta para um inteiro, então o novo endereço 
de memória "apontado" por ele estará 4 bytes à frente do antigo

COMO ALTERAR O CONTEÚDO DE UM PONTEIRO
podemos utilizar o operador & para descobrir o endereço de uma variável na memória, 
e atribuí-lo a um ponteiro

COMO ACESSAR O CONTEÚDO APONTADO POR UM PONTEIRO?

Se apenas utilizarmos um comando printf ira retornar o endereco de onde a variavel
esta armazenada, para acessar mesmo, basta adicionar um asterisco antes do nome do ponteiro:
#include <stdio.h>

int main(){
    int x = 5;

    int *p = &x;

    printf("%d\n", *p);
}
*/
int main(){
    int var = 123;

    int *ponteiro = &var;

    printf("%d\n", *ponteiro);

    *ponteiro = 789;

    printf("%d\n", var);

    printf("Tamanho de um inteiro: %zu\n\n", sizeof(int));

    int x = 1;

    int *p = &x;

    printf("p aponta para %x\n", p);
    printf("p+1 aponta para %x\n", p+1);
    printf("p+2 aponta para %x\n", p+2);
}