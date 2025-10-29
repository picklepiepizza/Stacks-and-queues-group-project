//Queue.h

#ifndef QUEUE_H
#define QUEUE_H

#include "LinkedList.h"

class Queue : public LinkedList {
public:
    void enqueue(int val);
    void dequeue();
    void display() override;
};


#endif
