class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s =  *max_element(weights.begin(),weights.end());
        int e=0;
        for(int i=0;i<weights.size();i++){
            e+=weights[i];
        }
     int    ans =e;
        while(s<=e){
            int mid = s+(e-s)/2;
            int a=0;
            int c=1;
            for(int i=0;i<weights.size();i++){
               a+=weights[i];
               if(a>mid){
                  a= weights[i];
                  c++;
               }
            }
            if(c<=days) {
                ans= mid;
                e= mid-1;
            }else{
                s= mid+1;
            }
            
        }
        return ans;
    }
};