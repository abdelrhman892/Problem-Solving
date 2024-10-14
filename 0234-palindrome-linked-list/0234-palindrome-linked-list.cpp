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
    bool isPalindrome(ListNode* head) {
       if (!head) return true;
    
        stack<int> stack;
        ListNode* temp = head;
        while (temp != nullptr){
            stack.push(temp->val);
            temp = temp->next;
        }
        
        temp = head;

        while (temp != nullptr){
            if (temp->val == stack.top()){
                stack.pop();
            } else{
                return false;
            }
            temp = temp->next;
        }
        
        return stack.empty();
    }
};