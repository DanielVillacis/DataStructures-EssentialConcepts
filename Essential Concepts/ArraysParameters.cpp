//
//  Parameters.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-06-23.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Arrays as parameters : Arrays (A[]) can only be passed by address, its parameter is a pointer.
void funOne(int *A) { // Or int A[]
    //for(int a:A) {
        //cout<<a<<endl;
    //}
    // This give us an error. Since an Arrays passed by parameter
    // is considered a pointer type, we cannot loop through a pointer
    // The only way to loop through an array passed by parameter is by declaring the size of it
    for(int i=0; i<5; i++) {
        cout<<A[i];
    }
}

// Function 2 : Size of the array passed as parameter (most common way)
void funTwo(int A[ ], int n) {
    for(int i=0; i<n; i++) {
        cout<<A[i];
    }
}

// Function returning an array as a pointer using dynamic memory :
int* funThree(int size) {
    int *p;
    p = new int[size];
    for(int i=0; i<size; i++) {
        p[i] = i+1;
    }
    return p;
}

int main() {
    // Function one :
    int A[] = {2,4,6,8,10};
    cout<< sizeof(A)/sizeof(int); // Print the size of the array.
    funOne(A);
    for(int x:A) {
        cout << x;
    }
    
    // Function two :
    int n = 5;
    funTwo(A, n);
    
    // Function three :
    int *ptr, size=5;
    ptr = funThree(size);
    for(int i=0; i<size; i++){
        cout<<ptr[i]<<endl;
    }
    
    return 0;
}
