class Solution {
public:
    string reverseWords(string s) {
        int c= s.size();
        reverse(s.begin(),s.end());
        string ans = "";
        string word ="";
          for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                word+=s[i];
            }else if(word!=""){
                reverse(word.begin(),word.end());
                ans+=word+" ";
                word = "";
            }
          }
          if(word!=""){
             reverse(word.begin(),word.end());
                ans+=word;
          }else{
            ans.pop_back();
          }
          return ans;
    }
};