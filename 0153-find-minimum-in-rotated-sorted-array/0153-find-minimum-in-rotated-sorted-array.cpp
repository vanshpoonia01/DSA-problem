class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int s= 0;
        int e = n-1;
         if(nums[0] <= nums[n-1])
            return nums[0];
        while(s<=e){
                int mid = (s+e)/2;
                if(mid<n-1 && nums[mid]>nums[mid+1]){
                    return nums[mid+1];
                }
                if(mid>0 &&nums[mid]<nums[mid-1]) return nums[mid];

                if(nums[mid]>=nums[0]){
                                 s =mid+1;
                }
                else{
                    e = mid-1;
                }
        }
        return 0;
    }
};