#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[10];
    int z[10];
    int x, y = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &x);

    for(int i = 0; i < 10; i++) {
        if(v[i] == x) {
            z[y] = i;
            y++;
        }
    }

    if(y == 0) {
        printf("Mia x");
    } else {
        printf("%d\n", y);

        for(int i = 0; i < y; i++) {
            printf("%d", z[i]);

            if(i < y - 1) {
                printf(" ");
            }
        }
    }

    return 0;
}
