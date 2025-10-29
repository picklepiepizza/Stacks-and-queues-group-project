#ifndef NODE_H
#define NODE_H

class Node {
   private:
      Node* node;
      int payload;
   public:
      Node();
      Node* getNext() const;
      int getPayload() const;
      void setNext(Node* next);
      void setPayload(int payload);
};

//This is my version of Node
struct Node {
    int data;
    Node* next;

    Node(int val);   //constructor
    
};

#endif

