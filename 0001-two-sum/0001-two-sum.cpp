class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        hashMap.reserve(nums.size());
        
        for (int i = 0; i < nums.size(); ++i) {
            int x = nums[i];
            int y = target - x;
            auto it = hashMap.find(y);

            if (it != hashMap.end()) {
                return {i, it->second};
            }

            hashMap[x] = i;
        }

        return {};
    }
};