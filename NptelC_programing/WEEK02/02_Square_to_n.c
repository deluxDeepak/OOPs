// Write a C program that reads a positive number N and prints the squares of numbers from 1 to N.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter positive Number");
    scanf("%d ", &number);
    for (int i = 0; i < number; i++)
    {
        printf("%d sqare is %d\n", i, i * i);
    }

    return 0;
}