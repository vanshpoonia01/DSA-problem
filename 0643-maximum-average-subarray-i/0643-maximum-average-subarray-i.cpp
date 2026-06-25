class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<k;i++){
            s+=nums[i];
        }
        int maxi =s;
        for(int i=k;i<n;i++){
            s = s-nums[i-k]+nums[i];
            maxi = max(maxi,s);
        }
      double a = (double)maxi/k;
      return a;
    }
};