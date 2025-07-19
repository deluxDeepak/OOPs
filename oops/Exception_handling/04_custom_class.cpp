// creating custom classs for the excptiion
#include <iostream>
#include <exception>
using namespace std;

// Created exception is inherit from the exception class 
class Division_by_zero : public exception
{
public:
    // overrinding the what function
    // noexcept :-koi exception nahi dega (ye ensure karega ki koi aur exception nhai dega )
    const char *what() const noexcept override
    {
        return "Divide by zero is not allowed !";
    }
};

// function that throws exception 
void divide()
{
    try
    {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        if(b == 0)
            throw Division_by_zero(); // throwing exception if b is zero
        cout << "Result: " << a / b << endl;
    }

    catch(const Division_by_zero& e)
    {
        cout << e.what() << '\n';
    }
    
}

int main()
{
    // agle time se jis function me error ayega osko try block me rakhna HAI 
    divide(); // calling the function
    return 0;
}