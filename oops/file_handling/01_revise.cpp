#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    // writting into the file
    ofstream file("test.txt");
    file << " Hellow world ! \n";
    file << " Start file handling\n";
    file.close();

    // Reading the data from the file
    ifstream infile("test.txt");
    string line;
    // getline(file,line);
    while (getline(infile, line))
    {
        cout << line << endl;
    }
    infile.close();

    return 0;
}