//Queue.h

#ifndef QUEUE_H
#define QUEUE_H

#include "LinkedList.h"

//Queue inherits from LinkedList (same head/tail but FIFO order)
class Queue : public LinkedList {
public:
    void enqueue(int val);                //Add new element at the head
    void dequeue();                       //Remove element from the front
    void display() override;             //Prints elements from front to back
};


#endif
