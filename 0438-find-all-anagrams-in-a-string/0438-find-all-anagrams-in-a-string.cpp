class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp2;
        for(int i=0;i<p.size();i++){
            mp[p[i]]++;
        }
        int n= p.size();
        for(int i=0;i<n;i++){
            mp2[s[i]]++;
        }
        vector<int>ans;
        if(mp == mp2) ans.push_back(0);
        for(int i=n;i<s.size();i++){
            mp2[s[i]]++;
            mp2[s[i-n]]--;
            if( mp2[s[i-n]]==0)  mp2.erase(s[i-n]);
            if(mp == mp2) ans.push_back(i-n+1);

        }
        return ans;

    }
};