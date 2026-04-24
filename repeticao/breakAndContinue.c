#include <stdio.h>
/*
CONTINUE
O comando continue é utilizado para pular o restante do código 
dentro do loop e ir direto para a próxima iteração (ou seja, 
para o próximo ciclo de repetição). Isso significa que, quando 
o programa encontra um continue, ele ignora todas as instruções 
que estão abaixo dele no bloco atual e retorna ao início do loop 
para verificar novamente a condição.

BREAK
O comando break é usado para interromper completamente um laço de 
repetição encerrando sua execução antes que a condição se torne falsa. 
Ele é muito útil quando queremos parar um loop ao atingir uma condição 
específica, sem precisar percorrer todas as repetições.
*/
int main(){
    for(int i = 0; i < 6; i++){
	if(i == 2){
		continue;
	}
	printf("%d\n", i);
    }
}