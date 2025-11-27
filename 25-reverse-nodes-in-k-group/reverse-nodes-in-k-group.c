/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* rB(struct ListNode* head, int left, int right) {
    struct ListNode* new=head,*l=NULL,*s=NULL,*c,*f;
    if (head == NULL || left == right) return head;
    int i=1;
    while(i<left) {
        l=new;
        new=new->next;
        i++;
    }
    f=new;
    while(i<=right){
        c=new;
        new=new->next;
        c->next=s;
        s=c;
        i++;
    }
    if (l) 
        l->next = s;
    else
        head = s;
    f->next=new;
    return head;
}
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    int i=0;
    struct ListNode*c= head;
    while(c){
        i++;c=c->next;
    }
    int s=i/k,l=0;
    for(int j=1;j<=s;j++){
        head=rB(head,l+1,l+k);
        l+=k;
    }
    return head;
}
