class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>count(256,0);
        int f=0;
        int l=0;
        int len=0;
        while(l<s.size()){
            while(count[s[l]]>0){
            count[s[f]]=0;
            f++;
            }
            count[s[l]] =1;
            len = max(len,l-f+1);
            l++;
        }
        return len;
    }
};