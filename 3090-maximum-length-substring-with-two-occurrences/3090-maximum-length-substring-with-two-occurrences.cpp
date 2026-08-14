class Solution {
public:
    int maximumLengthSubstring(string s) {
    unordered_map<char,int>mp;
    int l=0;
    int ans=0;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
        while(mp[s[i]]>2){
            mp[s[l++]]--;
        }
        ans = max(ans,i-l+1);
    }
    return ans;
    }
};