#include <stdio.h>

int main()
{
    int a, b, c;
    int largest, second_largest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Method 2: Find largest first, then find second largest

    // Find the largest number
    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    // Find the second largest by comparing remaining two numbers
    if (largest == a)
    {
        // Compare b and c
        second_largest = (b > c) ? b : c;
    }
    else if (largest == b)
    {
        // Compare a and c
        second_largest = (a > c) ? a : c;
    }
    else
    {
        // largest == c, so compare a and b
        second_largest = (a > b) ? a : b;
    }

    printf("The second largest number is: %d\n", second_largest);

    return 0;
}