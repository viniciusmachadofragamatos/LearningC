#include <stdio.h>
/* fibonacci é:

    caso base:
    fib(0) = fib(1) = 1

    passo:
    fib(n) = fib(n-1) + fib(n-2)

*/

int fibonacci(int n){
    if(n == 0 || n == 1){
        return 1;
    } else{
        return fibonacci(n - 1) + fibonacci(n - 2);
        
    }
}
int main(){
    int numero;
    printf("Selecione até que ordem fazer fibonacci");
    scanf("%d", &numero);
    int resultado = fibonacci(numero);
    printf("a sequencia de fibonnaci de ordem %d é %d", numero, resultado);
}