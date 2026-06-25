class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
      
        int a= 2*n;
        vector<int>num(a);
        int j=0;
        for(int i=0;i<n;i++){
                num[i]=nums[i];
        }
         for(int i=n;i<a;i++){
                num[i]=nums[j++];
        }
        return num;
    }
};