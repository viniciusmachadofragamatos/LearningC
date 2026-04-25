#include <stdio.h>
/*
O QUE É UM VETOR?
um vetor é uma estrutura de dados que armazenam
uma coleção de elementos do mesmo tipo em posições
consecutivas de memória.
assim são homogêneos, isto é as variaveis armazenadas
por um vetor são todas do mesmo tipo


PARA QUE SERVE UM VETOR?
os vetores servem para armazenar e organizar uma quantidade
conhecida de dados do mesmo tipo. em vez de declarar inumeras
variaveis individuais, usamos um único vetor com um tamanho
definido.

e também automatizar tarefas, pois podemos aplicar a mesma logica
ou calculo a todos os elementos do vetor com um único bloco de
codigo


VETORES EM C
E.g:
    int vetor [3];
    
    
    tipo -> int (armazena inteiros)
    nome -> vetor
    tamanho -> 3 (armazena três elementos)


COMO ACESSAR OS ELEMENTOS DE UM VETOR?
podemos utilizar tanto a aritmética de ponteiros
quanto o operador [] indicando entre os colchetes
qual a posição que desejamos acessar

*X      *(X+1)      *(X+2)
X[0]     X[1]       X[3]        
 

COMO ATRIBUIR VALORES AOS ELEMENTOS DE UM VETOR?
Alterando todos os elementos do vetor:
int v[5] = {1, 2, 3, 4, 5}

v[0] = 1
v[1] = 2
v[2] = 3
v[3] = 4
v[4] = 5
v = {5, 4, 3, 2, 1};

v[0] = 5
v[1] = 4
v[2] = 3
v[3] = 2
v[4] = 1

Se formos declarar todos os elementos do vetor na 
sua declaração, podemos omitir o tamanho, pois ele 
se ajustará à quantidade de elementos presentes 
dentro das chaves:


int x[] = {1, 2, 3}; // x possui 3 elementos

int y[] = {12, 15, 18, 21}; // y possui 4 elementos



Se a quantidade de elementos dentro das chaves for
menor que a quantidade de elementos, então as posições
ao final do vetor serão preenchidas com o valor 0
0 -> no caso de vetores numéricos):


int t[5] = {1, 2, 3};

t[0] = 1
t[1] = 2
t[2] = 3
t[3] = 0
t[4] = 0


alterando apenas um elementos:

int v[5];

v[0] = 7; // primeira posicao do vetor

v[4] = 9; // quinta posicao do vetor

*(v+2) = 123; // terceira posicao do vetor



COMO LER OS ELEMENTOS DE UM VETOR?
Utilizando o e comercial("&") e o operador [ ] indicando a posição do vetor:

int v[7];

scanf("%d", &v[3]); // ler o valor a ser colocado na quarta posicao do vetor

//A utilização do e comercial é necessária pois, ao utilizar o operador [], não
//estamos pegando o endereço do elemento, mas acessando o elemento de fato


int v[7];

scanf("%d", v+2); // ler o valor a ser colocado na terceira posicao do vetor

//A utilização do e comercial não é necessária pois, ao utilizar aritmética de ponteiros,
//estamos pegando o endereço do elemento, visto que o nome do vetor é um ponteiro para a 
//sua primeira posição

*/
int main(){
    int v[5]= {0};
    for(int i=0;i<5;i++){
        scanf("%d", &v[i]);
    }

    for(int i=0;i<5;i++){
        if(*(v+i) % 2 == 0){
            printf("O numero na posicao %d do vetor eh par!\n", i);
        }
        else{
            printf("O numero na posicao %d do vetor eh impar!\n", i);
        }
    }
    printf("Tamanho em bytes de um inteiro -> %d\n", sizeof(int));
    printf("Tamanho em bytes do vetor v -> %d\n", sizeof(v));
    printf("Quantidade de elementos do vetor v -> %d\n", sizeof(v)/sizeof(int));
    printf("Primeira posicao -> %d\n", &v[0]);
    printf("Segunda posicao -> %d\n", &v[1]);
    printf("Terceira posicao -> %d\n", &v[2]);
}
/* Saída:
Tamanho em bytes de um inteiro -> 4
Tamanho em bytes do vetor v -> 20
Quantidade de elementos do vetor v -> 5
Primeira posicao -> 6422292
Segunda posicao -> 6422296
Terceira posicao -> 6422300
*/

