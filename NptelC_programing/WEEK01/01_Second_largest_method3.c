#include <stdio.h>

int main()
{
    int a, b, c;
    int temp;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Method 3: Simple sorting approach
    // Sort the three numbers in descending order using bubble sort concept

    // Compare a and b
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    // Compare a and c
    if (a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }

    // Compare b and c
    if (b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    // Now a >= b >= c
    printf("The second largest number is: %d\n", b);

    return 0;
}