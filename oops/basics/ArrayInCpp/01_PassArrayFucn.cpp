// Passing array to a function

#include <iostream>
using namespace std;

void printArray(int arr[10])
{
    for (int i = 0; i < 5; i++)
    {
        arr[i] *= 2;
        cout << arr[i] << endl;
    }
}
int main()
{
    int myArr[5] = {2, 5, 6};
    printArray(myArr);

    // print the origianal array 
    cout<<"Original Array :" <<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<myArr[i] <<endl;
    }
    
    return 0;
}