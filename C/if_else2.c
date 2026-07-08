/*
Problem Statement:

Write a C program that determines driving eligibility and safety instructions based on age.

Requirements:
1. Take age as integer input from user.
2. Apply the following conditions:

   - If age < 18:
       Print "Sorry, you can't drive."

   - If age > 60:
       Print "You can drive. You are a senior citizen, so drive carefully."

   - If age is between 18 and 25 (inclusive of 19–25):
       Print "You are young, so don't overspeed."

   - If age >= 18:
       Print "You can drive."

3. Use proper if-else if ladder structure.
*/

#include <stdio.h>

int main()
{
    int age;
    char nextChar;

    printf("\nMay I know you age please?\n");

    int result = scanf("%d%c", &age, &nextChar);

    if (result != 1 && result != 2)
    {
        printf("\nInvalid input! Please enter a valid integer.\n");
    }
    else if (result == 2 && nextChar == '.')
    {
        printf("\nSorry, your age cannot be fractional\n");
    }
    else if (age < 18)
    {
        printf("\nSorry you can't drive!!!\n");
    }
    else if (age > 60)
    {
        printf("\nYou can drive. But drive carefully as you are a senior citizen\n");
    }
    else if (age >= 18 && age <= 25)
    {
        printf("\nYou are young, so don't overspeed.\n");
    }
    else
    {
        printf("\nYou can drive!!!\n");
    }

    return 0;
}