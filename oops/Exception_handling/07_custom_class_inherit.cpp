#include <iostream>
#include <exception>
using namespace std;

class custom_inherit : public exception
{
public:
    // function ka signature change kar reha hai
    // Ye actual base class ke what() ko override nahi kar raha, balki ek naya method define kar raha hai.
    // const char *what()
    // {
    //     return "Error:Age is not valid";
    // }
    // const char*what() const noexcept override (ye actual function hai )

    const char *what() const noexcept
    {
        return "Error:Negative Age is not allowed";
    }
};

int main()
{
    try
    {
        int a;
        cout << "Ener the age :";
        cin >> a;
        if (a < 0)
        {
            throw custom_inherit();
        }
        cout << "Valid age" << endl;

        // Custom class ka object bana rehe hai aur osko throw kar rehe hai (custome class constructor nahi  banaya hai )
    }
    catch (const custom_inherit &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}