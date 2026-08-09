class Solution {
public:
    void expand(string s,int l,int r,int &bestLeft,int &bestRight){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        l++,r--;
        if(r-l+1>bestRight-bestLeft+1){
            bestLeft=l;
            bestRight=r;
        }
    }
    string longestPalindrome(string s) {
        int bestLeft = 0;
        int bestRight = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {

            // Odd length palindrome
            expand(s,i,i,bestLeft,bestRight);
             // even length palindrome
            expand(s,i,i+1,bestLeft,bestRight);
        }
            
        return s.substr(bestLeft, bestRight-bestLeft+1);
    }
};