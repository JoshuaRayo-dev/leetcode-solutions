class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count1;
        unordered_map<char, int> count2;

        for (char c : s) {
            count1[c] += 1;
        }
        for (char c : t) {
            count2[c] += 1;
        }

        return count1 == count2;
    }
};