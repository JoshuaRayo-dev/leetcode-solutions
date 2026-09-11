class Solution {
public:
    int hammingDistance(int x, int y) {
        int distance = 0;
        
        while (x || y) {
            int xor_result = x ^ y;
            x = x >> 1;
            y = y >> 1;
            if (xor_result & 1) ++distance;
        }

        return distance;
    }
};