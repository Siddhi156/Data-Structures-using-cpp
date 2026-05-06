#include <iostream>
using namespace std;

int main()
 {
int arr[10] = {2,4,8,10,12};
int size = 5;
int choice, position, value, key;

do{
	cout<<"1. Insertion \n";
	cout<<"2. Deletion \n";
	cout<<"3. Searching \n";
	cout<<"4. Update \n";
	cout<<"5. Display \n";
	cout<<"6. Exit \n";
	cout<<"ENTER YOUR CHOICE :";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"Enter position :";
			cin>>position;
			cout<<"Enter value :";
			cin>>value;
			
			for(int i = size; i > position; i--)
			{
				arr[i] = arr[i-1];
			}
			arr[position] = value;
			size++;
			break;
		
		case 2:
			cout<<"Enter position :";
			cin>>position;
			
			for(int i = position; i< size - 1; i++)
			{
				arr[i] = arr[i+1];
			}
			size--;
			break;
			
		case 3:
			cout<<"Enter value to search :";
			cin>>key;
			
			for(int i =0; i< size; i++)
			{
				if (arr[i] == key)
				{
					cout<<"Element found at index "<<i<<endl;
					break;
				}
			}
			break;
			
		case 4:
			cout<<"Enter Position :";
			cin>>position;
			cout<<"Enter new value :";
			cin>>value;
			
			arr[position] = value;
			break;
			
		case 5:
			cout<<"Elements of array :";
			for(int i = 0; i< size; i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
			break;
			
		case 6:
			cout<<"Exited program.."<<endl;
			break;
			
		default:
			cout<<"Invalid choice..";
	}
}while(choice!=6);
	return 0;
}