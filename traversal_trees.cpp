#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

    void preorder(Node *root){
        if(root == NULL){
            return;
        }
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
    void postorder(Node *root){
        if(root == NULL){
            return;
        }
        cout << root->data << " ";
        
        preorder(root->right);
        preorder(root->left);
    }

};

int main(){
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    root->preorder(root);
    cout<<"\n";
    root->postorder(root);
    return 0;
}
