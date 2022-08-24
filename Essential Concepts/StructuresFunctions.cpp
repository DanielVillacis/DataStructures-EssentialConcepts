//
//  StructuresFunctions.cpp
//  Essential Concepts
//
//  Created by Daniel Villacis on 2022-06-23.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Simple code to explain structure and functions

struct Rectangle {
    int length;
    int breadth;
};

// Parameters are called by address, so if any value changes, it will afect the original structure.
void initialize(struct Rectangle *r1, int l, int b) {
    r1->length = l;
    r1->breadth = b;
}

// Since the structure is called by value, it will not change any value of the rect in the main function
int area(struct Rectangle r) {
    return r.length * r.breadth;
}

// Parameters are called by address, so if any value changes, it will afect the original structure.
void changeLength(struct Rectangle *r2, int newL) {
    r2->length = newL;      // Rectangle in main() has a new length
}

int main() {
    struct Rectangle r;

    initialize(&r, 10, 5);
    area(r);
    changeLength(&r, 55);
    
    return 0;
}
