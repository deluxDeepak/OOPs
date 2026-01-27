#include <iostream>
using namespace std;

int main()
{
    // Add \0 for overflow 
    // or use 
    // char arr[]="Deepak";
    char arr[6] = {'A', 'B', 'C', 'f', 'g','\0'};
    char *ptr = arr;

    // This will all points to the first char 
    cout << "Array value: " << arr << endl;
    cout << "Array adress: " << (void*)arr << endl;

    cout << "Pointer value (string): " << ptr << endl;
    // Cast into void * fitrst 
    cout << "Pointer address: " << (void*)ptr << endl;

    // Print the adress of the all element 
    for (int i = 0; i < 6; i++)
    {
         
         cout << "Pointer address: "<<i <<" " << (void*)(ptr + i) << endl;
    }
    

    return 0;
}
