#include <iostream>
#include "test.hpp"
using namespace std;
// Outside the class(main) declare karna parega isko
// Main ke ander define nahi kar sakte hai
definition::definition(int l, int b) : lenght(l), breadht(b) {}

// ----------------------class fucntion---------------------
void definition::area()
{
    cout << "Area of rectangle= " << lenght * breadht << endl;
}

// --------------------.hpp function ----------------------
void print_welcome_message()
{
    cout << "hellow world" << endl;
}
int add(int a, int b)
{
    return a + b;
}

// ----------------------.cpp function---------------------
void show()
{
    cout << "Hellow show" << endl;
}
void area_circle(int r)
{
    cout << "Area= " << Pi * r * r << endl;
}

//------------------------Main --------------------------
int main()
{
    cout << SQUARE(5) << endl;
    PRINT_CODE(23, 56);

    area_circle(5);

    // Object of the class .hpp
    definition obj(45, 55);
    obj.area();

    // Function call ------------------
    print_welcome_message();
    cout << "Sum= " << add(45, 78);

    return 0;
}