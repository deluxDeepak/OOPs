#include <iostream>
#include <cstring>
using namespace std;
void student(const char*student)
{
    char*name=new char[strlen(student+1)];
    strcpy(name,student);
    cout<<"Nme of the student is:"<<name;
}

int main()
{
    cout<<"Enter the name of the student:";
    char p[40];
    cin.getline(p,40);
    student(p);
}