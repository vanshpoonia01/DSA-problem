class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans =0;
        int sum =0;
        unordered_map<int,int>m;
        m[0]=-1;
     for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            sum-=1;
        }else{
            sum+=1;
        }
        if(m.count(sum)){
            ans = max(ans,i-m[sum]);
        }else{
        m[sum]=i;
     }
     }
     return ans;
    }
};