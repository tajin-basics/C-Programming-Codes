/*
Problem Statement:

Write a C program that takes two real numbers (double) as input from the user.
The program should then:

1. Convert both numbers into integers using type casting (truncate the decimal part).
2. Display the original double values.
3. Display the converted integer values.
4. Calculate and display the sum of the converted integers.

The output should be properly formatted using printf (aligned output is recommended).
*/

// Solution :-

#include <stdio.h>

int main()
{

    double num1, num2;
    printf("Give me any two valid numbers:\n");
    scanf("%lf %lf", &num1, &num2);

    int number1 = (int)num1;
    int number2 = (int)num2;

    printf("fyi, I am only taking integers tho! :/\n");
    printf("Now your number kinda look like this : %d, %d\n", number1, number2);

    int sum;
    printf("Now I will make the additions :)\n");
    sum = number1 + number2;

    printf("%-25s : %d\n", "The addition is", sum);

    return 0;
}