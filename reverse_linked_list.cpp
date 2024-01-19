#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor to initialize a node with a given value
    node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to insert a node at the front of the linked list
void insertatfront(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}

// Function to reverse the linked list
node* reversinglinkedlist(node* &head) {
    node* prevptr = NULL;
    node* nextptr;
    node* currptr = head;

    while (currptr != NULL) {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}

// Function to display the linked list
void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    node* head = NULL;

    insertatfront(head, 1);
    insertatfront(head, 2);
    insertatfront(head, 3);

    cout << "Original Linked List: ";
    display(head);

 reversinglinkedlist(head);

    cout << "Reversed Linked List: ";
    display(head);

    return 0;
}
