class Solution {
public:
    string reverseWords(string s) {
        int c= s.size();
        reverse(s.begin(),s.end());
        string a="";
        string w="";
        for(int i=0;i<c;i++){
            if(s[i] == ' '){
                if(!w.empty()){
                reverse(w.begin(),w.end());
                a += w +' ';
                w="";
                }
            }else {
                w+=s[i];
            }
        }
        if(!w.empty()) {
            reverse(w.begin(),w.end());
        a+=w;
        }
        else{
            a.pop_back();
        }
        
        return a;
    }
};