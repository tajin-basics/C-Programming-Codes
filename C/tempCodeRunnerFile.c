/*
Problem Statement:

Write a C program that takes the user's age as input.

Requirements:
1. The program should accept only integer input.
2. If the user enters a valid integer:
   - If age >= 18 → print "You may enjoy the rollercoaster ride."
   - If age < 18 → print "You cannot enjoy the rollercoaster ride."
3. If the user enters a fractional or invalid input:
   - Print "Your age can't be fractional, try again."
*/

#include <stdio.h>

int main()
{

    int age, ageCheck;
    printf("\nMay I know your age please? :)\n");
    ageCheck = scanf("%d", &age);

    if (ageCheck != 1)
    {
        printf("\nDummy your age cannot be a fractional number!\n :/");
        return 0;
    }

    if (age>=18){
        printf("\nEnjoy your ride!!! :) \n");
    } else {
        printf("Sorry but this ride is for adults!!! :( \n");
    }

        return 0;
}