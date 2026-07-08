/*
Problem Statement:

Write a C program that determines driving eligibility and safety instructions based on age. (Do the whole thing using ternary operator only)

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

    printf("\nMay I know your age please?\n");
    int result = scanf("%d%c", &age, &nextChar);

    (result != 1 && result != 2) ? printf("\nInvalid input, please input valid age.\n") : (result == 2 && nextChar == '.') ? printf("\nHate to break it you, your age cannot be a fraction number dummy.\n")
                                                                                      : (age < 18)                         ? printf("\nSorry you can't drive.\n")
                                                                                      : (age >= 18 && age <= 25)           ? printf("\nYou can drive but you are young, so don't overspeed.\n")
                                                                                      : (age > 60)                         ? printf("\nYou can drive, you are a senior citizen, so drive carefully.\n")
                                                                                                                           : printf("\nYou can drive");

    return 0;
}