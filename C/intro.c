// Introduction to C programming. Writing the first C program.

#include <stdio.h>

int main()
{
    printf("\n");
    printf("Hello World\n");
    printf("This is our first program.\nLet's take on C!!\n");

    // Now we are going to do some stuffs here like these:-

    printf("Tajin\t:Hi Isak, what's up bud?\nIsak\t:Yo! its been a while!\n");
    printf("Isak\t:Are you in CSE\\ DS right now?\n");
    printf("Tajin\t:Yep! I am pretty sure at \"Cse\" right now. Yeah!!\n");

    printf("\n");

    // Now we are going to do some stuffs like these:-

    int num1;
    float num2;
    double num3;
    char character;

    num1 = 10;
    num2 = 10.10;
    num3 = 200.1989;
    character = 'c';

    printf("%-25s : %d\n", "This is an integer number", num1);
    printf("%-25s : %.2f\n", "This is a float number", num2);
    printf("%-25s : %.4lf\n", "This is a double number", num3);
    printf("%-25s :%c\n", "This is a character", character);

    printf("\n");

    // Now we are going to do stuffs like this:-

    int num_1;
    float num_2;
    double num_3;
    char ch;

    printf("Please input your integer number:\n");
    scanf("%d", &num_1);

    printf("Please input your floating number:\n");
    scanf("%f", &num_2);

    printf("Please input your double number:\n");
    scanf("%lf", &num_3);

    printf("Please input your character:\n");
    scanf(" %c", &ch);

    printf("%-25s : %d\n", "This is your integer number", num_1);
    printf("%-25s : %f\n", "This is your floating number", num_2);
    printf("%-25s : %lf\n", "This is your double number", num_3);
    printf("%-25s : %c\n", "This is your character", ch);

    // And that is how our basic intro to C has come to an end.
    /*
           Thank you Folks!!!!!!
    */

    return 0;
}