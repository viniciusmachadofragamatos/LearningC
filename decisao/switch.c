#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    switch (x){
        case 1:
            printf("papel\n");
            break;
        case 2:
            printf("tesoura\n");
            break;
        case3:
            printf("cola\n");
            break;     
        case4:
            printf("pedra\n");
            break;
        default:
            printf("não foi encontrado");
    }
}