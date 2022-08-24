//
//  TemplateClasses.cpp
//  Essential Concepts
//
//  Created by Daniel Villacis on 2022-06-27.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Creation of an object class (class that will be converted as a template class)
class Arithmetic {
private:
    int a;
    int b;
    
public:
    Arithmetic(int a, int b);
    int add();
    int sub();
};

Arithmetic::Arithmetic(int a, int b) {
    this->a = a;        // Pointers to the object attribute
    this->b = b;
}

int Arithmetic::add() {
    int c = a+b;
    return c;
}

int Arithmetic::sub() {
    int c = a-b;
    return c;
}


// Creation of the same class but as a template class (Generic class).
// Template classes helps us to not define a starting data type in our classes.
// Data types of variables will be defined in our main function.
// Template classes are useful for reuse code.
template<class T>
class Arithmetics {
private:
    T a;
    T b;
    
public:
    Arithmetics(T a, T b);
    T add();
    T sub();
};

template<class T>
Arithmetics<T>::Arithmetics(T a, T b) {
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetics<T>::add() {               // Returns a data of type T.
    T c;
    c = a + b;
    return c;
}

template<class T>
T Arithmetics<T>::sub() {
    T c;
    c = a - b;
    return c;
}

int main() {
    Arithmetics<int> ar(10,5);          // Using the template class with integers.
    cout << ar.add() << ar.sub();
    
    Arithmetics<float> ar1(1.5, 3.2);   // Using the same template class with float numbers.
    cout << ar1.add() << ar1.sub();
    
    return 0;
}
