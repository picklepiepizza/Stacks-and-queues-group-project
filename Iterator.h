//Iterator.h

#ifndef ITERATOR_H
#define ITERATOR_H

#include "Node.h"
#include <stdexcept>

class Iterator {
private:
    Node* current;
public:
    Iterator(Node* start);

    bool hasNext();
    int next();
};

#endif
