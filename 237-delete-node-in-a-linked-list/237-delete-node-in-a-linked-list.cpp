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
    // BRUTE FORCE we can run a while loop and copy next element value in current node O(n)
//     OPTIMISED we can just copy next node value and point current node to next of next node O(1)
    void deleteNode(ListNode* node) {
        ListNode* temp=node->next;
        node->val=temp->val;
        node->next=temp->next;
    }
};