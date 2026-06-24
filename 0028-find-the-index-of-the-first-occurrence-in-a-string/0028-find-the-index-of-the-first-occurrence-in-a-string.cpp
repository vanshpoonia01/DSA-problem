class Solution {
public:
    int strStr(string h, string s) {
        int n= h.size();
        int n1=s.size();
        if(n<n1){
            return -1;
        }
        for(int i=0;i<n;i++){
           int j=0;
           while(j<n1&& h[i+j]==s[j]){
            j++;
           }
           if(j==n1){
            return i;
           }
            
        }
         return -1;
    }
};