//
//  Structures.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-06-10.
//

#include <iostream>
using namespace std;

// Basic syntax for a structure of a rectangle :
struct Rectangle {
    int length;     // Assuming an integer takes 4 bytes,
    int breadth;    // This structure will take 8 bytes of memory ONCE IT WILL BE USED as a variable.
};

// Structure of a student :
struct Student {
    int roll;
    char name[25];
    char department[10];
    char address[50];
    char phone[10];
};

int main() {
    
    //Declaration of a existant structure (this will occupy space in our memory).
    struct Rectangle r1;            // Declaration
    struct Rectangle r2 = {10,5};   // Declaration + Initializatoin
    
    
    // Access characteristics of the structure :
    // We use the name of our  struct variable + . + characteristic we want to modify
    r1.length = 6;                  // Now lenght will be 6 instead of 15.
    r1.breadth = 10;
    r2.length = 2;
    r2.breadth = 8;
    
    // To print the area of the rectangle we calculate it just as always :
    int area1 = r1.length * r1.breadth;
    int area2 = r2.length * r2.breadth;
    cout << "The area of the rectangle 1 is : " << area1;
    cout << "The area of the rectangle 2 is : " << area2;
    
    
    
    return 0;
}
