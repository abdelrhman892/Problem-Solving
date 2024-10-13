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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;  // If list1 is empty, return list2
        if (!list2) return list1;  // If list2 is empty, return list1

        // Create a dummy node to simplify the merging process
        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;

        // Traverse both lists and merge them
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                tail->next = list1;  // Append list1 node
                list1 = list1->next; // Move to the next node in list1
            } else {
                tail->next = list2;  // Append list2 node
                list2 = list2->next; // Move to the next node in list2
            }
            tail = tail->next;  // Move the tail pointer forward
        }

        // Append any remaining nodes from list1 or list2
        if (list1 != nullptr) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        // Return the merged list, skipping the dummy node
        return dummy->next;
    }
};