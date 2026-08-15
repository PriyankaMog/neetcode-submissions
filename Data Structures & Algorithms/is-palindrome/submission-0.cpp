class Solution {
public:
    bool isPalindrome(string s) {
        string c = "";
        // filter alphanumeric and convert to lowercase
        for (char ch : s) {
            if (isalnum(ch)) {
                c += tolower(ch);
            }
        }
        
        // two-pointer check
        int left = 0, right = c.size() - 1;
        while (left < right) {
            if (c[left] != c[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};