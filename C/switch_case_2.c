/*
Problem Statement:

Write a C program that calculates the result of a simple arithmetic operation based on user input.

Requirements:
1. The program should take the following inputs from the user:
   - A character operator (+, -, *, /)
   - Two floating-point numbers

2. The program should accept only valid inputs.

3. If the user enters an invalid operator:
   - Print "Invalid operator! Please enter +, -, *, or /."

4. If the input is valid:
   - Perform the corresponding arithmetic operation:
     + → Addition
     - → Subtraction
     * → Multiplication
     / → Division

5. Special condition:
   - If division is selected and the second number is 0:
     - Print "Error: Division by zero is not allowed."

6. The program must use switch-case statements (not if-else) for decision making.

7. Display the result up to 2 decimal places.
*/

#include <stdio.h>

int main()
{

    float num1, num2, result;
    char op;

    printf("\nFirst Number: \n");
    scanf("%f", &num1);
    printf("\nSecond Number: \n");
    scanf("%f", &num2);

    printf("\nEnter valid operator: +, -, *, / : \n");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f \n", num1, num2, result);
        break;

    case '-':
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f \n", num1, num2, result);
        break;

    case '*':
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f \n", num1, num2, result);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("\nError: Division by zero is not allowed.\n");
        }
        else
        {
            result = (num1 / num2);
            printf(" %.2f / %.2f = %.2f\n", num1, num2, result);
        }

        break;

    default:
        printf("\nInvalid operator! Please enter +, -, *, or /.\n");
        break;
    }

    return 0;
}