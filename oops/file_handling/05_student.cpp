#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
class student
{
public:
    int roll_no;
    string name;
    student(int roll_no, string name) : roll_no(roll_no), name(name) {}

    void display()
    {
        cout << "Name of student: " << name << endl;
        cout << "Roll number : " << roll_no << endl;
    }
};
int main()
{
    string name;
    int roll_no;
    ofstream student_open("student.txt");

    // here you can add if the file is open or close
    cout << "Enter the name of the student:";
    getline(cin, name);
    cout << "Enter the roll number:";
    cin >> roll_no;
    student_open << "Name:" << name << endl;
    student_open << "Roll number:" << roll_no << endl;
    cout<<"Data wrriten successfully.." <<endl;
    student_open.close();


    // student

    return 0;
}