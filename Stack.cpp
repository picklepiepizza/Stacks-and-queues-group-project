//Stack.cpp

#include "Stack.h"

//Push adds a new node at the beginning (LIFO) order
void Stack::push(int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;                        //Move head pointer to new Node (new top)

    if (!tail) {                        //If the list is empty, set tail to this new node
        tail = newNode;
    }
    cout << "Pushed: " << val << endl;
}

//Pop removes the top node (head)
void Stack::pop() {
    if (!head) {                          //if head == nullptr then stack is empty
        cout << "Stack is empty!\n";
        return;
    }

    Node* temp = head;
    cout << "Popped: " << temp->data << endl;
    head = head->next;                        //Moves head pointer to the next node
    delete temp;

    if (!head) {                         //if the stack is now empty, reset tail as well
        tail = nullptr;
    }
}

//Display all nodes (top to bottom)
void Stack::display() {
    cout << "Stack (Top to Bottom): ";
    Node* temp = head;

    while (temp) {                   //Traverse until end (nullptr) is reached
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
