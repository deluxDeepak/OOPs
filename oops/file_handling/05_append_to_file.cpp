#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main()
{
    string name;
    int roll_no;
    ofstream student_open("student.txt",ios::app);

    
    cout << "Enter the name of the student:";
    getline(cin, name);
    cout << "Enter the roll number:";
    cin >> roll_no;

    if (student_open.is_open())
    {
        student_open << "Name:" << name << endl;
        student_open << "Roll number:" << roll_no << endl;
        student_open << "---------------------------------------" <<endl;
        cout << "Data wrriten successfully.." << endl;
        student_open.close();
    }
    else
    {
        cout << "Error in opening the file.." << endl;
    }

    // student

    return 0;
}