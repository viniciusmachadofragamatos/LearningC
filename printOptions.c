#include <stdio.h>

int main() {
    //tabulação e quebra de linha

    printf("Neps Academy\n");//usando quebra de linha -> \n
    printf("Hello->\tworld\n");//usando (tabulação/tab) -> \t

    //barra invertida e porcentagem

    printf("imprimir uma barra invertida: \\\n"); // usando barra invertida \ duas vezes
    printf("%d %% %d = %d\n", 10, 7, 10%7);

    //Alinhamento
    printf("imprimindo com espaco a esquerda: [%7d]\n", 123);
    printf("imprimindo com espaco a direita: [%-7d]\n",123);

    //preenchimento com 0's(alinhamento a direita com zeros
    int numeros = 67;
    printf("%05d",numeros);
    
    //definindo precisão -> casas decimais de um float

    float real = 123.456789;
    printf("%f\n", real);
    printf("%.2f\n", real);
    printf("%.3f\n", real);

    //imprimir octais e hexadecimais
    //octais
    printf("%o\n",9);
    printf("%o",94);
    //hexadecimais -> 2 formas

}