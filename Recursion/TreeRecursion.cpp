//
//  TreeRecursion.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-07-07.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Example of a tree recursion function
void fun(int n) {
    if (n>0) {
        cout<< n;
        fun(n-1);
        fun(n-1);
    }
}

int main() {
    fun(3);     // Output will be 3-2-1-1-2-1-1. Time complexity : O(2^n).
    return 0;
}
