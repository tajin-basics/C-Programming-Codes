/*
Problem Statement:

Write a C program that determines a student's grade based on marks.

Requirements:
1. The program should take marks (0–100) as integer input from the user.
2. The program should accept only valid integer input.
3. If the user enters invalid or fractional input:
   - Print "Invalid input! Please enter a valid integer."

4. If the input is valid:
   - If marks < 0 or marks > 100:
       Print "Marks must be between 0 and 100."

   - Otherwise, determine grade using switch-case based on marks:

       80–100 → Print "Grade: A+"
       70–79  → Print "Grade: A"
       60–69  → Print "Grade: A-"
       50–59  → Print "Grade: B"
       40–49  → Print "Grade: C"
       Below 40 → Print "Grade: F"

5. Use switch-case (not if-else) for grading logic.
*/

#include <stdio.h>

int main()
{

    int marks;
    char nextChar;

    printf("\nMay I know your marks? (0-100):\n");
    int result = scanf("%d%c", &marks, &nextChar);

    if (result != 1 && result != 2)
    {
        printf("\nInvalid input, please check and try again...\n");
        return 0;
    }
    else if (result == 2 && nextChar == '.')
    {
        printf("\nInvalid input, please check and try again...\n");
        return 0;
    }
    if (marks < 0 || marks > 100)
    {
        printf("\nMarks must be between 0 to 100.\n");
    }

    switch (marks / 10)
    {
    case 10:
    case 9:
    case 8:
        printf("\nYour grade is: 'A+'\n");
        break;
    case 7:
        printf("\nYour grade is: 'A'\n");
        break;
    case 6:
        printf("\nYour grade is: 'A-'\n");
        break;
    case 5:
        printf("\nYour grade is: 'B'\n");
        break;
    case 4:
        printf("\nYour grade is: 'C'\n");
        break;

    default:
        printf("\nYour grade is: 'F'\n");
    }

    return 0;
}