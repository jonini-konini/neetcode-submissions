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
    bool hasCycle(ListNode* head) {
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;

        if (head->next == nullptr) {
            return false;
        }
        if (head == nullptr) {
            return false;
        }

        while (ptr1 != nullptr) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next->next;
            if (ptr2 == nullptr) {
                break;
            }
            if (ptr2->next == nullptr) {
                break;
            }
            if (ptr1 == ptr2) {
                return true;
            }
        }
            return false;
    }

};
