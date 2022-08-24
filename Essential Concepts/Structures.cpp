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
} s3, s4, s5; // We can also declare our variables inside the structure (global variables)

// Structure of a card :
struct Card {
    int face;
    int shape;
    int color;
};

int main() {
    
    // RECTANGLE STRUCTURE
    // Declaration of a existant structure (this will occupy space in our memory).
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
    
    
    // STUDENT STRUCTURE
    // Following the same steps as the rectangle, we have :
    struct Student s;
    s.roll = 10;
    s.name = "Patrick";
    s.department = "compsci";
    
    
    // CARD STRUCTURE
    struct Card c1;
    c1.face = 1;     // 1 for ace, 11 for J, 12 for Q, 13 for K
    c1.shape = 0;    // 0 for heart, 1 for spade, 2 for diamond, 3 for clover
    c1.color = 0;    // 0 for black cards and 1 for reds
    
    struct Card c2 = {1,0,1};
    
    // Let's say we want a deck of cards :
    // We will create an array of cards (array of a structure)
    struct Card deck[52];
    
    // struct Card deck[52] = {{1,0,0} , {2,0,0} , ....} and so on, but this will take an eternity to type :(
    
    // If we want to access an attribute of a specific card :
    cout << deck[0].face;
    cout << deck[0].shape;
    cout << deck[0].color;
    
    
    return 0;
}
