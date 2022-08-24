//
//  MonolithicProgram.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-06-27.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Easy example of a monolithic program
int main() {
    int lenght=0, breadth=0;    // Caracteristic of a rectangle
    cout <<"Enter length : ";
    cin >> lenght;
    cout << endl << "Enter breadth : ";
    cin >> breadth ;
    
    int area = lenght * breadth;
    int perimeter = 2*(lenght + breadth);
    
    cout << "The area of the rectangle is : " << area << endl;
    cout << "The perimeter of the rectangle is : " << perimeter << endl;
    
    return 0;
}
