//
//  References.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-06-20.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    
    // Just like pointers are declared with a *, references are declared with an &.
    int a = 10;
    int &r = a;     // Since r is a reference of a, we can call it a or r. r is like an alias of a.
    cout << a << endl << r << endl;
    
    // They are both occupying the same address.
    r++;
    // If we increase r, we also increase (not visible) our variable a.
    
    /* Benefits of using references :
     *  Main benefit of using references are for parameter passing.
     *  We will see them in future code.
     *  References doesn't consume memory.
     
     */
    
    return 0;
}
