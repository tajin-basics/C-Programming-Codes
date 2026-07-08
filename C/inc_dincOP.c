/*
Problem Statement:

Write a C program to demonstrate the use of increment and decrement operators.

The program should:

1. Take an integer input from the user.
2. Apply the following operations on the variable:
   - Pre-increment (++i)
   - Post-increment (i++)
   - Pre-decrement (--i)
   - Post-decrement (i--)
3. Print the value of the variable:
   - before the operation
   - during the operation (inside printf)
   - after the operation

The goal is to clearly show the difference between pre and post operations.
*/

#include <stdio.h>

int main()
{
    int i, origin;

    printf("Input an integer number: (input \"1\" for better understanding)\n");
    scanf("%d", &origin);

    // Post-increment (i++)
    i = origin;
    printf("\nPost-increment (i++):\n");
    printf("Before : %d\n", i);
    printf("During : %d\n", i++);
    printf("After  : %d\n", i);

    // Pre-increment (++i)
    i = origin;
    printf("\nPre-increment (++i):\n");
    printf("Before : %d\n", i);
    printf("During : %d\n", ++i);
    printf("After  : %d\n", i);

    // Post-decrement (i--)
    i = origin;
    printf("\nPost-decrement (i--):\n");
    printf("Before : %d\n", i);
    printf("During : %d\n", i--);
    printf("After  : %d\n", i);

    // Pre-decrement (--i)
    i = origin;
    printf("\nPre-decrement (--i):\n");
    printf("Before : %d\n", i);
    printf("During : %d\n", --i);
    printf("After  : %d\n", i);

    return 0;
}