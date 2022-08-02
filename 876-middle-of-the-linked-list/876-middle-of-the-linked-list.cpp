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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;

    }
    
    // BRUTEFORCE
    
    // int len(ListNode * head){
    //     ListNode* temp=head;
    //     int len=0;
    //     while(temp!=NULL){
    //         temp=temp->next;
    //         len++;
    //     }
    //     return len;
    // }
    // ListNode* middleNode(ListNode* head) {
        
    //     int n=(len(head)/2);
    //     ListNode * ans=head;
    //     while(n--){
    //         ans=ans->next;
    //     }
    //     return ans;
    // }
    
};