//
//  Functions.cpp
//  Essential Concepts
//
//  Created by Daniel Villacis on 2022-06-20.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Example of a function outside the main function of the program
int add(int a, int b) {
    int c;
    c = a+b;
    return c;
}

// Exampke of a function 2
void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    
    int num1 = 10, num2 = 15, sum;
    // We call our function add with the 2 parameteres
    sum = add(num1,num2);
    cout<< "The sum of " << num1 << " + " << num2 << " is: " << sum << endl;
    
    return 0;
}
