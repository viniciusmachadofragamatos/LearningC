#include <stdio.h>
/*
estrutura for é semelhante ao while, pois é 
Uma estrutura de repetição que repete um treço
de código enquanto uma certa condição for verdadeira.
Porém, podemos incluir um comando antes de ser executada
a primeira verificação e um comando que vai ser executado ao final de cada repetição.

ESTRUTURA:
for(inicialização; condição; incremento){
	//Código
}



*/
int main(){
    //SEM FOR:
    int n;
	int i;
	scanf("%d", &n);
	
	i = 1; // inicializacao
	while(i<=n){ //condicao
		printf("Neps\n");
		i = i+1; // incremento
	}
    //COM FOR
    int n;
	int i;
	scanf("%d", &n);
	
	for(i = 1; i<=n; i = i+1){
		printf("Neps\n");
	}
}