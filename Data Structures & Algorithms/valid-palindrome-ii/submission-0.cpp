class Solution {
public:

    bool palindrome(int l, int r, string & str){
        while(l<r){
            if(str[l] != str[r]) return false;
            l++;
            r--;
        }
        return true;
        
    }

    bool validPalindrome(string s) {
        int r = s.size()-1;
        int l = 0;

        while(l<r){

            if(s[l] != s[r]){
                return palindrome(l+1,r,s) || palindrome(l,r-1,s);
            }
            l++;
            r--;
        }
        return true;
    }
};