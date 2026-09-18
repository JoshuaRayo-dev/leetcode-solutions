class Solution {
public:
    int reverse(int x) {
        bool neg = false;
        if (x < 0) {
            if (x == INT_MIN) return 0;
            
            neg = true;
            x *= -1;
        };

        long new_x = 0;
        while (x) {
            int mod = x % 10;
            x /= 10;
            new_x += mod;

            if (x) new_x *= 10;

            if (new_x >= INT_MAX) return 0;
        }

        if (neg) new_x *= -1;

        return new_x;
    }
};