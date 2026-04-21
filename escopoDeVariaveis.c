#include <stdio.h>
/*VARIAVEIS LOCAIS
O escopo de uma variável  representa a região do 
programa onde ela é reconhecida e pode ser utilizada. 
Em outra palavras, o escopo define os limites dentro 
dos quais uma variável “existe”.

Cuidado: Variáveis locais não são inicializadas
automaticamente — elas contêm lixo de memória até receberem um valor

VARIAVEIS GLOBAIS
Variáveis de escopo global existem e podem ser acessadas e modificadas
em qualquer trecho do programa. Estas variáveis devem ser declaradas 
fora de qualquer função. Além disso, as variáveis globais são automaticamente 
inicializadas com zero, mesmo que você não atribua um valor a elas.

PRIORIDADE
Quando uma variável local tem o mesmo nome de uma variável global
a local tem prioridade dentro de seu escopo. Isso é chamado de
 sombreamento (shadowing).
*/
int aux(){
    int a = 4;
    printf("Dentro = %d\n", a);
}
int main(){
    int a =5;
    printf("Main = %d\n", a);
    aux();
}