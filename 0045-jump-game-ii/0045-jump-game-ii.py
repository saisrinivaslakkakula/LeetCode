class Solution:
    def jump(self, nums: List[int]) -> int:
        if len(nums) == 1: return 0
        n_len = len(nums)
        max_track = [0 for m in range(n_len)]

        for i,n in enumerate(nums):
            max_track[i] = min(i+n,n_len-1)
        #print(max_track)

        cur_jump = 0
        max_jump = 0
        jump_count = 0

        for i,n in enumerate(nums):
            if i > cur_jump:
                jump_count+=1
                cur_jump = max_jump
            max_jump = max(max_jump,max_track[i])
        return(jump_count)

        