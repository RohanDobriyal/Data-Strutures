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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(); 
        ListNode *temp = dummy; 
        int carry = 0;
        while ((l1 != NULL || l2 != NULL) || carry) {
            int sum = 0; 
            if (l1 != NULL) {
                sum += l1->val; 
                l1 = l1->next; 
            }
            
            if (l2 != NULL) {
                sum += l2->val; 
                l2 = l2->next; 
            }
            
            sum += carry; 
            carry = sum / 10; 
            ListNode *node = new ListNode(sum % 10); 
            temp->next = node; 
            temp = temp->next; 
        }
        return dummy->next; 
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

    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

    cout << "List 1: ";
    displayList(l1);

    cout << "List 2: ";
    displayList(l2);

    ListNode* result = solution.addTwoNumbers(l1, l2);

    cout << "Sum List: ";
    displayList(result);

    while (l1) {
        ListNode* temp = l1;
        l1 = l1->next;
        delete temp;
    }

    while (l2) {
        ListNode* temp = l2;
        l2 = l2->next;
        delete temp;
    }

    while (result) {
        ListNode* temp = result;
        result = result->next;
        delete temp;
    }

    return 0;
}
