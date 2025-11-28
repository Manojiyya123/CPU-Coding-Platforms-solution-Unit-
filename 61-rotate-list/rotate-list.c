/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode* c=head,*p=head;

    if(head==NULL||head->next==NULL||k==0) return head;
    int s=0;
    while(p!=NULL) {
        p=p->next;s++;
    }
    if(k>=s)
    k=k%s;
    for(int i=0;i<k;i++){
        while(c->next!=NULL) 
        {   p=c;
            c=c->next;
        }  
        p->next=NULL;
        c->next=head;
        head=c;   
    }
    return head;
}