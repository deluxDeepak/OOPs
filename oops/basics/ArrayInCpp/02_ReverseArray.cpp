// Reverse the arrray
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {45, 7, 22, 8, 99, 66};

    cout << "The total size of the array: " << sizeof(arr) << endl;
    size_t numberElement = sizeof(arr) / sizeof(arr[0]);
    cout << "NUmber of Element in the array: " << numberElement << endl;

    size_t j = numberElement - 1;
    size_t i = 0;
    while (i < j)
    {
        swap(arr[i++], arr[j--]);
    }

    for (int i = 0; i < numberElement; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }

    return 0;
}