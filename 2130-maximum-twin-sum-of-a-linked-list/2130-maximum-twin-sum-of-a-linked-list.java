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
    public int pairSum(ListNode head) {
        ListNode slow=head;
        ListNode fast=head;

        while(fast!= null && fast.next!=null){
            slow= slow.next;
            fast= fast.next.next;
        }
        ListNode prev= null;
        ListNode curr= slow;
        while (curr != null) {
            ListNode nextNode = curr.next;
            curr.next = prev;
            prev = curr;
            curr = nextNode;
        }
        ListNode first= head;
        ListNode sec= prev;
        int maxsum= Integer.MIN_VALUE;

        while(sec!=null){
            int sum= first.val+sec.val;
            if(sum>maxsum){
                maxsum= sum;
            }
            first= first.next;
            sec= sec.next;
        }
    return maxsum;
    }
}