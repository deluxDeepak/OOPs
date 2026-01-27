// Write a C program to search for the first occurrence of given element in an array.

// Input
// -------
// There will be three lines of input.

// First line contains a positive integer N, representing the number of elements in the array.
// Second line contains the N elements in the array.
// Third line contains K, the element to search for in the array.

// Output
// ----------
// If the element K is in the array, output the index of the array where first occurrence of K is present.
// If K is not found, output -1.

#include <stdio.h>
int main()
{
    int number, K, index = -1;
    int arr[20]; // Assume the size of the array to be fixed

    
    printf("Enter the number of Elements in Array: ");
    scanf("%d", &number);

    printf("Enter %d of number:", number);
    // Input array elements
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter the element to Search: ");
    scanf("%d", &K);

    for (int j = 0; j < number; j++)
    {
        if (arr[j] == K)
        {
            index = j;
            // If element find in this then we will break the looop
            break;
        }
    }

    printf("%d", index);

    return 0;
}