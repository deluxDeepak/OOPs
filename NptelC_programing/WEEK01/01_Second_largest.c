#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    // To find the second largest number
    int second;
    // a is second larget number
    // a=2,b=4,c=1
    // a=2,b=1,c=5
    if ((a < b && a > c) || (a > b && a < c))
    {
        second = a;
    }
    // b is second largest
    else if ((b < a && b > c) || (b > a && b < c))
    {
        second = b;
    }
    else
    {
        second = c;
    }

    printf("The second largest number is: %d\n", second);

    return 0;
}