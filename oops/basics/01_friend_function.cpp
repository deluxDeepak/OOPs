#include <iostream>
using namespace std;

class student
{
private:
    int data;
    string name;

public:
    student(int data, string name)
    {
        this->data = data;
        this->name = name;
    }
    friend void display(student &obj);
};
void display(student &obj1)
{
    cout << "Name: " << obj1.name << endl;
    cout << "Data: " << obj1.data << endl;
}
int main()
{
    student obj(01, "Deepak");
    display(obj);

    return 0;
}