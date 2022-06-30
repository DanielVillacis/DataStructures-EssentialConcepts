//
//  StaticVsDynamic.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-06-27.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Coming soon
// These functions are created in the stack of the memory static:
void fun1(int i) {
    int a;
    // ...
}

void fun2() {
    int x;
    fun1(x);
}


int main() {
    int a=2;
    float b=2.5;
    
    fun1(a);
    
    return 0;
}


// Heap memory or dynamic memory : It should be treated as a ressource.
// When required, use the memory. When not required, delete it.
// To access memory inside the heap, the usage of pointers is required.
void otherMain() {
    int *p;             // Creates a pointer in the stack memory,where a pointer of integer (8 bytes) will be created
    p = new int[5];     // Creates a pointer to the heap memory, where an array of size 5 will be created.
    // once we used the memory, we must release it :
    delete []p;
    p = NULL;
    
}
