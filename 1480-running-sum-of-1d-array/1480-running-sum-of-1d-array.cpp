class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>num;
        int a=0;
        for(int i=0;i<nums.size();i++){
            a+=nums[i];
            num.push_back(a);
        }
        return num;
    }
};