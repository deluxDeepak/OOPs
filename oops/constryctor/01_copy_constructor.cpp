#include <iostream>
#include <cstring>
using namespace std;
class student
{
public:
    int age;
    char *name;
    // parameterized constructor
    student(int age, const char *student)
    {
        this->age = age;
        name = new char[strlen(student + 1)];
        strcpy(name, student);
    }

    // copy constructor
    student(const student &obj)
    {
        age = obj.age;
        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);
        cout << "Copy constructor is called." << endl;
    }

    void display()
    {
        cout << "Nme of the student:" << name << endl;
        cout << "Age of the student: " << age << endl;
    }

    // Destructor to free the memory
    ~student()
    {
        cout << "Destrutor called:" << endl;
        delete[] name;
    }
};
int main()
{
    char tempname[100];
    int age = 34;
    cout << "Enter the name of student1:";
    cin.getline(tempname, 100);

    student s1(age, tempname);
    cout << "Student 1 details:" << endl;
    s1.display();
    cout << endl;

    // using the copy constructor
    student s2 = s1;
    cout << "Student details 2(copied)" << endl;
    s2.display();

    return 0;
}