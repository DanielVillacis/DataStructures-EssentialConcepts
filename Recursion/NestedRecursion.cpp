//
//  NestedRecursion.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-07-07.
//
#include <stdio.h>
#include <iostream>
using namespace std;

int fun(int n) {
    if(n>100) return n-10;
    return fun(fun(n+11));
}

int main() {
    int r;
    r=fun(95);
    cout<< r;
    return 0;
}
