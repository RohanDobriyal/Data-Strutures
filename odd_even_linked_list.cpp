#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;

        while (even != nullptr && even->next != nullptr) {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = evenHead;

        return head;
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
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original Linked List: ";
    displayList(head);

    ListNode* modifiedList = solution.oddEvenList(head);

    cout << "Odd-Even Linked List: ";
    displayList(modifiedList);

    while (modifiedList) {
        ListNode* temp = modifiedList;
        modifiedList = modifiedList->next;
        delete temp;
    }

    return 0;
}
