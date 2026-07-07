class Solution {
public:
    bool isPalindrome(string s) {
       // to_lower(s);
        string a;
        for(int i=0;i<s.size();i++){
           s[i]= tolower(s[i]);
            if((s[i]>='a'&&s[i]<='z')||s[i]>='0'&&s[i]<='9') a+=s[i];

        }
     
        s=a;
         reverse(s.begin(),s.end());
        if(s==a) return true;
        return false;
    }
};