#include <iostream>
using namespace std;

template <class T,class Defaultname=double>
Defaultname multiply(T a ,Defaultname b)
{
    return a*b;

}
int main()
{
    cout<< multiply(34,4.45);

    return 0;
}


// The compiler tries to figure out what type T should be based on the arguments you provide:/
// Defaultname multiply(T a ,T b)
// cout<< multiply(34,4.45);
// First argument given is integer and second time it is double (so at one time it will take only one data type )