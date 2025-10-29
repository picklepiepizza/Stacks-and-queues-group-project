//LinkedList.h

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList {
protected:
    Node* head;
    Node* tail;

public:
    LinkedList();
    
    virtual ~LinkedList();

    virtual void display() = 0;       //Pure virtual
    Node* getHead() const { return head; }
};

#endif
