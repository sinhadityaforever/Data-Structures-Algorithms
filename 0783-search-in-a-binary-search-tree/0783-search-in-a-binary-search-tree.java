/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private TreeNode solve(TreeNode root, int val){
        if(root==null) return null;
        if(root.val==val) return root;
        TreeNode left = null;
        TreeNode right = null;
        if(root.val > val) left = solve(root.left, val);
        if(root.val < val) right = solve( root.right, val);
        
        if(left!=null) return left;
        if(right!=null) return right;
        return null;
    }
    public TreeNode searchBST(TreeNode root, int val) {
        return solve(root, val);
    }
}