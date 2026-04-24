#include <stdio.h>
/*
A estrutura while é uma estrutura de repetição
(também chamada de loop), ou seja, uma estrutura 
que utilizamos para repetir um certo trecho de código.

ESTRUTURA:

while(condição){
	// Código
}

o while é preciso de uma condição que em algum momento
será falsa, caso contrário o programa repetirá o que está
entre as chaves infinitamente, gerando o que chamamos na
programação de loop infinito.
*/
int main(){
    int i = 1;
	while(i < 5) {
		printf("%d\n", i);
        i = i+1;
	}

}