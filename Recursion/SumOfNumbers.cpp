//
//  SumOfNumbers.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-07-08.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Recursive function that calculates the sum of 'N' natural numbers.
// Time and space complexity : O(n).
int sum(int n) {
    if (n==0) return 0;
    return sum(n-1)+n;        // sum(n) = 1+2+3+4+5+6+...+(n-1)+n;
}

// We can also recreate the same function the iterative way :
int sumIterative(int n) {
    int sum=0;
    for (int i=0; i<=n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << sum(5);
    return 0;
}
