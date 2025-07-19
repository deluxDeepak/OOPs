#include <iostream>
#include <exception>
using namespace std;

// :public exception: Iherit karne ki jarurat nahi hai agr khud ka exception bana rehe hai to 
class custom_exception
{
    public:
    string messages;
    custom_exception(string msg)
    {
        messages=msg;
    }
};

int main()
{
    try
    {
        // custom exception ek constructor hai (constructor me msg pass kar rehe hai string type ka )
        throw custom_exception("New exception ocurred");
    }
    // e as value bhej rehe hai to original class ka copy create hota hai 
    // as a reference bheja better hai 
    catch(const custom_exception e)
    {
        cout <<e.messages <<endl;
    }
    
    return 0;
}