/*
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4

*/
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        
        
        int headval;
        if(l1 == null) return l2;
		if(l2 == null) return l1;
        if(l1.val<l2.val){
            headval=l1.val;
            l1=l1.next;
        }
        else{
            headval=l2.val;
            l2=l2.next;
        }
        ListNode head=new ListNode(headval);
        ListNode current=head;
        
        while(l1!=null && l2!=null){
            if(l1.val<l2.val){
            current.next=l1;
            current=current.next;
            l1=l1.next;
        }
        else{
            current.next=l2;
            current=current.next;
            l2=l2.next;
        }
        }
        
        while(l1!=null){
            current.next=l1;
            current=current.next;
            l1=l1.next;
        }
        while(l2!=null){
            current.next=l2;
            current=current.next;
            l2=l2.next;
        }
        return head;
    }
}