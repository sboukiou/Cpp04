# Cpp Module 04

### Created by:
**`    sboukiou  (Said)`**

### `Subtype Polymorphism, Abstract Classes, and Interfaces`

**:wrench:        Check [This section](#Build) on how to compile and test the Module**

## Core Concepts:
### Polymorphism:
**:book: [Polymorphism In General](https://www.geeksforgeeks.org/cpp/cpp-polymorphism)**\
**:book: [Types of Polymorphism(Must READ !)](https://catonmat.net/cpp-polymorphism)**\
**:book: [More about dynamic Polymorphism](https://www.mygreatlearning.com/blog/polymorphism-in-cpp/)**

\
    ***Or in simple terms:***
```
    * Static Polymorphism: Functions/Operators overload during compile time
    * Dynamic Polymorphism: Function override && virtual Functions (C++11)

```
![Chart](./assets/Static-Dynamic-Polymorphism.png)

**:book: [Usage of virtual functions](https://cplusplus.com/doc/tutorial/polymorphism/)**\
**:book: [More about Vf](https://en.cppreference.com/w/cpp/language/virtual.html)**\
**:book: [Child Copy Constructor !](https://softwareengineering.stackexchange.com/questions/337561/c-derived-class-copy-constructor)**\
***Like in this situation , which makeSound() version is called ?***

![Code](./assets/Code.png)


### Deep/Shallow copies | virtual Destruction:
**:book: [Deep and shallow copying](https://www.geeksforgeeks.org/cpp/shallow-copy-and-deep-copy-in-c)**\
**:book: [Virtual destruction](https://stackoverflow.com/questions/461203/when-to-use-virtual-destructors)**\
**:book: [virtuality](https://en.cppreference.com/w/cpp/language/virtual.html)**


```
    ->  Shallow copying in simple terms means two members of the different
        objects having a reference/pointing to the same memeory block
        which may cause ambigiuos behavior/conflicts

    ->  Deep copying is separating by allocation distinct memory
        areas for each member dynamically and handl each separately.

```
![Copying](https://media.geeksforgeeks.org/wp-content/uploads/20240715185835/deep-copy-in-cpp.webp)


### Abstraction:
**:book: [What is an abstract Class ?](https://en.cppreference.com/w/cpp/language/abstract_class.html)**\
**:book: [Pure Virtual Functions and ACs](https://www.geeksforgeeks.org/cpp/pure-virtual-functions-and-abstract-classes/)**\
**:book: [Abstarct Class Constructors?!](https://stackoverflow.com/questions/19808667/c-abstract-class-constructor-yes-or-no)**
**:book: [More !](https://www.ibm.com/docs/en/i/7.5.0?topic=only-abstract-classes-c)**

\
    ***In simple terms:***
```
    * Abstract Classes Have a pure virtual non-class-implemented method
    * And Can't be initialized, serves as a base Class

```


### Interfaces:
**:book: [What is an Interface](https://cpptutor.com/c-interfaces)**

\
    ***In simple terms:***
```Cpp
    /* Interfaces Are Abstract Classes with only pure virtual
    member methods:*/

    class IShape {
        public:
            virtual double area() const = 0; // Pure virtual function
            virtual double perimeter() const = 0; // Pure virtual function
    };

```

## Build
```bash
    cd exN../
    make all
    ./<Executable-Name>
```
