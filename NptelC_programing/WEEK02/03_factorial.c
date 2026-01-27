// Write a C program that reads a positive number N (less than 8) and print its factorial.
// Factorial of a number N is defined as  N!=1×2×…N
// .
#include <stdio.h>
int main()
{
    int number;
    printf("Enter Positive Number (Less than 8): ");
    scanf("%d", &number);

    // Input validation
    if (number < 0)
    {
        printf("Error: Please enter a positive number!\n");
        return 1;
    }
    if (number >= 8)
    {
        printf("Error: Number should be less than 8 to avoid overflow!\n");
        return 1;
    }

    int fact = 1; // 0!=1

    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is: %d\n", number, fact);

    return 0;
}