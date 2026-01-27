#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    int largestNumber = (a > b) ? a : b;
    printf("Second largest number: %d", largestNumber);

    return 0;
}