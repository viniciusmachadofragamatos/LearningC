#include <stdio.h>

int main(){
    /*Logical Operatos
    AND(&&) and OR(||) operators to combine 
    and invert logical expressions
    */

    //and operator -> apenas se os DOIS forem true
    //se não retorna false. E.g:Is even or oven
    int x;
    scanf("%d",&x);
    if(x % 2 == 0 && x> 0){
        printf("%d is even and positive", x);
    }

    //or operator -> pelo menos 1 tem que ser true

    if(x % 2 ==0 || x > 0) {
        printf("%d is even or positive", x);
    }

    //precedenca -> and operators are checked before
    //the or operators, but with parentheses we can change
    //the order of execution of operators
}