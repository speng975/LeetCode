/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    struct ListNode *p1 = head;
    struct ListNode *p2 = head->next;
    
    while (p2) {
        if (p1->val == p2->val) {
            p1->next = p2->next;
            p2->next = NULL;
            p2 = p1->next;
        } else {
            if (p2->next == NULL) {
                break;
            }  
            p1 = p2;
            p2 = p2->next;
            
        }
    }
    return head;
}
