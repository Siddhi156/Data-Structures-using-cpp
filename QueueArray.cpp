#include <iostream>
using namespace std;

#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

void enqueue()
{
    if(rear==SIZE-1)
    {
        cout<<"Queue Overflow! \n";
        return;
    }
    int value;
    cout<<"Enter value: ";
    cin>>value;
    
    if(front==-1) front=0;
    rear++;
    queue[rear] = value;
    cout<<value<<" "<<"enqueued\n";
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        cout<<"Queue Underflow! \n";
        return;
    }
    cout<<queue[front]<<" "<<"Dequeued \n";
    front++;
}

void display()
{
    if(front==-1 || front>rear)
    {
        cout<<"Queue is empty \n";
        return;
    }
    cout<<"Queue :";
    for(int i=front; i<=rear; i++)
    cout<<queue[i]<<" ";
    cout<<endl;
}

int main()
{
    int choice;
    do{
        cout<<"1.Enqueue"<<endl;
        cout<<"2.Dequeue"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Exit"<<endl;
     
    cout<<"Enter choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
          enqueue();
          break;
        case 2:
          dequeue();
          break;
        case 3:
          display();
          break;
        case 4:
          cout<<"Exiting...\n";
          break;
        default:
        cout<<"Invalid choice";
    }
    }while(choice!=4);
    return 0;
}
