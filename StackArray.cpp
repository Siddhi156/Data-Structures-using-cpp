#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter stack size: ";
    cin >> size;

    int* stack = new int[size]; 
    int top = -1;

    int choice, val;

    while (true) {
        cout << "\n1.Push 2.Pop 3.Display 4.Exit\n";
        cin >> choice;

        if (choice == 1) {
            if (top == size - 1) {
                cout << "Stack Overflow";
            } else {
                cout << "Enter value: ";
                cin >> val;
                stack[++top] = val;
            }
        }

        else if (choice == 2) {
            if (top == -1) {
                cout << "Stack Underflow";
            } else {
                cout << "Popped: " << stack[top--];
            }
        }

        else if (choice == 3) {
            if (top == -1) {
                cout << "Stack is Empty";
            } else {
                cout << "Stack: ";
                for (int i = top; i >= 0; i--)
                    cout << stack[i] << " ";
            }
        }

        else if (choice == 4) {
            break;
        }

        else {
            cout << "Invalid choice";
        }
    }

    delete[] stack; 
    return 0;
}