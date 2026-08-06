class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l =0;
        int ans = INT_MAX;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                ans = min(ans,i-l+1);
                sum-=nums[l++];
            }
        }
        if( ans == INT_MAX) return 0;
        return ans;
    }
};