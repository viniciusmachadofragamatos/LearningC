#include <stdio.h>
/*
estrutura doWhile é uma estrutura de repetição 
que executa um trecho de código enquanto uma 
condição for verdadeira, assim como o while. 
A grande diferença é que no doWhile a verificação 
da condição acontece após a execução do bloco de código 
ou seja, o código é executado pelo menos uma vez, 
independentemente da condição. Essa característica 
é o que torna o doWhile especialmente útil em situações 
em que precisamos executar algo antes de testar a condição
como pedir uma entrada do usuário e só depois verificar 
se o valor digitado é válido

ESTRUTURA:
do{
	//Código
} while( condição );
*/
int main(){
    int n;
	
	do{
		scanf("%d", &n);
	} while(n!=2018);
}