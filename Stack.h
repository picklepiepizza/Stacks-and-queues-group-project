//Stack.h

#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

//Stack inherits from LinkedList (it uses the same 'head' and 'tail' pointers)
class Stack : public LinkedList {
public:
    void push (int val);           //Add new element to the top (head)
    void pop();                    //Remove element from the top
    void display() override;       //Prints all elements from top to bottom

};

#endif
