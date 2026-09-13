class Solution {
public:
    int maxArea(vector<int>& height) {
        int accumulated = 0;

        int i = 0;
        int j = height.size() - 1;

        while (i < j) {
            int actual = std::min(height[i], height[j]) * (j - i);
            accumulated = std::max(accumulated, actual);
            if (height[i] < height[j]) {
                ++i;
            } else {
                --j;
            }
        }

        return accumulated;
    }
};