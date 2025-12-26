# Cpp Module 04

### Created by:
**`    sboukiou  (Said)`**

#### Subtype Polymorphism, Abstract Classes, and Interfaces

## Core Concepts:
### Polymorphism:
**:book: [Polymorphism In General](https://www.geeksforgeeks.org/cpp/cpp-polymorphism)**\
**:book: [More about dynamic Polymorphism](https://www.mygreatlearning.com/blog/polymorphism-in-cpp/)**
**:book: [Types of Polymorphism(Must READ !)](https://catonmat.net/cpp-polymorphism)**

\
    ***Or in simple terms:***
```
    * Static Polymorphism: Functions/Operators overload during compile time
    * Dynamic Polymorphism: Function override && virtual Functions (C++11)

```
![Chart](./assets/Static-Dynamic-Polymorphism.png)

**:book: [Usage of virtual functions](https://cplusplus.com/doc/tutorial/polymorphism/)**\
**:book: [More about Vf](https://en.cppreference.com/w/cpp/language/virtual.html)**\
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
