## What is Polymorphism?

Polymorphism means "many forms". It allows objects to behave differently based on their data type or class, even if they share the same interface. In simple terms, the same function or method can show different behaviors at the same time.

---

## Types of Polymorphism

1. **Compile-time Polymorphism**

   - Achieved by **method overloading** or **operator overloading**.
   - Example: Multiple methods with the same name but different parameters.

2. **Runtime Polymorphism**
   - Achieved by **method overriding**.
   - Example: Subclass provides a specific implementation of a method already defined in its superclass.

---

## Examples

### Compile-time Polymorphism (Method Overloading)

```java
class MathOperation {
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
}
```

### Runtime Polymorphism(Method overriding)

```c++
class Animal {
    public:
    virtual void sound() {
       cout<<"Animal makes a sound";
    }
};
class Dog:public Animal {
    void sound() {
        cout<<"Dog barks";
    }
};
int main()
{
    Animal *obj=new Dog();
    obj->sound();
}
```
