#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32]; // max 32 bits
    int index = 0;

    while (n > 0) {
        binary[index] = n % 2;  // remainder nikala (0 or 1)
        n = n / 2;              // quotient update   (quotient se divide karenge )
        index++;
    }

    // reverse order me remainder ko print karnege 
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num = 13;
    printf("%d in binary = ", num);
    decimalToBinary(num);
    return 0;
}
