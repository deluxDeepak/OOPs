# Why are templates used in C++?

Templates are a fundamental feature of C++ that enable **generic programming**. They allow you to write a single function or class that can work with different data types without having to rewrite the code for each type.

In essence, a template is not a function or a class itself, but rather a **blueprint** or a **guideline** for the compiler. At compile time, the compiler uses this blueprint to generate the specific class or function needed for a particular data type. This process is called **template instantiation**.

## Key Benefits of Using Templates

1.  **Code Reusability:** You write the logic once, and it can be applied to `int`, `float`, `double`, custom classes, or any other data type. This avoids code duplication and makes maintenance easier.

2.  **Type Safety:** Unlike preprocessor macros or `void*` pointers, templates are type-safe. The compiler performs type checking at compile time, catching potential errors before the program runs.

3.  **Performance:** Since the code is generated and optimized by the compiler for each specific type, there is no runtime overhead. A templated function is just as fast as a manually written, type-specific function.

## When to Use Templates?

You should use templates whenever you find yourself writing the same logic for different data types. Common use cases include:

-   **Generic Data Structures:** Containers like `std::vector`, `std::list`, and `std::map` are all implemented using class templates.
-   **Generic Algorithms:** Functions like `std::sort`, `std::max`, and `std::find` are function templates that can operate on different types of containers and data.

---

## Template Examples

### Function Template

Here is a function template `maximum` that can find the larger of two values of any comparable type.

```cpp
#include <iostream>

// Function template to find the maximum of two values
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Call maximum for int
    std::cout << "Max of 3 and 7 is: " << maximum(3, 7) << std::endl;

    // Call maximum for double
    std::cout << "Max of 3.14 and 2.71 is: " << maximum(3.14, 2.71) << std::endl;

    // Call maximum for char
    std::cout << "Max of 'a' and 'z' is: " << maximum('a', 'z') << std::endl;

    return 0;
}
```

### Class Template

Here is a class template `Box` that can store a single item of any type.

```cpp
#include <iostream>
#include <string>

// Class template to store a value of any type
template <typename T>
class Box {
private:
    T value;

public:
    // Constructor
    Box(T val) : value(val) {}

    // Method to get the value
    T getValue() const {
        return value;
    }
};

int main() {
    // Create a Box for an integer
    Box<int> intBox(123);
    std::cout << "Integer value: " << intBox.getValue() << std::endl;

    // Create a Box for a string
    Box<std::string> stringBox("Hello C++");
    std::cout << "String value: " << stringBox.getValue() << std::endl;

    return 0;
}
```