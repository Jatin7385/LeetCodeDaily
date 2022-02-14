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
    public int maxDepth(TreeNode root) 
    {
        if(root ==null) return 0;
	// So we first go till the leaf node, using recursion. While returning, the first value that will be returned is 0.
	// Then we take the max of the return values and add 1 to it(Incrementing the depth).
        return Math.max(maxDepth(root.left),maxDepth(root.right))+1;
    }
}
