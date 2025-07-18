#include <iostream>
using namespace std;
#include <fstream>
int main()
{
    // to open in read mode
    ifstream file_open("01_write.txt",ios::in);
    if (!file_open.is_open())
    {
        cerr << "Error:Opening in file!" << endl;
    }
    else
    {
        string line_read;
        // file_open >> line_read;        // This will read only words
        // cout<<file_read;
        getline(file_open, line_read); // To get whole line including spaces
        cout << line_read;

        // To read the all lines in the file
        // you can use loop
        while (getline(file_open, line_read))
        {
            cout << line_read << endl;      //Read one line at time
        }
    }
    file_open.close();

    return 0;
}