class Solution {
public:
    bool isPalindrome(string s) {
        string c="";
        for(int ch:s){
            if(isalnum(ch)){
                c+=tolower(ch);
            }
        }
        int left=0,right=c.size()-1;
        while(left<right){
            if(c[left]!=c[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};
