//Stack.h

#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

class Stack : public LinkedList {
public:
    void push (int val);
    void pop();
    void display() override;

};

#endif
