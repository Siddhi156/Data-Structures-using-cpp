#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* create(){
    int x;
    cin>>x;

    if(x==-1) return NULL;

    Node* n=new Node();
    n->data=x;

    n->left=create();
    n->right=create();

    return n;
}

void inorder(Node* r){
    if(r){
        inorder(r->left);
        cout<<r->data<<" ";
        inorder(r->right);
    }
}

void preorder(Node* r){
    if(r){
        cout<<r->data<<" ";
        preorder(r->left);
        preorder(r->right);
    }
}

void postorder(Node* r){
    if(r){
        postorder(r->left);
        postorder(r->right);
        cout<<r->data<<" ";
    }
}

int main(){
    Node* root=create();
    int choice;

    cout<<"\n1.Inorder 2.Preorder 3.Postorder\n";
    cin>>choice;

    if(choice==1) inorder(root);
    else if(choice==2) preorder(root);
    else postorder(root);
}