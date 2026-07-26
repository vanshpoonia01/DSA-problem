class Solution {
public:
    string customSortString(string order, string s) {
    vector<int>a(26,0);
    string ans = "";
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    for(int i=0;i<order.size();i++){
        while(a[order[i]-'a']>0){
                ans+=order[i];
                a[order[i]-'a']--;
        }
    }
    for(int i=0;i<26;i++){
        while(a[i]>0){
            ans+=char(i+'a');
            a[i]--;
        }
    }
    return ans;
    }
};