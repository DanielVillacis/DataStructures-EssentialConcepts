//
//  ModularProgram.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-06-27.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int area(int length, int breadth) {
    return length * breadth;
}

int perimeter(int length, int breadth) {
    int p = 2 * (length + breadth);
    return p;
}

int main() {
    int lenght=0, breadth=0;    // Caracteristic of a rectangle
    cout <<"Enter length : ";
    cin >> lenght;
    cout << endl << "Enter breadth : ";
    cin >> breadth ;
    
    int a = area(lenght, breadth);
    int p = perimeter(lenght, breadth);
    
    cout << "The area of the rectangle is : " << a << endl;
    cout << "The perimeter of the rectangle is : " << p << endl;
    
    return 0;
}
