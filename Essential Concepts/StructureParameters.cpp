//
//  StructureParameters.cpp
//  Essential Concepts
//
//  Created by Daniel Villacis on 2022-06-23.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// Structure as parameters :
struct Rectangle {
    int length;
    int breadth;
};

struct Test {
    int A[5];
    int n;
};

// Functions for the rectangle struct :
int area(struct Rectangle r1) {
    // since its called by value it will not change the original values in the main function.
    return r1.length * r1.breadth;
}

void changeLength(struct Rectangle *p, int l) {     // This function is directly pointing to the structure
    // We are changin the length of the structure
    p->length = l;
}

struct Rectangle *funOne() {   // This function returns a new structure of type rectangle.
    struct Rectangle *p;
    p = new Rectangle;      // Structure allocated in heap memory.
    p->length = 15;
    p->breadth = 7;
    return p;               // Address is returned by the function
}


// Functions for the Test struct :
void funTwo(struct Test t1) {
    // since we're passing a struct as parameter
    // even if the struct contains an array,we can pass it by value.
    // Since it's called by value, we can modify our array just like a value passed parameter, with dot operator.
    t1.A[0] = 10;
}


int main() {
    
    struct Rectangle r ={10,5};
    int newLength = 20;
    changeLength(&r, newLength);
    
    struct Rectangle *ptr = funOne();
    cout << ptr->length << ptr->breadth;
    
    
    struct Test t = {{2,4,6,8,10}, 5};
    funTwo(t);
    
    
    return 0;
}
