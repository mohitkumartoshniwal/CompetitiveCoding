//https://leetcode.com/problems/merge-two-binary-trees/submissions/

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
    public TreeNode mergeTrees(TreeNode t1, TreeNode t2) {
        if(t1 ==null && t2==null){
            return null;
        }
        if(t1 ==null && t2!=null){
            return t2;
        }
        if(t1 !=null && t2==null){
            return t1;
        }
        
        int value1=t1.val;
        int value2=t2.val;
        
        TreeNode leftTree=mergeTrees(t1.left, t2.left);
        TreeNode rightTree=mergeTrees(t1.right, t2.right);
        
        TreeNode top=new TreeNode(value1+value2);
        top.left=leftTree;
        top.right=rightTree;
        
        return top;
        
    }
}