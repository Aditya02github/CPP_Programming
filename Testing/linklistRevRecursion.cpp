#include <iostream>
using namespace std;


class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int value) : val(value), next(nullptr) {}
};


void append(ListNode*& head, int val) {
    if (!head) {
        head = new ListNode(val);
        return;
    }
    ListNode* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = new ListNode(val);
}


void printReverse(ListNode* head) {
    if (!head) return;
    printReverse(head->next);
    cout << head->val << " ";
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

        printReverse(head);
        cout << endl; 
    }

    return 0;
}
