#ifndef TEST_HPP
#define TEST_HPP
// "Here you can write the code "
//--------------------------------------------------------------------------------
// Macros(No type checking)
// #define SQUARE(X) X*X  //Always use parenthesis to avaoid order-of-operation bugs.

// 1.Function like macros
#define SQUARE(X) ((X) * (X))

// 2.Constant macros
#define Pi 3.14159265358

// 3.Multiline macros  (\ is used for multiliner)
#define PRINT_CODE(X, Y)        \
    cout << "X= " << X << "\n"; \
    cout << "y= " << Y << "\n";

//----------------------------------------------------------------------------------
// Constants (Type checking by the compiler )
const int MAX_SIZE = 56;     // Runtime excecution
constexpr double pi = 3.141; // Compile time execution

//----------------------Fucntion declaration----------------------------------------
void print_welcome_message();
int add(int a, int b);

//--------------------Class declaration(Forward declaration)-------------------------
class forward;

//--------------------Class definition----------------------------------------------
class definition
{
private:
    int lenght;
    int breadht;

public:
    // Constructor baad me define karenge
    definition(int l, int b);
    void area();
    double perimeter();
    void display();
};
#endif // TEST_HPP
