//Iterator.h

#ifndef ITERATOR_H
#define ITERATOR_H

#include "Node.h" 

//Iterator class allows traversal of a linked list without directly accessing Node*
class Iterator {
private:
    Node* current;                   //Pointer to the current node being accessed
public:
    Iterator(Node* start);          //Constructor tthat starts at the head node

    bool hasNext();            //Returns true if there is another node to visit
    int next();                //Returns current node's data and moves to the next node
};

#endif
