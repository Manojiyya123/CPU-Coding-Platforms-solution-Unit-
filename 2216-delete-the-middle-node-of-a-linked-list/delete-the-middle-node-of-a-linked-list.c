/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return NULL;
    struct ListNode *s = head, *f = head, *p = NULL;
    while (f != NULL && f->next != NULL) {
        p = s;
        s = s->next;
        f = f->next->next;
    }
    p->next = s->next;
    free(s);

    return head;
}