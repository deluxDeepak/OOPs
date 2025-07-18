#include <iostream>
using namespace std;

template <class T>
class student
{
private:
    T name;

public:
    student(T data)
    {
        name = data;
    }
    void display()
    {
        cout << "My name is : " << name << endl;
    }

    // Here need to define the template again
    template <typename funcT>
    void show_age(funcT age)
    {
        cout << "Age :" << age << endl;
    }
};
int main()
{

    student<string> obj1("Deepak");
    obj1.display();

    // Funtion inside the class
    student<int> obj2(12);
    obj2.show_age(34);

    return 0;
}