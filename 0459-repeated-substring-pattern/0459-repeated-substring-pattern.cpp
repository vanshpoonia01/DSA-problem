class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i=1;i<=s.size()/2;i++){
            if(s.size()%1==0){
                string t = s.substr(0,i);
                string temp = "";
                while(temp.size()<s.size()){
                    temp+=t;
                }
                if(temp==s){
                    return true;
                }
            }
        }
        return false;
    }
};