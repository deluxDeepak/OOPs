#include <iostream>
// #include <map>
#include <bits/stdc++.h>
// It stores key-value pairs in sorted order by keys and does not allow duplicate keys.
using namespace std;
int main()
{
    map<int, string> name;

    // Insert the element
    name[1] = "Deepak";
    name[2] = "Ravan";

    // inserting using insert() function
    name.insert({3, "Rahul"});

    // using empalace function
    name.emplace(5, "ramu");

    // accessing the element of the map
    cout << name[1] << endl;
    cout << name.at(2) << endl;

    // Traversing the element
    for (const auto &entry : name)
    {
        cout << entry.first << ":" << entry.second << "\n";
    }

    return 0;
}