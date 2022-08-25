//
//  TowerOfHanoi.cpp
//  Essential Concepts
//
//  Created by Daniel Villacis on 2022-08-24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void TOH(int nb, int A,int B, int C) {
    
    if(nb > 0){
        TOH(nb - 1, A, C, B);
        cout << "Move disk from: " << A << " to " << C << endl;    // Will print the steps to solve the tower of hanoi problem.
        TOH(nb - 1, B, A, C);
    }
}

int main() {
    
    TOH(3, 1, 2, 3);
    
    return 0;
}

