class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;

        vector<int> arr(256,-1);
        vector<int> arr2(256,-1);
        for(int i=0;i<s.size();i++){
            if(arr[s[i]]!=arr2[t[i]]){
                return false;
            }
            arr[s[i]] = i;
            arr2[t[i]] = i;
        }
     return true;
    }
};