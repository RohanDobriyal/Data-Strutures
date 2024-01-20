#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    
    }
};

void displayList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Solution solution;

    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));

    cout << "Original Linked List: ";
    displayList(head);

    int left = 2, right = 4;
    ListNode* reversed = solution.reverseBetween(head, left, right);
    cout << "Reversed Linked List from " << left << " to " << right << ": ";
    displayList(reversed);
    while (reversed) {
        ListNode* temp = reversed;
        reversed = reversed->next;
        delete temp;
    }

    return 0;
}
