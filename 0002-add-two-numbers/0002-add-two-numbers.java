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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode head = new ListNode(0);
        ListNode temp = head;
        int carry = 0;
        while (l1 != null || l2 != null || carry != 0) {
            int d1 = 0;
            int d2 = 0;
            if (l1 != null) {
                d1 = l1.val;
            }
            if (l2 != null) {
                d2 = l2.val;
            }
            int sum = d1 + d2 + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode newNode = new ListNode(digit);
            temp.next = newNode;
            temp = temp.next;
            if (l1 != null) {
                l1 = l1.next;
            }
            if (l2 != null) {
                l2 = l2.next;
            }
        }
        ListNode res = head.next;
        head.next = null;
        return res;
    }
}