/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *f = head, *s= head, *p = NULL;
    for (int i = 0; i < n - 1; i++)
        s = s->next;
    while (s->next != NULL) {
        p = f;
        f = f->next;
        s = s->next;
    }
    if (p == NULL) {
        p= head->next;
        free(head);
        return p;
    }
    p->next = f->next;
    free(f);

    return head;
}
