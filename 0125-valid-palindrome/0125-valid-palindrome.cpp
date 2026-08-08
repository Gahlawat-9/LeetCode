class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for(char c : s){
            if(isalnum(c)){
                res += tolower(c);
            }
        }
        for(int i=0; i<res.length()/2; i++){
            if(res[i] != res[res.length()-i-1])
                return false;
        }
        return true;
    }
};