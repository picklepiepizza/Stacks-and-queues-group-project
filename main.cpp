//MainApp.cpp

#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "Iterator.h"
using namespace std;

int main() {
    Stack stack;
    Queue queue;
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
                stack.push(val);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                cout << "Enter a value to enqueue: ";
                cin >> val;
                queue.enqueue(val);
                break;
            case 4: 
                queue.dequeue();
                break;
            case 5:
                stack.display();
                break;
            case 6: 
                queue.display();
                break;
            case 7: {
                cout << "Iterating through Stack (Top to Bottom): ";
                Iterator it(stack.getHead());
                while (it.hasNext()) {
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
    } while (choice != 9);

    return 0;
}
