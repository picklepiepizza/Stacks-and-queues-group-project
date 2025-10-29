//Iterator.cpp

#include "Iterator.h"

Iterator::Iterator(Node* start) : current(start) {}

bool Iterator::hasNext() {
    return current != nullptr;
}

int Iterator::next() {
    if (!current) throw std::out_of_range("No more elements");

    int value = current->data;
    current = current->next;
    return value;
}
