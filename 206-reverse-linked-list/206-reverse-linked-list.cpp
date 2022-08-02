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
     ListNode* reverse(ListNode* head)
      {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* rev= reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return rev;
      }
    ListNode* reverseList(ListNode* head) 
    {
        return reverse(head);
    }
};