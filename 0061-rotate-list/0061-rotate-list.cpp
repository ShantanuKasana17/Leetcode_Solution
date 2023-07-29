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
    ListNode* rotateRight(ListNode* head, int k) {
        // eadge case
        if(head == NULL || head -> next == NULL || k == 0) return head;
        // compute length of ll
        ListNode * curr =  head;
        int len = 1;
        while(curr-> next && ++len){
            curr = curr -> next;
        }
        // go till last node 
        curr -> next = head;
        k = k%len; // if k > len of ll
        k = len - k;
        
        while(k--){
            curr = curr -> next;
        }
        // make node head and break connection
        head = curr -> next;
        curr -> next = NULL;
        
        return head;
        
         
    }
};