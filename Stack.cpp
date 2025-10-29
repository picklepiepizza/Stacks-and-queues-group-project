//Stack.cpp

#include "Stack.h"

void Stack::push(int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;

    if (!tail) {
        tail = newNode;
    }
    cout << "Pushed: " << val << endl;
}
