//https://leetcode.com/problems/range-sum-of-bst/

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public int rangeSumBST(TreeNode root, int L, int R) {
        if(root==null){
            return 0;
        }
        int sum=0;
        if(root.val>=L && root.val<=R){
            sum+= root.val;
        }
        
        int ans1=rangeSumBST(root.left,L,R);
        int ans2=rangeSumBST(root.right,L,R);
        
        sum+=ans1+ans2;
        return sum;
        
    }
}