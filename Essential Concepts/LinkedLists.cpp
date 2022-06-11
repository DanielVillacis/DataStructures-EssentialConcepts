//
//  LinkedLists.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-06-11.
//

#include <stdio.h>
#include <iostream>
using namespace std;


// Definition for singly-linked list (this is a generic design as leetcode shows, we can also modify it)
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Design a linked list and its basics operations (insertion,deletion)
// A linked list consist of a bunch of nodes connected to each other with pointers.
// We have the following and class for a node :
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val=val;
        next=NULL;
    }
};

// Now we have our node defined, we can implement our linkedlist and its operations :
class MyLinkedList {
public:
    // Initializes the linkedlist
    int size=0;
    Node* head=new Node(0);
    MyLinkedList() {}
    
    // Returns the value of a node searched by its index
    int get(int index) {
        if(index>=size) return -1;
        Node* temp=head->next;
        for(int i=0;i<index;i++) temp=temp->next;
        return temp->val;
    }
    
    // Insertion of a new element at the head of a linkedlist. TC = O(1)
    void addAtHead(int val) {
        Node* temp=head->next;
        head->next=new Node(val);
        head->next->next=temp;
        size++;
    }
    
    // Insertion of a new element at the tail of a linkedlist. TC = O(N)
    void addAtTail(int val) {
        Node* temp=head;
        while(temp->next!=NULL) temp=temp->next;
        temp->next=new Node(val);
        size++;
    }
    
    // Insertion of a new element at the given index of a linkedlist. TC = O(N)
    void addAtIndex(int index, int val) {
        if(index>size) return;
        Node* temp=head;
        for(int i=0;i<index;i++) temp=temp->next;
        Node* temp1=temp->next;
        temp->next=new Node(val);
        temp->next->next=temp1;
        size++;
    }
    
    // Deletion of an element at the given index of a linkedlist. TC = O(N)
    void deleteAtIndex(int index) {
        if(index>=size) return;
        Node* temp=head;
        for(int i=0;i<index;i++) temp=temp->next;
        Node* temp1=temp->next;
        temp->next=temp1->next;
        temp1->next=NULL;
        size--;
        delete temp1;
    }
};

/*
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
