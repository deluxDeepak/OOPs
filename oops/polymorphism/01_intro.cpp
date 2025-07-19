#include <iostream>
using namespace std;

class Animal {
    public:
    virtual void sound() {
       cout<<"Animal makes a sound";
    }
};
class Dog:public Animal {
    void sound() {
        cout<<"Dog barks";
    }
};
int main()
{
    Animal *obj=new Dog();
    obj->sound(); //Dog barks
}