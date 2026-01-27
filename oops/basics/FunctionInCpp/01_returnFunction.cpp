#include <iostream>
using namespace std;

int sumTwoNumber(int x, int y)
{
    return x + y;
}

int mulNumbers(int i)
{
    return 2 * i;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int resultTwoNUmber = sumTwoNumber(a, b);
    cout << "The sum of two numbers:" << resultTwoNUmber << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "The Double of " << i << " is : " << mulNumbers(i) << endl;
    }

    return 0;
}