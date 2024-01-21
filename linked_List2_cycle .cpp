#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
    }
};

int main() {
    Solution solution;
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;  

    ListNode *cycleStart = solution.detectCycle(head);

    if (cycleStart != NULL) {
        cout << "Cycle detected. Starting node value: " << cycleStart->val << endl;
    } else {
        cout << "No cycle detected." << endl;
    }
    while (head) {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
