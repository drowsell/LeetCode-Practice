/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* mP = nullptr;
        ListNode* l1P = l1;
        ListNode* l2P = l2;
        ListNode* head = nullptr;
        
        if(l1P == nullptr && l2P == nullptr)
        {
            return head;
        }
        else if(l1P == nullptr)
        {
            mP = l2P;
            l2P = l2P->next;
        }
        else if(l2P == nullptr)
        {
            mP = l1P;
            l1P = l1P->next;
        }
        else if(l1P->val <= l2P->val || l2P == nullptr)
        {
            mP = l1P;
            l1P = l1P->next;
        }
        else if(l2P->val < l1P->val || l1P == nullptr)
        {
            mP = l2P;
            l2P = l2P->next;
        }
        
        head = mP;
        
        while(true)
        {
            if(l1P == nullptr && l2P == nullptr)
            {
                break;
            }
            else if(l1P == nullptr)
            {
                mP->next = l2P;
                l2P = l2P->next;
            }
            else if(l2P == nullptr)
            {
                mP->next = l1P;
                l1P = l1P->next;
            }
            else if(l1P->val <= l2P->val)
            {
                mP->next = l1P;
