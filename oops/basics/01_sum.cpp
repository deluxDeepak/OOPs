#include <iostream>
using namespace std;

// Sum of two class (data member )
class sumB;
class sumA
{

public:
    int a;
    sumA(int data) : a(data) {};
    friend int sum(sumA &obj1, sumB &obj2);
};

class sumB
{

public:
    int data;
    sumB(int a) : data(a) {};
    friend int sum(sumA &obj1, sumB &obj2);
};
int sum(sumA &obj1, sumB &obj2)
{
    return obj1.a + obj2.data;
}

main()
{
    sumA obj1(90);
    sumB obj2(45);
   cout<< sum(obj1, obj2) <<endl;

    return 0;
}
