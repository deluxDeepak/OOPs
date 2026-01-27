#include <stdio.h>

// Read character: c = getchar()
// Check condition: Continue only if character is NOT EOF AND NOT newline
// Recursive call: reverse() - goes deeper
// Print after recursion: putchar(c) - prints in reverse order
void reverse()
{
    int c = getchar();
    if (c != EOF && c != '\n') // Fixed: AND logic instead of OR
    {
        reverse();  // recursive call
        putchar(c); // print after recursion (reverse order)
    }
}
int main()
{
    reverse();
    return 0;
}