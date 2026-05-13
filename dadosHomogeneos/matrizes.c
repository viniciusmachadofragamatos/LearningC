#include <stdio.h>
//matriz -> conjunto de vetores
// vetores-> conjunto de elementos

//declaração:
/*
<tipo> <nome>[<vetores>][<tamanho>]

E.g:
int matriz [3][3]

matriz[0] = {x, x + 1, x+2}
matriz[1] = {x + 3, x + 4, x + 5}
matriz[2] = {x + 6, x + 7, x + 8}

matriz[0][0] = {x}
matriz[1][0] = {x + 3}
matriz[2][0] = {x + 6}

matriz[0][1] = {x + 1}
matriz[1][1] = {x + 4}
matriz[2][1] = {x + 7}

matriz[0][2] = {x + 2}
matriz[1][2] = {x + 5}
matriz[2][2] = {x + 8}

*/
int main(){
    int m[2][3];
    int linha, coluna, i;
        // m[0][0] = 1;
        // m[0][1] = 2;
        // m[0][2] = 3;
        // m[1][0] = 4;
        // m[1][1]= 5;
        // m[1][2]= 6;
        
    //lendo as matrizes automatizado;
    //maneiras de ler uma matriz
    //maneira 1:
    // for(linha = 0; linha < 2; linha ++){
    //     for(coluna = 0; coluna < 3; coluna++){
    //         scanf("%d",m[linha]+ coluna);
    //     }
    // }
    
    // //maneira 2:
    // for(linha = 0; linha < 2; linha ++){
    //     for(coluna = 0; coluna < 3; coluna++){
    //         scanf("%d",&m[linha][coluna]);
    //     }
    // }

    //maneira 3:
    for(i=0; i< 6; i++){
        scanf("%d", m[0]+ i);
    }

    //printando matrizes
    for(linha = 0; linha < 2; linha ++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("%d ",m[linha][coluna]);
        }
        printf("\n");
    }

    
}