# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def generateTrees(self, n):
        """
        :type n: int
        :rtype: List[Optional[TreeNode]]
        """
        if n == 0:
            return []

        def build(start, end):
            # Base case: if the range is invalid, return a list with None (empty tree)
            if start > end:
                return [None]
            
            all_trees = []
            
            # Try each value as root
            for i in range(start, end + 1):
                # Recursively build all left and right subtrees
                left_trees = build(start, i - 1)
                right_trees = build(i + 1, end)
                
                # Combine them with root node i
                for l in left_trees:
                    for r in right_trees:
                        root = TreeNode(i)
                        root.left = l
                        root.right = r
                        all_trees.append(root)
            
            return all_trees

        # Generate all unique BSTs from 1 to n
        return build(1, n)
