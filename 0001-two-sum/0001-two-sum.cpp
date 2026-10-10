class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int>mp;
         int p=0;
        // mp[0]=1;
         for(int i=0;i<nums.size();i++){
          p=nums[i];
          if(mp.count(target-p)){
            return {i,mp[target-p]};
          }  
          mp[p]=i;
         }
         return{};
    }
};