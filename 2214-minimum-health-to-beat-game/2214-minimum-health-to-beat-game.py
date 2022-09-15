class Solution:
    def minimumHealth(self, damage: List[int], armor: int) -> int:
        total_d = sum(damage)
        max_d = max(damage)
        protect = min(max_d,armor)
        return total_d - protect+1
            
        