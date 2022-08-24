//
//  FactorialNumber.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-07-08.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Recursive function that calculates the factorial of a natural number :
int factorial(int n) {
    if (n==0) return 1;
    return factorial(n-1) * n;
}

// Same factorial function coded by the iterative way :
int factorialIterative(int n) {
    int fact=1;
    for (int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    cout << factorial(3) << endl;
    cout << factorialIterative(3);
    return 0;
}
