class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> f(26,0);
     
        for(int i=0;i<s1.length();i++){
            f[s1[i]- 'a']++;
        }
        int a=  s1.size();
        for(int i=0;i<s2.size();i++){
           int w= 0, j=i;
           vector<int> c(26,0);
           while(w<a&&j<s2.size()){
              c[s2[j]-'a']++;
              w++;j++;
            
           }
               if(c==f) return true;
         
        }
        return false;
    }
};