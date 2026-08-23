class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left(nums.size());
        int n= nums.size();
        left[0]=0;
        for(int i=1;i<n;i++){
            left[i] = nums[i-1]+left[i-1];
        }
          vector<int>right(n);
       
        right[n-1]=0;
        for(int i=n-2;i>=0;i--){
            right[i] = nums[i+1]+ right[i+1];
        }
        for(int i=0;i<n;i++){
            nums[i] = abs(left[i]-right[i]);
        }
        return nums;
    }
};