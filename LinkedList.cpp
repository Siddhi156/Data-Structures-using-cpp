#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head=NULL;

int main(){
    int choice, val;

    while(true){
        cout<<"\n1.Insert 2.Delete 3.Display 4.Exit\n";
        cin>>choice;

        if(choice==1){
            cin>>val;
            Node* temp=new Node();
            temp->data=val;
            temp->next=head;
            head=temp;
        }
        else if(choice==2){
            if(head==NULL) cout<<"Empty";
            else{
                Node* t=head;
                head=head->next;
                delete t;
            }
        }
        else if(choice==3){
            Node* t=head;
            while(t){
                cout<<t->data<<" ";
                t=t->next;
            }
        }
        else break;
    }
}