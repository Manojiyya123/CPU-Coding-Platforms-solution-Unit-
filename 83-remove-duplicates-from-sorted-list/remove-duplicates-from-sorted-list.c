/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* p=NULL,*s=head;
    while(s!=NULL&&s->next!=NULL){
        if(s->val==s->next->val){
            if(p==NULL)
                head=s->next;
            else p->next=s->next;
            s=s->next;
        }
        else {
            p=s;
            s=s->next;
        }
    }
    return head;
}