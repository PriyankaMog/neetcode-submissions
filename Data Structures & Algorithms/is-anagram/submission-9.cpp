// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         if(t==s){
//             return true;
//         }
//         return false;
//     }
// };




// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         unordered_map<char, int> freq;
//         for(char c:s){
//             freq[c]++;
//             }
//         for(char c:t){
//             freq[c]--;
//         }    
//         for(auto it:freq){
//             if(it.second!=0){
//                 return false;;
//             }
          
//         }
//         return true;
//         }
// };



//For Method 3 (Array Counter) in the Valid Anagram problem


class Solution {
    public:
    bool isAnagram(string s, string t){
        vector<int> count(26,0);

        for(int i:s){
            count[i-'a']++;
        }
        for(int i:t){
            count[i-'a']--;
        }
        for(int it:count){
            if(it!=0){
                return false;;
            }
        }
        return true;
    }

};