#include <iostream>
using namespace std;


int main()
{
    int arr[5] = {2, 5, 6, 2, 1};
    int *ptr = arr;

    cout << "Size of Array is: " << sizeof(arr) << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Address of " << i << " " << &arr[i] << endl;
        cout << "PAdress of " << i << " " << (ptr + i) << endl;
        cout << "Pvalue of " << i << " " << *(ptr + i) << endl;
    }
}