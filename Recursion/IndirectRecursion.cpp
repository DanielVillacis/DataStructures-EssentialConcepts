//
//  IndirectRecursion.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-07-07.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void funB(int n);   // Prototype of functionB cause its not defined before funA.
void funA(int n) {
    if(n>0){
        cout<< n;
        funB(n-1);
    }
}

void funB(int n) {
    if(n>1){
        cout<< n;
        funA(n/2);
    }
}

int main() {
    funA(20);       // output : 20-19-9-8-4-3-1;
    return 0;
}
