//Queue.cpp

#include "Queue.h"

//Enqueue adds a node to the end of the list (FIFO)
void Queue::enqueue(int val) {
    Node* newNode = new Node(val);

    if (!tail) {                    //if queue is empty, then both head and tail point to "newNode"
        head = tail = newNode;
    } else {
        tail->next = newNode;        //Attach new node after tail
        tail = newNode;             //Move tail pointer to the newNode
    }
    cout << "Enqueued: "<< val << endl;
}

//Dequeue removes the node at the front (head)
void Queue::dequeue() {
    if (!head) {                    //or if (head == nullptr), then queue is empty
        cout << "Queue is empty!\n";
        return;
    }

    Node* temp = head;
    cout << "Dequeued: " << temp->data << endl;
    head = head->next;             //Moves head to the next node
    
    if (!head) {          //if the (head == nullptr) then the tail should also be null. Resetting tail
        tail = nullptr;
    }

    delete temp;
}

//Display all nodes (front to back)
void Queue::display() {
    Node* temp = head;
    cout << "Queue (Front to Back): ";

    while (temp) {                      //Traverse all nodes
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
