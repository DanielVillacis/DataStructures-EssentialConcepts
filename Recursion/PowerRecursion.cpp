//
//  PowerRecursion.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-07-11.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Recursive function that calculates the power of a number : m^n.
// Time complexity : O(n)
int power(int m, int n) {
    if (n==0) return 1;
    return power(m, n-1) * m;
}

// Since power calculation can be reduces by half (2^8 == (2^2)^4 == 4^4) and so on, our time complexity can be reduced in some cases
// This reduction can be done only if the power number is even.
// Our faster version will be :
int powerFaster(int m, int n) {
    if (n==0) return 1;
    if (n%2==0) return power(m*m, n/2);
    return m * power(m*m, ((n-1)/2));
}

// Iterative basic version :
int powerIteration(int m, int n) {
    int pow=1;
    int i=0;
    if(n==0) return 1;
    while (i<n) {
        pow = pow * m;
        i++;
    }
    return pow;
}

// Iterative faster version :
int powerFasterIterative(int m, int n) {
    // a faire
    return 0;
}

int main() {
    
    cout<<power(2,9);
    cout<<powerFaster(2,9);
    cout<<powerIteration(2,9);
    cout<<powerFasterIterative(2,9);
    
    return 0;
}
