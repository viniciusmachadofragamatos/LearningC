#include <stdio.h>

int main(){
    int v[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }
    int x;
    int y = 0;
    int z[10];
    scanf("%d", &x);

    for(int i = 0; i < 10; i++){
        if(v[i] == x){
            y = y + 1 ;
            z[i] = i;
        }
    }
    if(y == 0){
        printf("Mia x");
    }
    printf("%d",y);
    for(int i = 0; i< 10; i++){
        if(z[i] != 0){
            printf("%d\n", z[i]);
        } 
    }
}