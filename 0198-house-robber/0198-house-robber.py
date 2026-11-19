class Solution:
    def rob(self, nums: list[int]) -> int:
        memo = {}
        return self.rob_dynamic(nums, 0, memo)
        
    def rob_dynamic(self, nums: list[int], n: int, memo: dict) -> int:
        if (n >= len(nums)):
            return 0

        if (n in memo):
            return memo[n]

        take = nums[n] + self.rob_dynamic(nums, n + 2, memo)
        not_take = self.rob_dynamic(nums, n + 1, memo)

        optimal = max(take, not_take)
        memo[n] = optimal
        return memo[n]
            