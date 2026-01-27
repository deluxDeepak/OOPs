// Count Distinct Elements in a Sorted Sequenc
// You are given a non-decreasing sorted sequence of non-negative integers, ending with -1. That is, if the  sequence is a1,a2,…an,−1.
//   , then
// ai≤ai+1
//  for all i from 1 to n-1. You can assume that are at least two numbers before the ending -1.

// You have to output the number of distinct elements in the sorted sequence (excluding the -1).
// A sequence of non-negative integers in non-decreasing order, terminated by -1.
#include <stdio.h>
int main()
{
    int prev = -1; // Overrite this value
    int count = 0;
    int curr; // Jo abhi digit hai
    while (1)
    {
        scanf("%d ", &curr);
        if (curr == -1)
            break;
        if (curr != prev)
        {
            prev = curr;
            count += 1;
        }
    }
    printf("Count %d", count);

    return 0;
}