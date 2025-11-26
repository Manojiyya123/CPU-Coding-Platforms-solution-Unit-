/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int v) {
    struct ListNode* s=head,*p=NULL;
    while(s!=NULL){
       if( s->val==v){
        if(p==NULL)
            head=s->next;
        else
            p->next=s->next;
        s=s->next;
       }
       else {
        p=s;
        s=s->next;
       }
    }
    return head;
}