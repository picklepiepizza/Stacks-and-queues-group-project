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
}

#endif
