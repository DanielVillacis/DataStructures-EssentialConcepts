//
//  Classes.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-06-27.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Let's take the code written in StructuresFunctions.cpp and convert it in a c++ class.
class Rectangle {
private:
    int length;
    int breadth;
    
public:
    Rectangle();  // Default constructor.
    Rectangle(int l, int b);
    int area();
    int perimeter();
    int getLength(){        // Accessor of an attribute.
        return length;
    }
    void changeLength(int l){
        length=l;           // Rectangle in main() has a new length.
    }
    ~Rectangle();           // Destructor of the object.
};

Rectangle::Rectangle() {
    length=0;
    breadth=0;
}
Rectangle::Rectangle(int l, int b) {
    length=l;
    breadth=b;
}
int Rectangle::area() {
    return length*breadth;
}
int Rectangle::perimeter() {
    return 2 * (length + breadth);
}
// Since we have not allocated memory in our program, the destructor can be set to its default function by the c++compiler.
// (We can still write its function if needed)
Rectangle::~Rectangle() {}



int main() {
    // In order to access memebers of a class, we must initialize the class object itself with a constructor.
    Rectangle r(10,5);
    
    // We can use its functions with the dot operator :
    // r.initialize(10, 5);    // It's preferable to avoid initialize an object by a function, we must build an object constructor.
    cout << "Area : " << r.area();
    cout << "Perimeter : " << r.perimeter();
    
    r.changeLength(20);
    cout << r.getLength();
    
    return 0;       // Once we get out of the main function, the destructor will be automatically called to delete the object.
}
