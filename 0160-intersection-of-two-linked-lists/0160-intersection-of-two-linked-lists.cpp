/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while (temp != nullptr){
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Create an unordered set of integers
        std::unordered_set<ListNode*> hashSet;

        while (headA!= nullptr){
            hashSet.insert(headA);
            headA = headA->next;
        }

        while (headB != nullptr){
            if (hashSet.find(headB) != hashSet.end()){
                return headB;
            } else{
                headB = headB->next;
            }
        }
        return nullptr;
    }
};