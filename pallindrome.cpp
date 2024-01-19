#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertatfront(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}

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

void display(node*& head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool isPalindrome(node*& head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }

    node* slow = head;
    node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }

    slow = reversinglinkedlist(slow);
}
int main() {
    node* head = NULL;
    insertatfront(head, 1);
    insertatfront(head, 2);
    insertatfront(head, 2);
    insertatfront(head, 4);

    cout << "Original Linked List: ";
    display(head);

    if (isPalindrome(head)) {
        cout << "The list is a palindrome." << endl;
    } else {
        cout << "The list is not a palindrome." << endl;
    }

    cout << "Updated Linked List: ";
    display(head);

    return 0;
}
