/*
Write a C program that simulates a simple calculator. The program should:
1.	Prompt the user to enter a first real number (integer or floating-point).
2.	Prompt the user to enter an operator (a single character): +, -, *, /, or %.
3.	Prompt the user to enter a second real number.
4.	Use a switch statement (no if-else allowed) to perform the correct operation based on the operator entered.
5.	Support the following operations:
o	+ → Addition
o	- → Subtraction
o	* → Multiplication
o	/ → Division (must handle division by zero)
o	% → Modulus/remainder (valid only for integers)
6.	Print an appropriate error message if:
o	The operator entered is invalid (not one of the above five).
o	The user tries to divide by zero.
7.	Display the final result if the operation is valid.
*/

#include <stdio.h>

int main()
{

    double num1, num2, result;
    char ch;

    printf("This is a basic Calculator Program:\n");
    printf("Enter the first number: \n");
    scanf("%lf", &num1);
    printf("Enter the Operation: \n");
    scanf(" %c", &ch);
    printf("Enter the second number: \n");
    scanf("%lf", &num2);

    switch (ch)
    {
    case '+':
        result = num1 + num2;
        printf("%.2lf", result);
        break;

    case '-':
        result = num1 - num2;
        printf("%.2lf", result);
        break;

    case '*':
        result = num1 * num2;
        printf("%.2lf", result);
        break;

    case '/':
        if (num2 == 0)
        {
            printf("Error: Can't divide by 0\n");
        }
        else
        {
            result = num1 / num2;
            printf("%.2lf", result);
        }
        break;

    case '%':
        if (num2 == 0)
        {
            printf("Error: Can't divide by 0\n");
        }
        else
        {
            result = (int)num1 % (int)num2;
            printf("%.2lf", result);
        }
        break;

    default:
        printf("Error! Invalid Operator\n");
        break;
    }

    return 0;
}