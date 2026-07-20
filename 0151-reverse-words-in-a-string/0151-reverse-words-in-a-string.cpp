class Solution {
public:
    string reverseWords(string s) {
        int c= s.size();
        reverse(s.begin(),s.end());
        string ans = "";
        string word ="";
     for(int i=0;i<c;i++){
       if(s[i]!=' '){
        word +=s[i];
       }
       if(s[i]==' '&&word!=""){
        reverse(word.begin(),word.end());
        ans+=word + ' ';
        word = "";
       }
     }
     if(word!=""){
        reverse(word.begin(),word.end());
        ans+=word;
     }
     if(ans.back()==' ')
    ans.pop_back();
     return ans;
    }
};