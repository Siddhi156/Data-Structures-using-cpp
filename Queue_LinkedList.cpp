#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;


void enqueue(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    cout << "Inserted: " << value << endl;
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node* temp = front;
    cout << "Deleted: " << front->data << endl;

    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    delete temp;
}

void display() {
    Node* temp = front;

    if (temp == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Queue: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int choice, value;

    while (true) {
        cout << "\n--- Queue Menu ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}