class Solution {
public:
    // Encode a list of strings to a single string
    string encode(vector<string>& strs) {
        string encoded;
        for (auto &s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }
        return encoded;
    }

    // Decode a single string back to a list of strings
    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.size()) {
            // find the delimiter '#'
            int j = i;
            while (s[j] != '#') j++;
            int length = stoi(s.substr(i, j - i));
            string word = s.substr(j + 1, length);
            result.push_back(word);
            i = j + 1 + length; // move pointer forward
        }
        return result;
    }
};
