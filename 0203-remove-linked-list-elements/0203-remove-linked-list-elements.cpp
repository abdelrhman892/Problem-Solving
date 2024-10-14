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
    ListNode* removeElements(ListNode* head, int val) {
        // Handle the case where the head itself needs to be removed
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        // Initialize the current node pointer
        ListNode* current = head;
        
        // Traverse the list to remove nodes
        while (current != nullptr && current->next != nullptr) {
            if (current->next->val == val) {
                ListNode* del = current->next;
                current->next = current->next->next;  // Skip the node
                delete del;  // Delete the node
            } else {
                current = current->next;  // Move to the next node
            }
        }

        return head;
    }
};