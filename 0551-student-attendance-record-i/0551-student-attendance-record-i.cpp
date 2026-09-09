class Solution {
public:
    bool checkRecord(string s) {
        int l=0,a=0;
        for(int i=0;i<s.size();i++){
              if(s[i]=='L')l++;
              if(l==3)return false;
              if(s[i]=='A')a++;
              if(s[i]!='L') l=0;

        }
        return (a<2);
    }
};