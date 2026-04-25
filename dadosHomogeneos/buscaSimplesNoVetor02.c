#include <stdio.h>

int main(){
    int v[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }
    int x;
    scanf("%d", &x);

    int y = 0;
    int z[10];
    for(int i = 0; i < 10; i++){
        if(v[i] == x){
            z[i] = i;
            y = y + 1 ;
            
        }
    }
    if(y == 0){
        printf("Mia x");
    } else{
        printf("%d\n",y);
        for(int i = 0; i< 10; i++){
            printf("%d\n", z[i]);
    }

    return 0;
}
