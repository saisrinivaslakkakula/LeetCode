# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        head = head_track = ListNode(-1,None)
        while list1 and list2:
            if list1.val < list2.val:
                newNode = ListNode(list1.val,None)
                head.next = newNode
                head = head.next
                list1 = list1.next
            elif list2.val < list1.val:
                newNode = ListNode(list2.val,None)
                head.next = newNode
                head = head.next
                list2 = list2.next
            elif list1.val == list2.val:
                newNode1 = ListNode(list1.val,None)
                newNode2 = ListNode(list2.val,None)
                newNode1.next = newNode2
                head.next = newNode1
                head = newNode2
                list2 = list2.next
                list1 = list1.next
                #print(list1.val, list2.val)

        while list1:
            newNode = ListNode(list1.val,None)
            head.next = newNode
            head = head.next
            list1 = list1.next
        while list2:
            newNode = ListNode(list2.val,None)
            head.next = newNode
            head = head.next
            list2 = list2.next
        
        return head_track.next


        