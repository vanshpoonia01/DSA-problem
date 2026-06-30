class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>num(26,0);
        if(s.size()!=t.size()) return false;
        int c=0;
        for(int i=0;i<s.size();i++){
        num[(s[i]-'a')]++;
        }
        for(int i=0;i<t.size();i++){
        num[(t[i]-'a')]--;
        }
        for(int i=0;i<26;i++){
            if(num[i]>0) return false;
        }
        return true;
    }
};