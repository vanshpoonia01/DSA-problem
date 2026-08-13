class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
      //  unordered_map<int,int>mp;
        int p=1;
        int c=0;
        int l=0;
        int r=0;
        for(int i=0;i<nums.size();i++){
            p*=nums[i];
            while(p>=k &&i>=l){
                p/=nums[l++];
            }
            r+= i-l+1;
        }
        return r;
    }
};