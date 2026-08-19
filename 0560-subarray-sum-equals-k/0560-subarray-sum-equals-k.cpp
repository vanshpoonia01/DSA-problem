class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int p=0;
        int c=0;
        mp[0]=1;
   for(int i=0;i<nums.size();i++){
          p+=nums[i];
        if(mp.count(p-k)){
             c+=mp[p-k];
        }
        mp[p]++;
 }
 return c;
    }
};