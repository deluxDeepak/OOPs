// POinter to function :Points to the function (function ke adress ko store karta hai jaise normal varible pointer ka adress store karta hai )
#include <iostream>
using namespace std;
// const: a type qualifier is not allowed on a nonmember function
// type qualifier are the keyword use to modify the behavior or access of the varible and function 
const char* ptrfunc() {
    // cout<<"Display new pointer function " <<endl;
    return "New name will display";
}
int main()
{
   const char*message= ptrfunc();
   cout << message;
    
    return 0;
}