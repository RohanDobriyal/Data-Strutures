#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
    
    int count_nodes(Node* root) {
        if (root == NULL) {
            return 0;
        }
        return count_nodes(root->left) + count_nodes(root->right) + 1;
    }
    int sum_nodes(Node* root) {
        if (root == NULL) {
            return 0;
        }
        return sum_nodes(root->left) + sum_nodes(root->right) + root->data;
    }
};

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    int node_count = root->count_nodes(root);
    cout << "Number of nodes  " << node_count << endl;
    
    int sum_count = root->sum_nodes(root);
    cout << "sum of nodes  " << sum_count << endl;


    return 0;
}
