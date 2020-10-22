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
        int carry =0;
        ListNode head=null;
        ListNode current = null;
        while(l1!=null ||l2!=null){
            int l1Val = l1==null?0:l1.val;
            int l2Val = l2==null?0:l2.val;
            int sumValue = l1Val + l2Val + carry;
            if(head==null){
                head=current = new ListNode();
                current.val = sumValue%10;
                current.next = null;
            }else{
                ListNode newNode = new ListNode();
                newNode.val = sumValue%10;
                newNode.next = null;
                current.next = newNode;
                current = current.next;
            }
            carry = sumValue/10;
            l1 = l1==null?l1:l1.next;
            l2 = l2==null?l2:l2.next;
        }

        if(carry>0){
            ListNode temp = new ListNode();
            temp.val = carry;
            temp.next = null;
            current.next = temp;
        }
        return head;
    }
}