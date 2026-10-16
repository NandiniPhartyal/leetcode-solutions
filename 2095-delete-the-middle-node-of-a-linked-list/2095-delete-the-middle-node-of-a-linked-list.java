class Solution {
    public int getSize(ListNode head) {
        ListNode curr = head;
        int size = 0;

        while (curr != null) {
            size++;
            curr = curr.next;
        }

        return size;
    }

    public ListNode deleteMiddle(ListNode head) {
        if (head == null || head.next == null) {
            return null;
        }

        int x = getSize(head) / 2;

        ListNode temp = head;
        ListNode prev = null;

        for (int i = 0; i < x; i++) {
            prev = temp;
            temp = temp.next;
        }

        prev.next = temp.next;
        temp = null;

        return head;
    }
}
