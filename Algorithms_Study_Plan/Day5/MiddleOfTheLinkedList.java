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
    public ListNode middleNode(ListNode head) {
        if(head.next == null){return head;}
        ListNode p1 = new ListNode();
        ListNode temp = new ListNode();
        int flag = 0;
        ListNode p2 = head;
        int count = 0;
        int i = 0;
        while(p2.next != null)
        {
            count++;
            p2 = p2.next;
        }
        System.out.println(count);
        if(count == 1)
        {
            head = head.next;
            return head;
        }
        int cond = 0;
        if(count%2 == 0)
        {
            cond = count/2;
        }
        else{cond = (count/2)+1;}
        p2 = head;
        while(i!=cond)
        {
            p2 = p2.next;
            i++;
        }
        head = p2;
        return head;
        
    }
}
