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
void insertatfront(node* &head,int val){
    node*n=new node(val);
    n->next=head;
    head=n;

}
node* reversinglinkedlist(node* &head){
    node*prevptr=NULL;
    node*nextptr;
    node*currptr=head;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
return prevptr;
}

void insertatend(node* &head, int val) {

    node* n = new node(val);

    if (head == NULL) {
        head = n;
        return;
    }
    while(temp->next!=0){
        temp=temp->next;
    
    }
    temp->next = n;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* head = NULL;
    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    display(head);
    insertatfront(head,7);
    display(head);
    reversinglinkedlist(head);
    display(head);

    return 0;  
}
