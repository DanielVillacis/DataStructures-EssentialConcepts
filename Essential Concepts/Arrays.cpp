//
//  Arrays.cpp
//  Essential Concepts of Data Structures
//  Created by Daniel Villacis on 2022-06-10.
//

#include <iostream>
using namespace std;

int main() {
    // Arrays Basics :
    // This is a declaration of an Array that can contain 5 elements (0 to 4).
    // Each cell will contain an integer, if each integer is 2 bytes then the array will be 10 bytes.
    // FYI : integers on the latest compilers take 4 bytes of space.
    int A[5];
    
    
    // To store values into the array :
    A[0] = 27;
    A[1] = 10;
    A[2] = 22;
    A[3] = 8;
    A[4] = 15;
    
    
    // To initialize an array :
    int B[5] = {2,4,6,8,10};
    
    
    // To print elements of an array :
    // We print elements of an array using a loop that will traverse each element of the array.
    // The loop will print an element before each iteration.
    cout <<"The array B is : " << "{ ";
    for(int i=0; i<5; i++){
        cout<< B[i] << " "; // Prints each element of array B
    }
    cout << "}" << endl;
    
    cout <<"The array A is : " << "{ ";
    for(int i=0; i<5; i++){
        cout<< A[i] << " "; // Prints each element of array B
    }
    cout << "}" << endl;
    
    for(int x : A) {
        cout << x << " "; // This is another easier way to print elements in an array.
    }
    
    
    // Tip to see the size (bytes) of the array:
    cout <<"The syze of the array A in bytes is : " << sizeof(A) << " bytes.";
    
    cout<<endl<<endl;
    return 0;
}
