#include <stdio.h>

int main(){

    /*relational operators -> compare 2 values 
    and check the relationship between them is true(1) or false(0)
    < less than
    > greater than
    <= less than or equal to
    >= greater than or equal to
    == equal to
    != not equal to
    */

    // false -> 0
    // true -> 1
    printf("%d\n", 1 < 2);
    printf("%d\n", 1 > 2);

    /*if decision structure
    use relational operators to make statement 
    if such a statement is true, execute a certain code.

    E.g of code that verify if the number is even or odd!
    */
    int x;
    scanf("%d", &x);
    
    if(x % 2 == 0){
        printf("%d is even!\n", x);
    }
    
    if(x % 2 != 0){
        printf("%d is odd!\n", x);
    }
}