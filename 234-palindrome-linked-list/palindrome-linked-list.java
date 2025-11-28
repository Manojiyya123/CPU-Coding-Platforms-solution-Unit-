/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        if(head==null||head.next==null) return true;
        ListNode s=head,f=head,n=null;
        while(f!=null&&f.next!=null){
            n=s;
            s=s.next;f=f.next.next;
        }
        n.next=null;n=null;
        while(s!=null){
            f=s;
            s=s.next;
            f.next=n;
            n=f;
        }
        while(head!=null){
            if(head.val!=n.val) return false;
            head=head.next;
            n=n.next;
        }
        return true;
    }
}