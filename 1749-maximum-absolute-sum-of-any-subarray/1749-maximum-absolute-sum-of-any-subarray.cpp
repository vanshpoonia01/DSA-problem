class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=0;
        int maxi = INT_MIN;
        int csum =0;
        int cmin =0;
        int mini =INT_MAX;
        for(int i=0;i<nums.size();i++){
          csum = max(nums[i],csum+nums[i]);
          maxi = max(maxi,csum);
          cmin = min(nums[i],cmin+nums[i]);
          mini = min(mini,cmin);
        }
        return  max(maxi,abs(mini));
    }
};