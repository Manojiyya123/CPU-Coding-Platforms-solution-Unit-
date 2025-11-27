/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
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
    if (l) {
        l->next = s;
    } else {
        head = s;   // left = 1 → new head
    }
    f->next=new;
    return head;
}