#include <iostream>
using namespace std;

// fUNCTION TEMPLATE OVERLOADING
// Ye template only ek function tak valid rehega neeche wale function pe nahi jayega
template <typename T>
void show(T name)
{
    cout << " The First name: " << name << endl;
}

// Tempalte yehan bh define karna prega (nahi to errror batata hai )
// void show(T lastname,int size)
// {
//     cout<<"Display the name: "<<name <<endl;
// }
template <typename T>
void show(T lastname,int age)
{
    cout << "The last name:" << lastname << endl;
    cout<<"Age is :"<<age<<endl;
}

int main()
{
    show("Deepak"); //Call the first name (first template  with matching argument )
    show("Kumar",12);
    return 0;
}