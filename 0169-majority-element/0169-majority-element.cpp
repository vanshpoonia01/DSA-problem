class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=  nums.size();
        int s=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(s==0){
            c=nums[i];
            s=1;
            }
           else if(c==nums[i]){
                s++;
            }else  s--;
           
        }
        int t=0;
        for(int i=0;i<n;i++){
            if(nums[i]==c) t++;
        }
        if(t>n/2) return c;
        else return 0;
    }
};