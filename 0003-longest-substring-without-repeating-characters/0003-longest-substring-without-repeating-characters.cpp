class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     vector<int>count(256,0);
     int first=0;
     int second =0;
     int len=0;
     while(second<s.size()){
        while(count[s[second]]>0){
            count[s[first]]--;
            first++;
        }
        count[s[second]]++;
        len =max(len,second-first+1);
        second++;
     }
     return len;
    }
};