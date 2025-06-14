#include <iostream>
using namespace std;

// Definition for singly-linked list.
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int value) : val(value), next(nullptr) {}
};

// Linked list utility class
class LinkedList {
public:
    ListNode* head;

    LinkedList() : head(nullptr) {}

    void append(int val) {
        if (!head) {
            head = new ListNode(val);
        } else {
            ListNode* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = new ListNode(val);
        }
    }

    void printList() {
        ListNode* temp = head;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
};

// Solution class
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        while (l1 && l2) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        if (l1) tail->next = l1;
        else tail->next = l2;

        ListNode* result = dummy->next;
        delete dummy; // Free dummy node
        return result;
    }
};

// Main function to handle input/output
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        LinkedList list1, list2;

        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;
            list1.append(val);
        }

        for (int i = 0; i < m; ++i) {
            int val;
            cin >> val;
            list2.append(val);
        }

        Solution solver;
        ListNode* mergedHead = solver.mergeTwoLists(list1.head, list2.head);

        // Print the merged list
        ListNode* curr = mergedHead;
        while (curr) {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    return 0;
}
