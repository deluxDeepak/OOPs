#include <iostream>
using namespace std;

struct student
{
    int age ;
    string name;
    int regNumber;

};

int main()
{
    student s1;
    s1.age=33;
    s1.name="Aatish";
    s1.regNumber=23105126;

    student s2;
    s2.age=30;
    s2.name="Aatif";
    s2.regNumber=23105126;

    // print the details of student 
    cout <<"name "<<s1.name <<" Age "<<s1.age << " reg number: " <<s1.regNumber <<endl;
    cout <<"name "<<s2.name <<" Age "<<s2.age << " reg number: " <<s2.regNumber <<endl;
    return 0;
}