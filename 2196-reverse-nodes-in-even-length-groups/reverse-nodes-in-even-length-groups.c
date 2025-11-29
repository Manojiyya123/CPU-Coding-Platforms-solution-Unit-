/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* reverseList(struct ListNode * h){
    struct ListNode* n=NULL,*t;
    while(h){
        t=h;
        h=h->next;
        t->next=n;
        n=t;
    }
    return n;
 }
struct ListNode* reverseEvenLengthGroups(struct ListNode* head) {
    struct ListNode* c=head,*s=head,*p=NULL,*t,*r;
    int count=1,i;
    while(c){
        for(i=1;i<count&&c;i++,c=c->next);
        if(c==NULL) i-=1;
        if(i%2==0){
            if(c){
                t=c->next;
                c->next=NULL;
            }
            else t=NULL;
            r=reverseList(s);
            if(p) p->next=r;
            else head=r;
            p=s;
            s=c=t;

        }
        else{
            if(p) p->next=s;
            p=c;
            if(c) s=c=c->next;
        }
        count++;

    } return head;
}
