class Solution:
    def fib(self, n: int) -> int:
        memo = {}
        return self.dynamic_fib(n, memo)
    
    def dynamic_fib(self, n: int, memo: List(Any)) -> int:
        if (n in memo):
            return memo[n]

        if (n <= 1):
            return n

        fib_n = self.dynamic_fib(n - 1, memo) + self.dynamic_fib(n - 2, memo)
        memo[n] = fib_n
        return fib_n
