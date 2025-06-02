#include <iostream>
using namespace std;


class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int value) : val(value), next(nullptr) {}
};


void append(ListNode*& head, int value) {
    if (!head) {
        head = new ListNode(value);
        return;
    }
    ListNode* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = new ListNode(value);
}


int findMiddle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->val;
}


int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        ListNode* head = nullptr;
        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;
            append(head, val);
        }

        cout << findMiddle(head) << endl;
    }

    return 0;
}
