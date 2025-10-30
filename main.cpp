//MainApp.cpp

#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "Iterator.h"
using namespace std;

int main() {
    Stack stack;          //Created a stack object
    Queue queue;          //Created a queue object
    int choice, val; 

    do {
        cout << "\n========== Menu ==========\n" 
            << "1. Push to Stack\n"
            << "2. Pop from Stack\n"
            << "3. Enqueue to Queue\n"
            << "4. Dequeue from Queue\n"
            << "5. Display Stack\n"
            << "6. Display Queue\n"
            << "7. Iterate Stack\n"
            << "8. Iterate Queue\n"
            << "9. Exit\n"
            << "==========================" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                stack.push(val);             //Adds val to the top of the stack
                break;
            case 2: 
                stack.pop();                 //Removes top value from stack
                break;
            case 3:
                cout << "Enter a value to enqueue: ";
                cin >> val;
                queue.enqueue(val);          //Add value to end of queue
                break;
            case 4: 
                queue.dequeue();            //Remove fron value from queue
                break;
            case 5:
                stack.display();            //Shows contents of stack
                break;
            case 6: 
                queue.display();            //Shows contents of queue
                break;
            case 7: {                                 //Added braces to create the local scope for the "it" variable
                cout << "Iterating through Stack (Top to Bottom): ";

                Iterator it(stack.getHead());      //Iterator starts at head

                while (it.hasNext()) {          //While iterator has not reached "nullptr", there are still more nodes to visit
                    cout << it.next() << " ";
                }
            }
                cout << endl;
                break;
            case 8: {
                cout << "Iterating through Queue (Front to Back): ";
                Iterator it(queue.getHead());
                while (it.hasNext()) {
                    cout << it.next() << " ";
                }
            }
                cout << endl;
                break;
            case 9:
                cout << "Exiting......\n";
                break;
            default:
                cout << "Invalid Choice!!\n";
        }
    } while (choice != 9);                //Continue untill user exits by entering 9

    return 0;
}
