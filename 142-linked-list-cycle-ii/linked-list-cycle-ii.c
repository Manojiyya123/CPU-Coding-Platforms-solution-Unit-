/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *s=head,*f=head;
    while(f!=NULL&&f->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(s==f) break;

    }
    if(f==NULL||f->next==NULL) return NULL;
    s=head;
    while(s !=f){
        s=s->next;
        f=f->next;
    }
    return s;
}