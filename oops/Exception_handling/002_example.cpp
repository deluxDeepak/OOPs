#include <iostream>
#include <exception>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";  // taking input from user 
    cin >>a>>b;

    // ye define nahi hona chiye (divided by zero)
    try
    {
        throw "Error: Division by zero is not allowed!"; //Ye line pehle hoga 
        int c=a/b;
        // Agr exception aa jaye to iske neeche code execute nahi hoga 
        cout<<"The division of "<<a<<" by "<<b<<" is "<<c<<endl;
        return 1;
        
    }
    catch(const char* e)
    {
        cout << e << '\n';
    }
    return 0;
}