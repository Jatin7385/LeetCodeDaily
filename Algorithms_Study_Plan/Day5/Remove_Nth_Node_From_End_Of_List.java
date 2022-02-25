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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head.next ==null && n == 1)
        {
            head = null;
            return head;
        }
        int i=0;
        ListNode temp = head;
        ListNode prev = head;
        
        int count = 0;
        while(temp!=null)
        {
            temp = temp.next;
            count++;
        }
        
        if(count == n)
        {
            head = head.next;
            return head;
        }
        
        temp = head;
        while(i<count-n && temp.next!=null)
        {
            temp = temp.next;
            if(i!=0){prev = prev.next;}
            i++;
        }
        prev.next = temp.next;
        return head;
    }
}
