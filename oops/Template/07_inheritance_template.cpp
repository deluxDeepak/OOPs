#include <iostream>
using namespace std;

// Inheritance with template
template <class T1, class T2>
class Teacher_base
{
private:
    T1 techer_name;
    T2 time;

public:
    // constructor declaration
    Teacher_base(T1 n, T2 t) : techer_name(n), time(t) {};

    // Function declaration
    void display()
    {
        cout << "The name of the teacher: " << techer_name << endl;
        cout << "Timer perid: " << time << endl;
    }
};

template <class T1, class T2>
class Student_derived : public Teacher_base<T1, T2> // Yehan ye argument dena parega you must provide the template arguments for the base class
{
private:
    T1 student_name;
    T2 roll_number;

public:
    // constructor for derive class
    // Missing Base Class Constructor Call: The derived class's constructor was not calling the base class's constructor to initialize its members.
    // Derived class ke constructor ko call karna prega
    Student_derived(T1 s_name, T2 r_num, T1 t_name, T2 t_time) : Teacher_base<T1, T2>(t_name, t_time), student_name(s_name), roll_number(r_num) {}

    // Function declaration
    T1 display()
    {
        cout << "---Student Details ---" << endl;
        cout << "The name of the Sudent : " << student_name << endl;
        cout << "Roll number of student : " << roll_number << endl;

        cout << "\n---Teacher Details---" << endl;
        Teacher_base<T1, T2>::display();
    }
};
int main()
{
    Student_derived<string, int> student1("Deepak", 23, "Mr verma ", 45);
    student1.display();

    return 0;
}