class Solution:
    def rob(self, nums: list[int]) -> int:
        n = 0
        memo = {}
        def solve(n: int) -> int:
            if (n >= len(nums)):
                return 0
            if n in memo:
                return memo[n]
            
            take = nums[n] + solve(n + 2)
            not_take = solve(n + 1)

            memo[n] = max(take, not_take)
            return  memo[n]
        
        return solve(0)
        