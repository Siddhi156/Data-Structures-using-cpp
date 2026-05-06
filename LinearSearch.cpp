#include <iostream>
using namespace std;

int main(){
    int n, arr[100], key, found=0;

    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<"Enter element to search: ";
    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Element found at position "<<i;
            found=1;
            break;
        }
    }

    if(found==0) cout<<"Element not found";
}