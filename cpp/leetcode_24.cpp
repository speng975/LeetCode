/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/*
*  1-->2-->3-->4
*  2-->1-->4-->3
*  递归
*/
struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    struct ListNode *p1 = head;
    struct ListNode *p2 = head->next;
    p1->next = swapPairs(p2->next);
    p2->next = p1;
    
    return p2;
}
