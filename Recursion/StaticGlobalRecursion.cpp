//
//  StaticGlobalRecursion.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-07-06.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int x=0;                // Global variable
int fun(int n) {
    static int x=0;     // Static in scope variable
    if(n>0) {
        x++;
        return fun(n-1) + x;
    }
    return 0;
}


int main() {
    int r = fun(5);
    cout<< r;
    r = fun(5);
    cout<< r;   // Will be different from the first call;
    return 0;
}
