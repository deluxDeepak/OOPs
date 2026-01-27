// Write a C program to convert a length given in centimeters into feet and inches.
// Use the following conversions: 1 inch = 2.54 cm, 1 foot = 12 inches, 1 foot = 30.48cm.
// 170 cm = 5 feet 6.93 inches
// 👉 Matlab remaining cm isliye nikalte hain kyunki decimal feet ko seedhe inches me badalne ka sahi tarika yehi hai:
// Pehle pure feet le lo.
// Jo cm bache usse inches bana lo.

#include <stdio.h>
int main()
{
    float digit_centimeter, feet;
    float inches;
    printf("Enter the length in centimeters: ");
    scanf("%f", &digit_centimeter);

    // Conversion
    feet = (int)(digit_centimeter / 30.48); // Get whole feet
    float remaining_cm = digit_centimeter - (feet * 30.48);
    inches = remaining_cm / 2.54;
    printf("%.0f cm = %d feet %.2f inches\n", digit_centimeter, (int)feet, inches);

    return 0;
}