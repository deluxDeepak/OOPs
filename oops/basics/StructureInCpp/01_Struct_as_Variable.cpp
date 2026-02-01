#include <iostream>
using namespace std;

// Structure as variable 
struct 
{
    int myNumber;
    string myName;
} myDetails,myFather,myMother;

int main()
{
    myDetails.myName="Deepak";
    myDetails.myNumber=8298;

    // Printing the details of struct 
    cout <<"Name of Student " <<myDetails.myName <<endl;
    cout <<"Student Number " <<myDetails.myNumber <<endl;

    return 0;
}