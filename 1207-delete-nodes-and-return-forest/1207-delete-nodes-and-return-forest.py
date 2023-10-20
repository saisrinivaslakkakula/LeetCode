# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def delNodes(self, root: Optional[TreeNode], to_delete: List[int]) -> List[TreeNode]:
        if not root:
            return []
        if not to_delete:
            return root

        ans = []
        del_ = set(to_delete)
        # initial conditions

        def delnodes_helper(node,ans):
            #nonlocal ans
            #print(ans)
            if not node: return None
            if node.val in del_:
                if node.left and node.left.val not in del_: ans.append(node.left)
                if node.right and node.right.val not in del_: ans.append(node.right)
            if node.left != None :
                left = node.left
                #print(left.val)
                if left.val in del_:
                    node.left = None
                    #ans.append(left)
                delnodes_helper(left,ans)
            if node.right != None:
                right = node.right
                #print(right.val)
                if right.val in del_:
                    node.right = None
                    #ans.append(right)
                delnodes_helper(right,ans)

        if root.val in del_:
            if root.left:
                if root.left.val not in del_:
                    ans.append(root.left)
                delnodes_helper(root.left,ans)
                root.left = None
            if root.right:
                if root.right.val not in del_:
                    ans.append(root.right)
                delnodes_helper(root.right,ans)
                root.right= None
        else: 
            ans.append(root)   
            delnodes_helper(root,ans)

        #print("___")
        #for a in ans:
        #    print(a.val)
        return(ans)
                




        