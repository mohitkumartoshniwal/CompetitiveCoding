//https://leetcode.com/problems/reverse-linked-list/

//https://leetcode.com/problems/reverse-linked-list/discuss/58125/In-place-iterative-and-recursive-Java-solution

//https://www.youtube.com/watch?v=O0By4Zq0OFc

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode prevHead=null;
        while(head!=null){
            ListNode nextRecord =head.next;
            head.next=prevHead;
            prevHead=head;
            head=nextRecord;
        }
        return prevHead;
    }
}