#include <stdio.h>

//strings sao utilizadas para armazenar uma cadeia de caracteres
//em c para armazenar uma string, temos que utilizar um vetor de caracteres

int main(){
    char nome[15];
    char sobrenome[15];
    scanf("%s %s", nome, sobrenome);
    //scanf("%s", nome + 1);
    //scanf("%s", nome + 2);

    // o caracter \0 indica que a string terminou
    // devemos fornece uma posição de memoria para o printf
    //a string começa na posição fornecida e antes do \0 no vetor
    printf("%s %s", nome, sobrenome);
}