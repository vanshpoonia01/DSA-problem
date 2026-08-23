class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
                if(nums[i]/10==0) arr.push_back(nums[i]);
                else{
                    int a = nums[i];
                    vector<int>temp;
                    while(a>0){
                        temp.push_back(a%10);
                        a/=10;
                    }
                    for(int i=temp.size()-1;i>=0;i--){
                     arr.push_back(temp[i]);
                    }
                }
        }
        return arr;
    }
};