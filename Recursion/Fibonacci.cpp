//
//  Fibonacci.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-08-04.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Fibonacci using recursion -> time complexity: O(2^n) as the upperbound complexity. (For fib(5) -> 15 calls)
int F[10];
int fib(int n) {
    if (n <= 1) {
        F[n] = n; // store the value in the array (memorization)
        return n;
    } else {
        if (F[n - 2] == -1)
            F[n - 2] == fib(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] == fib(n - 1);
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
    // return fib(n - 2) + fib(n - 1); // this version of recursive fib has excesive recursion.
    // After our optimization with memorization, fib has a time complexity of omega(n+1) = omega(n).
}

// Fibonacci using iterative method -> time complexity: O(n)
int fibonacci(int n) {
    int t0 = 0;
    int t1 = 1;
    int s = 0;
    for (int i = 2; i <= n; i++) {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int main() {
    for (int i = 0; i < 10; i++) {
        F[i] = -1;
    }
    cout << fib(10);
    cout << fibonacci(10);
    return 0;
}
