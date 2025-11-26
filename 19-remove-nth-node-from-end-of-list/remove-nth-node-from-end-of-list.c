/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *s = head, *f = head, *p = NULL;
    for (int i = 0; i < n - 1; i++)
        f = f->next;
    while (f->next != NULL) {
        p = s;
        s = s->next;
        f = f->next;
    }
    if (p == NULL) {
        struct ListNode* new = head->next;
        free(head);
        return new;
    }
    p->next = s->next;
    free(s);

    return head;
}
