#include <iostream>
using namespace std;

// template with member function outside the class
template <class T1, class T2>
class Student
{
private:
    T1 name;
    T2 age;

public:
    // constructor declaration
    Student(T1 name, T2 age);

    // Function declaration
    T1 display();
    T2 multiply();
};

template <typename T1, typename T2>
Student<T1, T2>::Student(T1 x, T2 Y) : name(x), age(Y){};

template <typename T1, typename T2>
// yehan peche return type of function hai (T1)
T1 Student<T1, T2>::display()
{
    cout << "Name of student is: " << name << endl;
    cout << "Age of student is :" << age << endl;
}

// T2  this declaration has no storage class or type specifier
template <typename T1, typename T2>
T2 Student<T1, T2>::multiply()
{
    return name + age;
}

int main()
{
    Student<string, int> obj1("Deepak", 12);
    obj1.display();

    Student<double, float> obj2(12.4, 12.0);
    cout << "Multiply Result is : " << obj2.multiply() << endl;

    return 0;
}