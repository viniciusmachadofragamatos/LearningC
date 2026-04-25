#include <stdio.h>

int main() {
    int v[10], x;
    int encontrou = 0;

    // leitura dos 10 valores
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    // leitura do X
    scanf("%d", &x);

    // busca no vetor
    for (int i = 0; i < 10; i++) {
        if (v[i] == x) {
            encontrou = 1;
            break; // já achou, pode parar
        }
    }

    // saída
    if (encontrou) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}