//
//  Functions.cpp
//  Essential Concepts
//
//  Created by Daniel Villacis on 2022-06-20.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Example of a modular function outside the main function of the program with value mechanism parameter passing (parameters won't change in main function)
int add(int a, int b) {
    int c;
    c = a+b;
    return c;
}

// Example of a modular function 2 with "call by address" parameter passing
void Swap1(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Example of a modular function 2 with "call by reference" parameter passing
void Swap2(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}


int main() {
    
    // For the add function
    int num1 = 10, num2 = 15, sum;
    // We call our function add with the 2 parameteres
    sum = add(num1,num2);
    cout<< "The sum of " << num1 << " + " << num2 << " is: " << sum << endl;
    
    // For the swap function
    int a = 10;
    int b = 3;
    Swap1(&a,&b);
    Swap2(a,b);
    
    
    return 0;
}
