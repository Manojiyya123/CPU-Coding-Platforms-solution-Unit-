/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *c=NULL,*n=NULL;
    while(head!=NULL){
        c=head;
        head=head->next;
        c->next=n;
        n=c;
    }
    return n;
}