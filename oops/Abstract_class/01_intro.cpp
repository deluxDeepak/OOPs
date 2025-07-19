#include <iostream>
using namespace std;
class make_new{
    public:
    // Ye ho gya pure virtual function (need to be override by the derived class)
    virtual void display()=0;
};
class derived_class:public make_new
{
    public:
    void display() override
    {
        cout<<"Override the display class"<<endl;
    }
};

int main()
{
    // Polymorphism use 
    make_new*obj=new derived_class();
    obj->display();

    return 0;
}