# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        visited = []

        head_ptr = head

        while head_ptr:
            visited.append(head_ptr.val)
            head_ptr = head_ptr.next

        head_ptr = head
        while head_ptr:
            if head_ptr.val == visited[-1]:
                visited.pop()
            else: return False
            head_ptr = head_ptr.next
        
        return True

        