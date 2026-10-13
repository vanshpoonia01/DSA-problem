class Solution {
public:
    bool isAnagram(string s, string t) {
    vector<int>arr(26,0);
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
   vector<int>ar(26,0);
   for(int i=0;i<t.size();i++){
      ar[t[i]-'a']++;
   }
   for(int i=0;i<26;i++){
    if(arr[i]!=ar[i]){
        return false;
    }
   }
   return true;
    }
};