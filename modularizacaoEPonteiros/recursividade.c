#include <stdio.h>
/* O que é recursividade?

recursividade é quando uma função chama ela mesma.

E.g: uma sigla recursiva é GNU -> GNU Not is Unix

Para que serve?

recursividade serve para um programador abstrair
melhor certos problemas

Beneficios:
Deixa o código mais enxuto e melhor de visualizar

Como montar?
para montar uma função recursiva temos que definir
duas coisas principais:

Base: valores que se conhece a resposta.
passo: qual passo fazemos para encontrar a resposta
apartir de valores que não se conhece a resposta.

*/
int soma;
int fatorial(int n){
    //caso base é o n = 0 return 1; pois sempre sabemos.
    if (n < 0){
        printf("não existe fatorial de numero negativo");
        return -1;
    } else if(n == 0){
        return 1;
    } else {
        return n*(fatorial(n-1));
    }
    //passo é o return n*(n-1); pois nao sabemos o valor mas
    //irá chegar até o caso base
}
int main(){
    int numero;
    printf("qual numero voce quer calcular o fatorial dele?");
    scanf("%d", &numero);
    int resultado = fatorial(numero);
    printf("fatorial de %d é %d", numero, resultado);
    return 0;
}