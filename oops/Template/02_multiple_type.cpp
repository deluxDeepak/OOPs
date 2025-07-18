#include <iostream>
using namespace std;
template <typename T1,typename T2>

T1 print_data(T1 name, T2 age)
{
    cout<<"Name of the student:"<<name<<endl;
    cout<<"Age of the student:"<<age<<endl;
}
int main()
{
    print_data("Deepak",22);
    print_data("deepak_123","Password");

    return 0;
}