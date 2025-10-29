//Queue.cpp

#include "Queue.h"

void Queue::enqueue(int val) {
    Node* newNode = new Node(val);
    if (!tail) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    cout << "Enqueued: "<< val << endl;
}

void Queue::dequeue() {
    if (!head) {          //or if (head == nullptr), when the queue is empty
        cout << "Queue is empty!\n";
        return;
    }

    Node* temp = head;
    cout << "Dequeued: " << temp->data << endl;
    head = head->next;
    
    if (!head) {          //if the head is equal to null then the tail should also be null
        tail = nullptr;
    }
    delete temp;
}

void Queue::display() {
    Node* temp = head;
    cout << "Queue (Front to Back): ";

    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
