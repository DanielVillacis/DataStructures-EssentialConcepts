//
//  Pointers.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-06-10.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Pointers are used to access the address of the cell where a data is stored.
// Pointers are address variables to indirectly access data.
// Pointers are also used to access the ressources outside a program,
// like a memory cell in the heap of the memory for example.
// Pointers are also used to access ressources (access a file, periferals, etc).
// Pointers are also used to pass as parameters.

int main() {
    
    // Declaring a pointer vs declaring a variable
    int a = 10; // integer variable
    int *p;     // Pointer
    
    p = &a;     // Initializing the pointer : his address will be the cell where a is stored.
    
    cout << a;
    cout << *p; // This will print the value of the accessed cell, which is a = 10;
    cout << p;  // This will print the hex. address where the pointer is located, such as 0xf135e for example.
    
    return 0;
}
