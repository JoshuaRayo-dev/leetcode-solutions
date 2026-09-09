class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        vector<int> res(2);

        for (int i = 0; i < nums.size(); ++i) {
            hashMap[nums[i]] = i;
            // el mapa guarda [numero, index]
        }

        for (int i = 0; i < nums.size(); ++i) {
            int x = nums[i];
            int y = target - x;

            auto it = hashMap.find(y);

            if (it != hashMap.end() && i != hashMap.at(y)) {
                res[0] = i;
                res[1] = hashMap.at(y);
                break;
            }
        }

        return res;
    }
};