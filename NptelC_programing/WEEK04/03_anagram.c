// Given two strings(character arrays), write a C Program to check if one of them is an anagram of the other.
// An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, using all the original letters exactly once.
// Examples are LISTEN and SILENT , KNEE and KEEN.
// Input
// ---------
// The first line contains the size of the character array.
// The second line contains the contents of first array.
// The third line contains the contents of the second array.
// Output
// -----------
// 1 If the contents of the arrays are anagrams 0 If the contents of the arrays are not anagrams.
// Note : The sizes of the both the arrays can be assumed to be the same.

// The maximum size of the character array can be assumed to be 20.
// The contents of both arrays are only upper case alphabets.

#include <stdio.h>
int main()
{
    char str1[21], str2[21];
    int size; // Changed from char to int
    int count1[26] = {0}, count2[26] = {0};
    printf("Enter the size of the caracter Array: ");
    scanf("%d", &size);

    // Input two strings
    scanf("%s", str1);
    scanf("%s", str2);

    // Count the frequency of each character
    for (int i = 0; i < size; i++)
    {
        count1[str1[i] - 'A']++;
        count2[str2[i] - 'A']++;
    }

    // Compare frequency arrays
    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            printf("0\n"); // Print 0 for not anagram
            return 0;
        }
    }
    printf("1\n"); // Print 1 for anagram
    return 1;
}