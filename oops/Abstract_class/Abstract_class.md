## What is Abstraction in C++?

Abstraction means hiding complex implementation and showing only necessary information to the user.

- The base class only defines the interface; the actual work is done in the derived class.

---

## Abstract Class

An **abstract class** must contain at least one pure virtual function.

---

## Pure Virtual Function

A **pure virtual function** is a function declared in a base class that has no definition in that class and must be overridden in the derived class.  
It is declared by assigning `= 0` in its declaration.

- Only derived classes can override the pure virtual function.
- A class with at least one pure virtual function becomes an abstract class.

```cpp
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};
```

---

## Overriding the Pure Virtual Function

```cpp
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        // Implementation for drawing a circle
    }
};
```
