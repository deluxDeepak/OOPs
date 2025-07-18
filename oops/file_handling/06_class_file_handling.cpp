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

    void write_to_file()
    {
        ofstream student_open("student.txt",ios::app);

        if (student_open.is_open())
        {
            student_open << "Name:" << name << endl;
            student_open << "Roll number:" << roll_no << endl;
            student_open << "------------------------------------" << endl;
            cout << "Data wrriten successfully.." << endl;
            student_open.close();
        }
        else
        {
            cout << "Error in opening the file" << endl;
        }
    }

    ~student()
    {
        cout << "Destructor called." << endl;
    }
};
int main()
{
    string name;
    int roll_no;

    cout << "Enter the name of the student:";
    getline(cin, name);
    cout << "Enter the roll number:";
    cin >> roll_no;

    student s1(roll_no, name);
    s1.display();
    s1.write_to_file();

    return 0;
}