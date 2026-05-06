#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* top = NULL;

void push (int value){
    Node* newNode = new Node();
    newNode->data = value;
    
    newNode->next = top;
    top = newNode;

    cout<<"Inserted: "<<value<<endl;
}

void pop(){
    if(top == NULL){
        cout<<"Stack is empty"<<endl;
        return;
    }
    Node* temp = top;
    cout<<"Deleted : "<<top->data<<endl;

    top = top->next;
    delete temp;
}

void display(){
    Node* temp = top;

    if (temp == NULL){
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<"Stack: ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    int choice, value;
    while(true){
        cout<<"\n--- Stack Menu ---"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
           cout<<"Enter value: ";
           cin>>value;
           push(value);
           break;

        case 2:
          pop();
          break;

        case 3:
          display();
          break;
        
        case 4:
          return 0;

        default:
            cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}