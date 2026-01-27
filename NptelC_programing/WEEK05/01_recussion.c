
// Recursive Reversal

// Write a recursive program that inputs a line of characters from the user and outputs the line with the characters reversed. The line may contain blanks. It input ends with EOF (end of file).
// Hint: Use getchar() to read input and check for c != EOF.
// NOTE: You have to use recursion to solve this, and are NOT allowed to use array to store the input!!

// Input
// --------
// A single line of characters.

// Output
// ---------
// The line with the characters reversed.

#include <stdio.h>
int main()
{
    int c = getchar();
    // EOF ki value usually -1 hoti hai.
    // EOF is a macro in C++ defined as -1, commonly used to indicate the end-of-file condition or an error in input/output operations. It is returned by various standard library functions, such as getchar or fgetc, to signal that no more data can be read.

    printf("%d",EOF); //Use to denote the end of file
    if (c == EOF)
    {
        printf("End of input!\n");
    }
    else
    {
        printf("Character read: %d\n", c); //ASCII value print karega 
        printf("Character read: %c\n", c); // Actual char print karega 
        putchar(c);
        
    }
    return 0;
}
