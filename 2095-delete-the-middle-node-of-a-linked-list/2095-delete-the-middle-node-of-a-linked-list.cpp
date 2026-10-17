/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getSize(ListNode* head) {
        ListNode* curr = head;
        int size = 0;

        while (curr != nullptr) {
            size++;
            curr = curr->next;
        }

        return size;
    }

    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        int x = getSize(head) / 2;

        ListNode* temp = head;
        ListNode* prev = nullptr;

        for (int i = 0; i < x; i++) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
        delete temp;

        return head;
    }
};