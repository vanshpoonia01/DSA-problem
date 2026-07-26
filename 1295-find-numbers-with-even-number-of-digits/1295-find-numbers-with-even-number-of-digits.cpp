class Solution {
public:
    int findNumbers(vector<int>& nums) {
     int b=0;
        for(int i=0;i<nums.size();i++){
            int a = nums[i];
            int c=0;
            while(a>0){
                c++;
                a/=10;
            }
    if(c%2==0)b++;
        }
        return b;
    }
};