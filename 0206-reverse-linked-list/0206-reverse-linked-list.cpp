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
    ListNode* reverseList(ListNode* head) {
        ListNode * prev_p = NULL;
        ListNode * curr_p = head;
        ListNode * next_p;
        
        while(curr_p)
        {
            next_p = curr_p -> next; // immediate next of curr pointer
            curr_p -> next = prev_p; // curr pointer next stores address of prev pointer
            
            prev_p = curr_p; // move prev pointer to curr pointer
            curr_p = next_p; // move curr pointer to next 
            
        }
        head = prev_p; // moe head to prev pointer
        return head;  // return head 
    }
};