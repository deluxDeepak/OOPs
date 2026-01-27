// Counting the occurrence of an element in an array

// Write a C program to search for number of occurrences of given element in an array.

// Input
// -------
// There will be three lines of input.

// First line contains a positive integer N, representing the number of elements in the array.
// Second line contains the N elements in the array.
// Third line contains K, an integer.

// Output
// ----------
// The number of times K occurs in the array, print 0 if K does not occur at all.

// Note: You can assume that the size of the array is less than 20.

#include <stdio.h>
int main()
{
    int number, count = 0, K;
    int arr[20];
    printf("Enter the number of element in Array: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to Find the OCcurance: ");
    scanf("%d", &K);
    for (int i = 0; i < number; i++)
    {
        if (arr[i] == K)
        {
            count += 1;
        }
    }

    printf("Count = %d", count);

    return 0;
}