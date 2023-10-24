class Node:
    def __init__(self,key,value):
        self.key = key
        self.value = value
        self.next = self.prev = None
class LRUCache:

    def __init__(self, capacity: int):
        self.capacity = capacity
        self.cache = {}
        self.head = Node(-1,-1)
        self.tail = Node(-1,-1)
        self.head.next = self.tail
        self.tail.prev = self.head


    def addNode(self,node):
        prev_tail = self.tail.prev
        prev_tail.next = node
        node.prev = prev_tail
        node.next = self.tail
        self.tail.prev = node

    def removeNode(self,node):
        node.prev.next = node.next
        node.next.prev = node.prev
        

    def get(self, key: int) -> int:
        if key not in self.cache: return -1
        node = self.cache[key]
        self.removeNode(node)
        self.addNode(node)
        return node.value
        

    def put(self, key: int, value: int) -> None:
        if key in self.cache:
            old_node = self.cache[key]
            self.removeNode(old_node)
        new_node = Node(key,value)
        self.addNode(new_node)
        self.cache[key] = new_node

        if len(self.cache) > self.capacity:
            node_to_del = self.head.next
            self.removeNode(node_to_del)
            del self.cache[node_to_del.key]

        
    
        


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)