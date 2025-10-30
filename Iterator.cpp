//Iterator.cpp

#include "Iterator.h"
#include <stdexcept>         //Needed for throwing exceptions

//Constructor initializes iterator to start at the given node (usually being head)
Iterator::Iterator(Node* start) : current(start) {}

//returns "True" if the iterator has not reached the end (null)
bool Iterator::hasNext() {
    return current != nullptr;
}

//Returns current value, then advances pointer to next node
int Iterator::next() {
    if (!current) throw std::out_of_range("No more elements");        //meaning that if (current == null) throw "No more elements"

    int value = current->data;        //Store current data
    current = current->next;         //Move pointer forward
    return value;                    //Return stored value
}
