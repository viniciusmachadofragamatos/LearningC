#include <stdio.h>

/* SOMA DE INT
Tipo de retorno: int -> pois a soma de dois inteiros eh um inteiro
Nome: soma
Parametros: int a, int b -> as duas parcelas da nossa soma
Codigo: a + b
*/
int soma(int a, int b) {
    int s = a+b;
    return s;
}

float somaFlutuante(float a, float b) {
    float s = a+b;
    return s;
}
int menor(int a, int b){
    if(a < b){ // checa se a eh menor que b
        return a;
    }

    else{ // caso contrario
        return b;
    }
}
float media(float a, float b){
    return (a+b)/2.0;
}


void saudacao(){
    printf("Olá! Seja bem-vindo(a) ao Neps Academy\n");
}
int main(){
    int x, y;
    scanf("%d\n%d",&x, &y);
    printf("%d", soma(x,y ));
    float w, z;
    saudacao();
    scanf("%f\n%f", &w, &z);
    printf("%f\n", somaFlutuante(w,z));
    printf("%.2f\n", media(w, z));
    return 0;
}