class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e =2;
        int o=1;
        int sum =0;
        for(int i=0;i<n;i++){
            sum+=o;
            o+=2;
        }
       int s =0;
         for(int i=0;i<n;i++){
          s+=e;
          e+=2;
        }
        int m=0;
        for(int i=1;i<=s;i++){
            if(sum%i==0 &&s%i==0){
                m=max(m,i);
            }
        }
        return m;
    }
};