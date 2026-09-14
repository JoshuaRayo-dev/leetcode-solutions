class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 0) return true;

        // removes unnecessary chars with lambda func
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !isalnum(c);
        }), s.end());

        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return tolower(c);
        });

        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            if (s[i] != s[j]) return false;

            ++i;
            --j;
        }

        return true;
    }
};