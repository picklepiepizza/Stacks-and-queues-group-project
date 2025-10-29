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

void Stack::pop() {
    if (!head) {     
        cout << "Stack is empty!\n";
        return;
    }

    Node* temp = head;
    cout << "Popped: " << temp->data << endl;
    head = head->next;
    delete temp;

    if (!head) {
        tail = nullptr;
    }
}

void Stack::display() {
    cout << "Stack (Top to Bottom): ";
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
