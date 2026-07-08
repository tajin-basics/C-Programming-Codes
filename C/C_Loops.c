/*
for Loops: Best used when you know exactly how many times
           you want to repeat something in advance.

while Loops: Best used when you don't know in advance
             how many iterations you'll need, the loop
             depends on a condition that might change
             unpredictably(e.g. user input)

do while Loops: Best used when you want the loop body to
                run at least once, no matter what, regardless
                of whether the codition is true or false at the 
                start
*/

#include <stdio.h>

int main(){

    int flag;
    int number;

    for (int i = 1; i <= 5; i++)
    {
        printf("%d, ", i);
    }
    printf("\n");

    printf("Enter a number:\n");
    scanf("%d", &flag);

    while(flag!=0){
        printf("%d, ", flag);
        flag--;
    }

    printf("\n");

    printf("Running do while:\n");
    printf("Enter a value:\n");
    scanf("%d", &number);

    do{
        printf("%d, ", number);
        number--;
    } while(number >=0 );



    return 0;
}

