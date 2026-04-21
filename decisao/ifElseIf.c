#include <stdio.h>

int main() {
    int nota1;

    scanf("%d", &nota1);
    if( nota1 >= 7) {
        printf("Aprovado\n");
    } else if( nota1 < 4) {
        printf("Reprovado\n");
    } else {
        printf("Avaliação final!\n");
    }
}