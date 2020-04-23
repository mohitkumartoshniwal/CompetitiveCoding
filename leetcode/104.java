//https://leetcode.com/problems/maximum-depth-of-binary-tree/

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
    static int count=0;
        
    public int maxDepth(TreeNode root) {
        
        if(root==null){
            return 0;
        }
        
        int count1=maxDepth(root.left);
        int count2=maxDepth(root.right);
        count=1+Integer.max(count1,count2);
        return count;
        
    }
}