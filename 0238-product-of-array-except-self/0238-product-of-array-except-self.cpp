class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int>perfix(n,0);
        perfix[0]=1;
        for(int i=1;i<n;i++){
        perfix[i] = perfix[i-1]*nums[i-1];
        }
        vector<int>suffix(n,0);
        suffix[n-1]= 1;
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i+1];
        }
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=perfix[i]*suffix[i];
        }
      return ans;
    }
};