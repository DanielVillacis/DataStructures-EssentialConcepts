//
//  PhysicalVsLogical.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-06-28.
//
// In this section, we will cover physical vs logical Data Structures :

/* PHYSICAL DATA STRUCTURES :
 Let's compare two famous data structures : Arrays and linked lists.
 When declaring an array, we usually just state it as int A[5];
 The array declared will be static, meaning that its size will be fixed and cannot be modified.
 Arrays can be created either inside the stack or inside the heap.
 Arrays are used when we know the size of memory we will use in our program, so if you know the size needed to store data
 you can always use an array.
 
 In the other hand, a linked list is a completely dynamic data structure.
 That means that can be resized, increased or reduced.
 As known, linked lists have a head, which is a node pointing to the start of the list.
 The head node pointer is automatically allocated in the stack memory of the cpu,
 which will point to the following nodes allocated in the heap memory of the cpu.
 
 Both Arrays and linked lists are PHYSICAL data structures, they will store the data in the memory.
 */


/* LOGICAL DATA STRUCTURES :
 How can we optimized manipulations of data in physical data structures?
 That's when logical data strucures come in handy.
 
 Main logical data structures :
 - Stack (linear) : LIFO (last in - first out)
 - Queues (linear) : FIFO (first in - first out)
 - Trees (non-linear) : (hierarchy)
 - Graph (non-linear) : (connection and links between nodes)
 - HashTable/HashMaps (tabular)
 
 To implement these data structures, we mainly use physical data structures like the two listed above.
 
 */

// Note to myself : If no code is needed for a topic, maybe use xml?

int main() {
    return 0;
}
