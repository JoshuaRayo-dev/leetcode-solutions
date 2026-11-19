class Solution:

    def climbStairs(self, n: int) -> int:
        memo = {}
        return self.solve(n, memo)
        
    def solve(self, n: int, memo: dict) -> int:
        if (n <= 2):
            return n
        if n in memo :
            return memo[n]

        ways = self.solve(n - 1, memo) + self.solve(n - 2, memo)

        memo[n] = ways
        return memo[n]
        
        