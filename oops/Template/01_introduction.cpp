#include <iostream>
using namespace std;

// Function template.
// we can aslo use class here 
template <class T>
// template <typename T>
T sum(T a, T b)
{
    return a+b;
}
int main()
{
    cout<<sum(34,45);
    return 0;
}