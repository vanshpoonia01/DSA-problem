class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
       for(int i=1;i<s.size()-1;i++){
        if(mp[s[i-1]]!=mp[s[i]]||mp[s[i+1]]!=mp[s[i]]) return false;
       }
       return true;
    }
};