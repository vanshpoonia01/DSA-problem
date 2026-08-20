class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int a=INT_MIN;
     for(int j=1;j<nums.size();j++){
        for(int i=0;i<j;i++){
             a= max(a,nums[j]-nums[i]);
        }
     }
      if(a <= 0)
            return -1;
     return a;
    }
};