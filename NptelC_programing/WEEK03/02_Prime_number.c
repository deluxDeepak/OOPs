// Complete the function int is prime(int n) to check if a positive number n is prime or not.
// The function returns 1 if n is prime, and 0 otherwise.
// The function will be used in a program (code given) that prints the prime numbers in a given sequence.

int checkPrime(int n)
{
    // Agar number 1 ya usse chhota hai to prime nahi hota.
    // Example : -5, 0, 1 sab prime nahi hote → 0 return karega.
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
#include <stdio.h>
int main()
{
    // taking n input from the user
    int number, curr;
    printf("Enter number of elements: ");
    scanf("%d", &number);
    printf("Enter %d numbers: ", number);
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &curr);
        if (checkPrime(curr))
        {
            printf("%d ", curr); // Added space for proper formatting
        }
    }
    printf("\n"); // Added newline at the end

    return 0;
}