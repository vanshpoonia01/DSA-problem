class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxi = INT_MIN;
        int m=0;
        int mini =INT_MAX;
        int s =0;

  int t=0;
        for(int i=0;i<nums.size();i++){
            
            t+=nums[i];
            m = max(nums[i], m+ nums[i]);
            maxi = max(m,maxi);
            s = min(nums[i],s+nums[i]);
            mini = min(s,mini);
        }
        if(maxi<0)return maxi;
         return max(maxi,t-mini);
    }
};