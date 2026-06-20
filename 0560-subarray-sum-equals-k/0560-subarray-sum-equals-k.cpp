class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n= nums.size();
         unordered_map<int ,int >m;
         int s=0;
         int p=0;
         m[0]=1;
         for(int i=0;i<n;i++){
            p+=nums[i];
            if(m.count(p-k)){
                s+=m[p-k];
            }
               m[p]++;
           
         }
         return s;
    }
};