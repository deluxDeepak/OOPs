#include <iostream>
using namespace std;

// Passing by value
void changeValue(int num)
{
    num = num * 2;
}
// Passing by refrence
void changeValueRefrence(int &num)
{
    num = num * 2;
}
int main()
{
    int num = 6;
    changeValue(num);
    cout << "Before Refrence " << num << endl;
    changeValueRefrence(num);
    cout << "After Refrence " << num << endl;

    return 0;
}