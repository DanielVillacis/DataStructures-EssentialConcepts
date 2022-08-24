//
//  PointerStructure.cpp
//  Essential Concepts
//
//  Created by Daniel Villacis on 2022-06-20.
//

#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    // Declaring a structure in the heap of the memory
    struct Rectangle * r1;
    r1 = new Rectangle;
    
    // Declaring a structure in the stack of the memory
    Rectangle r2={10,5};
    cout << r2.length <<endl;
    cout << r2.breadth <<endl;
    
    // Declaring a pointer 'p' to the structure:
    Rectangle *p = &r2;
    cout << p->length << endl;
    cout << p->breadth << endl;
    
    return 0;
}
