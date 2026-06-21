class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        int n= nums.size();
            int f=-1;
        int s=0;
        int e= n-1;
        while(s<=e){
            int m= (s+e)/2;
            if(nums[m]==t){
                f=m;
                e = m-1;
            }else if(nums[m]>t){
                e = m-1;
            }
            else{
                s= m+1;
            }
        }
              int l=-1;
        int ss=0;
        int ee= n-1;
        while(ss<=ee){
            int m= (ss+ee)/2;
            if(nums[m]==t){
                l=m;
                ss = m+1;
            }else if(nums[m]>t){
                ee = m-1;
            }
            else{
                ss= m+1;
            }
        }
        return {f,l};
    }
};