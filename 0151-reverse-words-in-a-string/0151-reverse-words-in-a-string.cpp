class Solution {
public:
    string reverseWords(string s) {
        int a= s.size();
        reverse(s.begin(),s.end());
        string t;
        string w ;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '&&w.size()>0){
                reverse(w.begin(),w.end());
                t  += w +" ";
                w="";
               
            }
            else if(s[i]!=' '){
            w +=s[i];
            }
            else{

            }
            
        } 
         reverse(w.begin(),w.end());
        t  += w ;
          if(!t.empty() && t.back() == ' ')
            t.pop_back();
        return t;
    }
};