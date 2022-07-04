//
//  RecursionTracing.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-07-04.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void fun1(int n) {
    if(n > 0) {    // Time -> 1
        cout << n; // Time -> 1
        fun1(n-1); // Time -> T(n-1)
    }
    // total time : T(n) = T(n-k) + k
}

/*
 The following function is recursive, meaning it calls itself until a condition reaches its limit.
 
                            3 then fun1(2)
                          /
                         /
    This will do fun1(3)-              2 then fun1(1)
                         \           /
                          \         /
                            fun1(2)-              1 then fun1(0)
                                    \           /
                                     \         /
                                       fun1(1)-
                                               \
                                                \
                                                  fun1(0) -> retun bc (n = 0);
 
 Time complexity :
 Since we only go from 'n' to 'n-1' until n>0
 it means our time depends on the number of calls, therefor
 our time complexity is O(n).
 
 */

int main() {
    int x=3;
    fun1(x);
    
    return 0;
}


void fun2(int n) {
    if(n > 0) {
        fun2(n-1);      // Since the function is called before the print statement
        cout << n;      // nothing will be printed yet. Once we reach fun2(0), the control will go back
    }                   // to the previous call and print the output. After that, the program will trace back to the first recursive call
}                       // printing the value of 'n' for each recursive call.

/*
The fun2 program will behave like this :
 
FIRST PART: nothing is printed (no output) but recursion will be performed.
 
                      /
                     /
This will do fun2(3)-
                     \          /
                      \        /
                       fun2(2)-
                               \          /
                                \        /
                                 fun2(1)-
                                         \
                                          \
                                           fun2(0) -> stop because (0 !> 0);
 
 
SECOND PART : Trace back to the first call printing each value of n.
 
 
                       cout<< 3 and stops since all fun2 calls are traced back.
                      /
                     /
This will do fun2(3)-            cout<< 2 then go back to fun2(3)
                     \          /
                      \        /
                       fun2(2)-             cout<< 1 then go back to fun2(2)
                               \          /
                                \        /
                                 fun2(1)-
                                         \
                                          \
                                           fun2(0) -> stop because (0 !> 0);
 

 Time complexity : Since we only go from 'n' to 'n-1' until n>0, our time complexity is O(n).
 
 */


