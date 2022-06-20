//
//  Pointers.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-06-10.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// Pointers are used to access the address of the cell where a data is stored.
// Pointers are address variables to indirectly access data.
// Pointers are also used to access the ressources outside a program,
// like a memory cell in the heap of the memory for example.
// Pointers are also used to access ressources (access a file, periferals, etc).
// Pointers are also used to pass as parameters.

int main() {
    
    // Pointer to a variable
    int a = 10; // integer variable
    int *p;     // Pointer
    p = &a;
    cout << *p; // This will print the value of the accessed cell, which is a = 10;
    cout << p;  // This will print the hex. address where the pointer is located, such as 0xf135e for example.
    
    // Pointer to an array : This array is created inside the stack of the memory
    int A[5] = {2,4,6,8,10};
    int *q;
    q = A;      // Assigning the pointer to the array
    q = &A[0];  // Assigning the pointer to the first element of the array. Note : {p = &A is valid}
    
    for(int i=0; i<5; i++) {
        cout<<A[i];
        cout<<q[i];
    }
    
    // Pointer to an array : This array is created inside the heap of the memory
    int *d;
    d = new int[5];
    d[0]=10;
    d[1]=15;
    d[2]=21;
    d[3]=14;
    d[4]=31;
    
    for(int i=0; i<5; i++) {
        cout << d[i];   // will print each value of the pointers of the array inside the heap.
    }
    // Since we allocated the extra memory in the heap, we need to delete it after using it (IMPORTANT).
    delete [] p;
    
    return 0;
}

// Pointers can be used anywhere, even with structures
struct Rectangle {
    int lenght;
    int breadth;
};

int pointerOfStructure() {
    int * p1;
    char * p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    cout<< sizeof(p1);
    cout<< sizeof(p2);
    cout<< sizeof(p3);
    cout<< sizeof(p4);
    cout<< sizeof(p5);
    
    // We may think this output will be the size of each data (int = 4bytes, etc.)
    // but in reality, the output will be 8 bytes. Pointers always take the same amount of memory (8 bytes on last c++ compiler)
    // since it's its own data type, pointers are independent of the data type stored inside of them.
    
    return 0;
}


