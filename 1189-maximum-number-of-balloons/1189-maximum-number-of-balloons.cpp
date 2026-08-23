class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>arr(26,0);
        for(int i=0;i<text.size();i++){
            arr[text[i]-'a']++;
        }
        string str = "balloon";
        int ans =INT_MAX;
        arr['o'-'a']/=2;
        arr['l'-'a']/=2;
        for(int i=0;i<str.size();i++){
            

            ans =min(ans,arr[str[i]-'a']);
        }
        return ans;
    }
};