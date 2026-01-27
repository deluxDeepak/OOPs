// Write a program that reads N integers one by one and prints the largest among them.
// You can assume that there is atleast one number in the list (N >= 1).
// You must use a loop and if-else statements. Do not use arrays or functions.
#include <stdio.h>
int main()
{
    int number, max, curr;
    // Read the number of input
    scanf("%d", &number);

    // Read the first number and assume it's the maximum
    scanf("%d", &max);
    for (int i = 1; i < number; i++)
    {
        scanf("%d", &curr);
        if (curr > max)
        {
            max = curr;
        }
    }
    printf("%d", max);

    return 0;
}