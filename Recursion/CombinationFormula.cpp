//
//  CombinationFormula.cpp
//  Essential Concepts
//
//  Created by Daniel Villacis on 2022-08-24.
//
//  Statistical Combination formula (nCr) usign recursion.
//  Mainly used to find the number of possible combinations (subsets) in a list of "objects".
//  Ps: Same options with different positions are not valid (Combinations != permutations).
//  Formula : nCr = n! / r!(n-r)!

#include <stdio.h>
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n==0) return 1;
    return factorial(n-1) * n;
}


int nCr(int n, int r) {
    // Since we need factorial of 'n' and 'r', we can call fac(n).
    int fac_n = factorial(n);           // O(n)
    int fac_r = factorial(r);           // O(n)
    int fact_nr = factorial(n - r);     // O(n)
    return fac_n / (fac_r * fact_nr);   // O(1)
    // This function is not recursive.
}

// We can create a nCr recursive function using Pascal's triangle.
int recursif_ncr(int n, int r) {
    // base stoping case :
    if(n == 0 || n == r)
        return 1;
    return recursif_ncr(n-1, r-1) + recursif_ncr(n-1, r);
}

int main() {
    cout << nCr(4, 2);
    cout << recursif_ncr(4, 2);
    return 0;
}




