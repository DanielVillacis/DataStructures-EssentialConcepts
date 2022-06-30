//
//  TimeSpaceComplexity.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-06-30.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int sum(int A[], int n) {
    int s=0;
    for(int i=0; i<n; i++) {
        s = s+A[i];
    }
    return s;
}

void add(int n) {
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
           // C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void swap(int x, int y) {
    int t;
    t = x;
    x = y;
    y = t;
}
